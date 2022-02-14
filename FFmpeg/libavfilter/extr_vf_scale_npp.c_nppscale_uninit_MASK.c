
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int frames_ctx; int frame; } ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int tmp_frame; TYPE_4__* stages; } ;
typedef TYPE_1__ NPPScaleContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(AVFilterContext *VAR_0)
{
    NPPScaleContext *VAR_1 = VAR_0->priv;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->stages); VAR_2++) {
        FUNC_2(&VAR_1->stages[VAR_2].frame);
        FUNC_1(&VAR_1->stages[VAR_2].frames_ctx);
    }
    FUNC_2(&VAR_1->tmp_frame);
}
