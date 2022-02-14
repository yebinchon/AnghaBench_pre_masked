
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc390_dcb {int CtrlR4; int CtrlR3; int SyncOffset; int SyncPeriod; } ;
struct dc390_acb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dc390_acb*,struct dc390_dcb*) ;

__attribute__((used)) static void __inline__
FUNC_2 (struct dc390_acb* VAR_4, struct dc390_dcb* VAR_5)
{
  FUNC_0 (VAR_3, VAR_5->SyncPeriod);
  FUNC_0 (VAR_2, VAR_5->SyncOffset);
  FUNC_0 (VAR_0, VAR_5->CtrlR3);
  FUNC_0 (VAR_1, VAR_5->CtrlR4);
  FUNC_1 (VAR_4, VAR_5);
}
