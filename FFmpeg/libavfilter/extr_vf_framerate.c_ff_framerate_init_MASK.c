
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bitdepth; int blend_factor_max; int blend; } ;
typedef TYPE_1__ FrameRateContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(FrameRateContext *VAR_3)
{
    if (VAR_3->bitdepth == 8) {
        VAR_3->blend_factor_max = 1 << FUNC_0(8);
        VAR_3->blend = VAR_2;
    } else {
        VAR_3->blend_factor_max = 1 << FUNC_0(16);
        VAR_3->blend = VAR_1;
    }
    if (VAR_0)
        FUNC_1(VAR_3);
}
