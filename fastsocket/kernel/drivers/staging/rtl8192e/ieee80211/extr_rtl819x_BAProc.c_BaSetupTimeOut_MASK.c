
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bValid; } ;
struct TYPE_4__ {int bAddBaReqInProgress; int bAddBaReqDelayed; TYPE_1__ TxPendingBARecord; } ;
typedef TYPE_2__* PTX_TS_RECORD ;



void FUNC_0(unsigned long VAR_0)
{
 PTX_TS_RECORD VAR_1 = (PTX_TS_RECORD)VAR_0;

 VAR_1->bAddBaReqInProgress = 0;
 VAR_1->bAddBaReqDelayed = 1;
 VAR_1->TxPendingBARecord.bValid = 0;
}
