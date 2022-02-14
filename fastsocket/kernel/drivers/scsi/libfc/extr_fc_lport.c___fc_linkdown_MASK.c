
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* fcp_cleanup ) (struct fc_lport*) ;} ;
struct fc_lport {TYPE_1__ tt; scalar_t__ link_up; } ;


 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*) ;

void FUNC_2(struct fc_lport *VAR_0)
{
 if (VAR_0->link_up) {
  VAR_0->link_up = 0;
  FUNC_0(VAR_0);
  VAR_0->tt.fcp_cleanup(VAR_0);
 }
}
