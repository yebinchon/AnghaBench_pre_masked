
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int resample_linear; int resample_common; int resample_one; } ;
struct TYPE_8__ {int format; TYPE_1__ dsp; } ;
typedef TYPE_2__ ResampleContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




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
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(ResampleContext *VAR_15)
{
    switch(VAR_15->format){
    case 129:
        VAR_15->dsp.resample_one = VAR_13;
        VAR_15->dsp.resample_common = VAR_5;
        VAR_15->dsp.resample_linear = VAR_9;
        break;
    case 128:
        VAR_15->dsp.resample_one = VAR_14;
        VAR_15->dsp.resample_common = VAR_6;
        VAR_15->dsp.resample_linear = VAR_10;
        break;
    case 130:
        VAR_15->dsp.resample_one = VAR_12;
        VAR_15->dsp.resample_common = VAR_4;
        VAR_15->dsp.resample_linear = VAR_8;
        break;
    case 131:
        VAR_15->dsp.resample_one = VAR_11;
        VAR_15->dsp.resample_common = VAR_3;
        VAR_15->dsp.resample_linear = VAR_7;
        break;
    }

    if (VAR_2) FUNC_2(VAR_15);
    else if (VAR_1) FUNC_1(VAR_15);
    else if (VAR_0) FUNC_0(VAR_15);
}
