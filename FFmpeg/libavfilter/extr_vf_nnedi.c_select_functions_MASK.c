
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pscrn; int fapprox; int expfunc; int dot_prod; int extract; int wae5; int compute_network0; int readpixels; int process_line0; int evalfunc_1; int evalfunc_0; int copy_pad; } ;
typedef TYPE_1__ NNEDIContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_0(NNEDIContext *VAR_16)
{
    VAR_16->copy_pad = VAR_5;
    VAR_16->evalfunc_0 = VAR_9;
    VAR_16->evalfunc_1 = VAR_10;


    VAR_16->process_line0 = VAR_14;

    if (VAR_16->pscrn < 2) {
        if (VAR_16->fapprox & 1) {
            VAR_16->readpixels = VAR_0;
            VAR_16->compute_network0 = VAR_3;
        } else {
            VAR_16->readpixels = VAR_13;
            VAR_16->compute_network0 = VAR_2;
        }
    } else {

        VAR_16->readpixels = VAR_1;
        VAR_16->compute_network0 = VAR_4;
    }


    VAR_16->wae5 = VAR_15;

    if (VAR_16->fapprox & 2) {
        VAR_16->extract = VAR_12;
        VAR_16->dot_prod = VAR_7;
    } else {
        VAR_16->extract = VAR_11;
        VAR_16->dot_prod = VAR_6;
    }

    VAR_16->expfunc = VAR_8;
}
