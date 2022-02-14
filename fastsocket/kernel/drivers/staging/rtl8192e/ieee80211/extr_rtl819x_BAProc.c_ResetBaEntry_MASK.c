
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ShortData; } ;
struct TYPE_5__ {scalar_t__ shortData; } ;
struct TYPE_7__ {int bValid; TYPE_2__ BaStartSeqCtrl; scalar_t__ DialogToken; scalar_t__ BaTimeoutValue; TYPE_1__ BaParamSet; } ;
typedef TYPE_3__* PBA_RECORD ;



void FUNC_0( PBA_RECORD VAR_0)
{
 VAR_0->bValid = 0;
 VAR_0->BaParamSet.shortData = 0;
 VAR_0->BaTimeoutValue = 0;
 VAR_0->DialogToken = 0;
 VAR_0->BaStartSeqCtrl.ShortData = 0;
}
