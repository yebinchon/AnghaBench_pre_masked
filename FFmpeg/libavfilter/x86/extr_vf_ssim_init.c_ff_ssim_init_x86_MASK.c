
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssim_4x4_line; int ssim_end_line; } ;
typedef TYPE_1__ SSIMDSPContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(SSIMDSPContext *VAR_4)
{
    int VAR_5 = FUNC_3();

    if (VAR_0 && FUNC_1(VAR_5))
        VAR_4->ssim_4x4_line = VAR_1;
    if (FUNC_0(VAR_5))
        VAR_4->ssim_end_line = VAR_3;
    if (FUNC_2(VAR_5))
        VAR_4->ssim_4x4_line = VAR_2;
}
