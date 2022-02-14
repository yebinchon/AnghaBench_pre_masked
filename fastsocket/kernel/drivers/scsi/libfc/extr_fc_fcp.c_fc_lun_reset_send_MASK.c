
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* fcp_cmd_send ) (struct fc_lport*,struct fc_fcp_pkt*,int ) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct fc_fcp_pkt {int timer; int recov_retry; struct fc_lport* lp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fc_fcp_pkt*) ;
 int FUNC_1 (struct fc_fcp_pkt*,int ) ;
 int FUNC_2 (struct fc_fcp_pkt*) ;
 int VAR_1 ;
 int FUNC_3 (struct fc_fcp_pkt*) ;
 int FUNC_4 (int *,void (*) (unsigned long),unsigned long) ;
 scalar_t__ FUNC_5 (struct fc_lport*,struct fc_fcp_pkt*,int ) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2)
{
 struct fc_fcp_pkt *VAR_3 = (struct fc_fcp_pkt *)VAR_2;
 struct fc_lport *VAR_4 = VAR_3->lp;

 if (VAR_4->tt.fcp_cmd_send(VAR_4, VAR_3, VAR_1)) {
  if (VAR_3->recov_retry++ >= VAR_0)
   return;
  if (FUNC_0(VAR_3))
   return;
  FUNC_4(&VAR_3->timer, FUNC_6, (unsigned long)VAR_3);
  FUNC_1(VAR_3, FUNC_3(VAR_3));
  FUNC_2(VAR_3);
 }
}
