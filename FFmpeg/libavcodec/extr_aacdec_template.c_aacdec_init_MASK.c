
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int subband_scale; int vector_pow43; int update_ltp; int windowing_and_mdct_ltp; int apply_tns; int apply_ltp; int imdct_and_windowing; } ;
typedef TYPE_1__ AACContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(AACContext *VAR_8)
{
    VAR_8->imdct_and_windowing = VAR_3;
    VAR_8->apply_ltp = VAR_1;
    VAR_8->apply_tns = VAR_2;
    VAR_8->windowing_and_mdct_ltp = VAR_7;
    VAR_8->update_ltp = VAR_5;






    if(VAR_0)
        FUNC_0(VAR_8);

}
