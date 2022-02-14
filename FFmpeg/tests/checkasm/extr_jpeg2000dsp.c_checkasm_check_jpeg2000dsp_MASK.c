
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mct_decode; } ;
typedef TYPE_1__ Jpeg2000DSPContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
    Jpeg2000DSPContext VAR_2;

    FUNC_3(&VAR_2);

    if (FUNC_0(VAR_2.mct_decode[VAR_0], "jpeg2000_rct_int"))
        FUNC_2();
    if (FUNC_0(VAR_2.mct_decode[VAR_1], "jpeg2000_ict_float"))
        FUNC_1();

    FUNC_4("mct_decode");
}
