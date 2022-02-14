
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flex_ratio_max; int flex_ratio_min; int flex_ratio; int busFreq; int bus2tsc; int tscGranularity; int tscFCvtn2t; int tscFCvtt2n; int tscFreq; int busFCvtn2t; int busFCvtt2n; } ;
typedef TYPE_1__ tscInfo_t ;


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

void
FUNC_0(tscInfo_t *VAR_11)
{
 VAR_11->busFCvtt2n = VAR_2;
 VAR_11->busFCvtn2t = VAR_1;
 VAR_11->tscFreq = VAR_9;
 VAR_11->tscFCvtt2n = VAR_8;
 VAR_11->tscFCvtn2t = VAR_7;
 VAR_11->tscGranularity = VAR_10;
 VAR_11->bus2tsc = VAR_0;
 VAR_11->busFreq = VAR_3;
 VAR_11->flex_ratio = VAR_4;
 VAR_11->flex_ratio_min = VAR_6;
 VAR_11->flex_ratio_max = VAR_5;
}
