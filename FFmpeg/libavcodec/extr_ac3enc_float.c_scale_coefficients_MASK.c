
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* float_to_fixed24 ) (scalar_t__,scalar_t__,int) ;} ;
struct TYPE_5__ {int num_blocks; int cpl_on; int channels; scalar_t__ mdct_coef_buffer; scalar_t__ fixed_coef_buffer; TYPE_1__ ac3dsp; } ;
typedef TYPE_2__ AC3EncodeContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(AC3EncodeContext *VAR_1)
{
    int VAR_2 = VAR_0 * VAR_1->num_blocks;
    int VAR_3 = VAR_1->cpl_on;
    VAR_1->ac3dsp.float_to_fixed24(VAR_1->fixed_coef_buffer + (VAR_2 * !VAR_3),
                               VAR_1->mdct_coef_buffer + (VAR_2 * !VAR_3),
                               VAR_2 * (VAR_1->channels + VAR_3));
}
