
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int height; int width; scalar_t__* linesize; scalar_t__* data; } ;
struct TYPE_8__ {scalar_t__ max_drop_count; int drop_count; int vsub; int hsub; } ;
typedef TYPE_1__ DecimateContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_0,
                          AVFrame *VAR_1, AVFrame *VAR_2)
{
    DecimateContext *VAR_3 = VAR_0->priv;
    int VAR_4;

    if (VAR_3->max_drop_count > 0 &&
        VAR_3->drop_count >= VAR_3->max_drop_count)
        return 0;
    if (VAR_3->max_drop_count < 0 &&
        (VAR_3->drop_count-1) > VAR_3->max_drop_count)
        return 0;

    for (VAR_4 = 0; VAR_2->data[VAR_4] && VAR_2->linesize[VAR_4]; VAR_4++) {





        int VAR_5 = VAR_4 == 1 || VAR_4 == 2 ? VAR_3->vsub : 0;
        int VAR_6 = VAR_4 == 1 || VAR_4 == 2 ? VAR_3->hsub : 0;
        if (FUNC_1(VAR_0,
                        VAR_1->data[VAR_4], VAR_1->linesize[VAR_4],
                        VAR_2->data[VAR_4], VAR_2->linesize[VAR_4],
                        FUNC_0(VAR_2->width, VAR_6),
                        FUNC_0(VAR_2->height, VAR_5))) {
            FUNC_2();
            return 0;
        }
    }

    FUNC_2();
    return 1;
}
