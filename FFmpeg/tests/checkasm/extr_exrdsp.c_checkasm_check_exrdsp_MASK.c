
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int predictor; int reorder_pixels; } ;
typedef TYPE_1__ ExrDSPContext ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
    ExrDSPContext VAR_0;

    FUNC_3(&VAR_0);

    if (FUNC_0(VAR_0.reorder_pixels, "reorder_pixels"))
        FUNC_2();

    FUNC_4("reorder_pixels");

    if (FUNC_0(VAR_0.predictor, "predictor"))
        FUNC_1();

    FUNC_4("predictor");
}
