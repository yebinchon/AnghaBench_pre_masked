
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * fixed_coef; int * exp; } ;
struct TYPE_5__ {int (* extract_exponents ) (int ,int ,int) ;} ;
struct TYPE_6__ {int num_blocks; int channels; TYPE_1__ ac3dsp; TYPE_3__* blocks; int cpl_on; } ;
typedef TYPE_2__ AC3EncodeContext ;
typedef TYPE_3__ AC3Block ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(AC3EncodeContext *VAR_1)
{
    int VAR_2 = !VAR_1->cpl_on;
    int VAR_3 = VAR_0 * VAR_1->num_blocks * (VAR_1->channels - VAR_2 + 1);
    AC3Block *VAR_4 = &VAR_1->blocks[0];

    VAR_1->ac3dsp.extract_exponents(VAR_4->exp[VAR_2], VAR_4->fixed_coef[VAR_2], VAR_3);
}
