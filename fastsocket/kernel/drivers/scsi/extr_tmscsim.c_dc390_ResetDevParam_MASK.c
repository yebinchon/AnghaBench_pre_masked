
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc390_dcb {int CtrlR4; struct dc390_dcb* pNextDCB; int CtrlR3; scalar_t__ TagMask; scalar_t__ SyncOffset; scalar_t__ SyncPeriod; int SyncMode; } ;
struct dc390_acb {int glitch_cfg; int ACBFlag; struct dc390_dcb* pLinkDCB; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0( struct dc390_acb* VAR_8 )
{
    struct dc390_dcb *VAR_9, *VAR_10;

    VAR_9 = VAR_8->pLinkDCB;
    if (! VAR_9) return;
    VAR_10 = VAR_9;
    do
    {
 VAR_9->SyncMode &= ~VAR_7;
 VAR_9->SyncPeriod = 0;
 VAR_9->SyncOffset = 0;
 VAR_9->TagMask = 0;
 VAR_9->CtrlR3 = VAR_1;
 VAR_9->CtrlR4 &= VAR_3 | VAR_0 | VAR_2;
 VAR_9->CtrlR4 |= VAR_8->glitch_cfg;
 VAR_9 = VAR_9->pNextDCB;
    }
    while( VAR_10 != VAR_9 );
    VAR_8->ACBFlag &= ~(VAR_5 | VAR_6 | VAR_4);

}
