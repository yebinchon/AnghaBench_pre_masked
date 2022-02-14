
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int name ;
struct TYPE_13__ {int nb_inputs; TYPE_2__** inputs; } ;
struct TYPE_12__ {int nb_filters; TYPE_4__** filters; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_1__* dstpad; } ;
struct TYPE_10__ {int needs_fifo; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterGraph ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVFilter ;
typedef int AVClass ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__**,int const*,char*,int *,int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,int ,int ) ;
 int FUNC_3 (char*,int,char*,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterGraph *VAR_1, AVClass *VAR_2)
{
    AVFilterContext *VAR_3;
    int VAR_4, VAR_5, VAR_6;
    int VAR_7 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_1->nb_filters; VAR_4++) {
        VAR_3 = VAR_1->filters[VAR_4];

        for (VAR_5 = 0; VAR_5 < VAR_3->nb_inputs; VAR_5++) {
            AVFilterLink *VAR_8 = VAR_3->inputs[VAR_5];
            AVFilterContext *VAR_9;
            const AVFilter *VAR_10;
            char VAR_11[32];

            if (!VAR_8->dstpad->needs_fifo)
                continue;

            VAR_10 = VAR_3->inputs[VAR_5]->type == VAR_0 ?
                   FUNC_0("fifo") :
                   FUNC_0("afifo");

            FUNC_3(VAR_11, sizeof(VAR_11), "auto_fifo_%d", VAR_7++);

            VAR_6 = FUNC_1(&VAR_9, VAR_10, VAR_11, ((void*)0),
                                               ((void*)0), VAR_1);
            if (VAR_6 < 0)
                return VAR_6;

            VAR_6 = FUNC_2(VAR_8, VAR_9, 0, 0);
            if (VAR_6 < 0)
                return VAR_6;
        }
    }

    return 0;
}
