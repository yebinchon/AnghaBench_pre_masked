
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dc390_dcb {scalar_t__ TargetID; struct dc390_dcb* pNextDCB; int SyncMode; int CtrlR4; int CtrlR3; int SyncOffset; int SyncPeriod; int TargetLUN; } ;
struct dc390_acb {scalar_t__ DCBCnt; struct dc390_dcb* pLinkDCB; int scan_devices; } ;



__attribute__((used)) static void
FUNC_0( struct dc390_acb* VAR_0, struct dc390_dcb* VAR_1 )
{
    u8 VAR_2, VAR_3, VAR_4;
    struct dc390_dcb* VAR_5;

    if( !(VAR_1->TargetLUN) )
    {
 if( !VAR_0->scan_devices )
 {
     VAR_5 = VAR_0->pLinkDCB;
     VAR_4 = VAR_0->DCBCnt;
     VAR_2 = VAR_1->TargetID;
     for(VAR_3=0; VAR_3<VAR_4; VAR_3++)
     {
  if( VAR_5->TargetID == VAR_2 )
  {
      VAR_5->SyncPeriod = VAR_1->SyncPeriod;
      VAR_5->SyncOffset = VAR_1->SyncOffset;
      VAR_5->CtrlR3 = VAR_1->CtrlR3;
      VAR_5->CtrlR4 = VAR_1->CtrlR4;
      VAR_5->SyncMode = VAR_1->SyncMode;
  }
  VAR_5 = VAR_5->pNextDCB;
     }
 }
    }
    return;
}
