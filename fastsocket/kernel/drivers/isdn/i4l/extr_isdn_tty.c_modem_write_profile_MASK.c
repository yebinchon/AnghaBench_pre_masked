
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lmsn; int plmsn; int msn; int pmsn; int mdmreg; int profile; } ;
typedef TYPE_1__ atemu ;
struct TYPE_5__ {scalar_t__ profd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(atemu * VAR_5)
{
 FUNC_0(VAR_5->profile, VAR_5->mdmreg, VAR_1);
 FUNC_0(VAR_5->pmsn, VAR_5->msn, VAR_2);
 FUNC_0(VAR_5->plmsn, VAR_5->lmsn, VAR_0);
 if (VAR_4->profd)
  FUNC_1(VAR_3, VAR_4->profd, 1);
}
