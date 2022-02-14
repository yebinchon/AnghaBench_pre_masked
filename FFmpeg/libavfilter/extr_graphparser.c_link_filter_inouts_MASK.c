
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int nb_inputs; int nb_outputs; TYPE_1__* filter; } ;
struct TYPE_16__ {int pad_idx; TYPE_3__* filter_ctx; struct TYPE_16__* name; struct TYPE_16__* next; } ;
struct TYPE_15__ {int name; } ;
typedef TYPE_2__ AVFilterInOut ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__**,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (void*,int ,char*,int ) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__**,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int,TYPE_3__*,int,void*) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_3,
                              AVFilterInOut **VAR_4,
                              AVFilterInOut **VAR_5, void *VAR_6)
{
    int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_3->nb_inputs; VAR_7++) {
        AVFilterInOut *VAR_9 = *VAR_4;

        if (VAR_9) {
            *VAR_4 = (*VAR_4)->next;
            VAR_9->next = ((void*)0);
        } else if (!(VAR_9 = FUNC_4(sizeof(*VAR_9))))
            return FUNC_0(VAR_2);

        if (VAR_9->filter_ctx) {
            VAR_8 = FUNC_6(VAR_9->filter_ctx, VAR_9->pad_idx, VAR_3, VAR_7, VAR_6);
            FUNC_2(&VAR_9->name);
            FUNC_2(&VAR_9);
            if (VAR_8 < 0)
                return VAR_8;
        } else {
            VAR_9->filter_ctx = VAR_3;
            VAR_9->pad_idx = VAR_7;
            FUNC_1(VAR_5, &VAR_9);
        }
    }

    if (*VAR_4) {
        FUNC_3(VAR_6, VAR_0,
               "Too many inputs specified for the \"%s\" filter.\n",
               VAR_3->filter->name);
        return FUNC_0(VAR_1);
    }

    VAR_7 = VAR_3->nb_outputs;
    while (VAR_7--) {
        AVFilterInOut *VAR_10 = FUNC_4(sizeof(AVFilterInOut));
        if (!VAR_10)
            return FUNC_0(VAR_2);
        VAR_10->filter_ctx = VAR_3;
        VAR_10->pad_idx = VAR_7;
        FUNC_5(VAR_4, VAR_10);
    }

    return 0;
}
