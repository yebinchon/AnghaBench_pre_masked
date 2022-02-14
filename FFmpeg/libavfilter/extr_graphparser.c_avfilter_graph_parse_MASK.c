
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* filter; } ;
struct TYPE_17__ {int * filters; scalar_t__ nb_filters; } ;
struct TYPE_16__ {int pad_idx; TYPE_6__* filter_ctx; void* name; struct TYPE_16__* next; } ;
struct TYPE_15__ {char const* name; } ;
typedef TYPE_2__ AVFilterInOut ;
typedef TYPE_3__ AVFilterGraph ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (void*,int ,char*,char const*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char const*,TYPE_2__**,TYPE_2__**) ;
 int FUNC_6 (TYPE_2__**) ;
 int FUNC_7 (TYPE_6__*,int ,TYPE_6__*,int ) ;
 TYPE_2__* FUNC_8 (void*,TYPE_2__**) ;

int FUNC_9(AVFilterGraph *VAR_2, const char *VAR_3,
                         AVFilterInOut *VAR_4,
                         AVFilterInOut *VAR_5, void *VAR_6)
{
    int VAR_7;
    AVFilterInOut *VAR_8, *VAR_9, *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

    if ((VAR_7 = FUNC_5(VAR_2, VAR_3, &VAR_10, &VAR_11)) < 0)
        goto fail;


    if (VAR_10 && !VAR_10->name)
        VAR_10->name = FUNC_3("in");
    for (VAR_8 = VAR_10; VAR_8; VAR_8 = VAR_8->next) {
        if (!VAR_8->name) {
              FUNC_2(VAR_6, VAR_0,
                     "Not enough inputs specified for the \"%s\" filter.\n",
                     VAR_8->filter_ctx->filter->name);
              VAR_7 = FUNC_0(VAR_1);
              goto fail;
        }
        if (!(VAR_9 = FUNC_8(VAR_8->name, &VAR_5)))
            continue;
        VAR_7 = FUNC_7(VAR_9->filter_ctx, VAR_9->pad_idx,
                            VAR_8->filter_ctx, VAR_8->pad_idx);
        FUNC_6(&VAR_9);
        if (VAR_7 < 0)
            goto fail;
    }


    if (VAR_11 && !VAR_11->name)
        VAR_11->name = FUNC_3("out");
    for (VAR_8 = VAR_11; VAR_8; VAR_8 = VAR_8->next) {
        if (!VAR_8->name) {
            FUNC_2(VAR_6, VAR_0,
                   "Invalid filterchain containing an unlabelled output pad: \"%s\"\n",
                   VAR_3);
            VAR_7 = FUNC_0(VAR_1);
            goto fail;
        }
        if (!(VAR_9 = FUNC_8(VAR_8->name, &VAR_4)))
            continue;
        VAR_7 = FUNC_7(VAR_8->filter_ctx, VAR_8->pad_idx,
                            VAR_9->filter_ctx, VAR_9->pad_idx);
        FUNC_6(&VAR_9);
        if (VAR_7 < 0)
            goto fail;
    }

 fail:
    if (VAR_7 < 0) {
        while (VAR_2->nb_filters)
            FUNC_4(VAR_2->filters[0]);
        FUNC_1(&VAR_2->filters);
    }
    FUNC_6(&VAR_10);
    FUNC_6(&VAR_11);
    FUNC_6(&VAR_4);
    FUNC_6(&VAR_5);
    return VAR_7;
}
