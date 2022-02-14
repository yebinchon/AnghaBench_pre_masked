
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc390_srb {int MsgCnt; TYPE_1__* pSRBDCB; int * MsgOutBuf; } ;
struct dc390_acb {int dummy; } ;
struct TYPE_2__ {int DCBFlag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0 ( struct dc390_acb* VAR_3, struct dc390_srb* VAR_4 )
{
    VAR_4->MsgOutBuf[0] = VAR_0;
    VAR_4->MsgCnt = 1; VAR_2;
    VAR_4->pSRBDCB->DCBFlag &= ~VAR_1;
}
