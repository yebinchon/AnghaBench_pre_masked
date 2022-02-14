
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bitdepth; int blend; } ;
typedef TYPE_1__ FrameRateContext ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(FrameRateContext *VAR_4)
{
    int VAR_5 = FUNC_3();
    if (VAR_4->bitdepth == 8) {
        if (FUNC_0(VAR_5))
            VAR_4->blend = VAR_2;
        else if (FUNC_2(VAR_5))
            VAR_4->blend = VAR_3;
    } else {
        if (FUNC_0(VAR_5))
            VAR_4->blend = VAR_0;
        else if (FUNC_1(VAR_5))
            VAR_4->blend = VAR_1;
    }
}
