
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* resample_row_hv_2_kernel; void* YCbCr_to_RGB_kernel; void* idct_block_kernel; } ;
typedef TYPE_1__ stbi__jpeg ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(stbi__jpeg *VAR_6)
{
   VAR_6->idct_block_kernel = VAR_2;
   VAR_6->YCbCr_to_RGB_kernel = VAR_0;
   VAR_6->resample_row_hv_2_kernel = VAR_4;
}
