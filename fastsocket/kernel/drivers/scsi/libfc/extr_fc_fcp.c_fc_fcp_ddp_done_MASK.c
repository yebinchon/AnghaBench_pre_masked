
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* ddp_done ) (struct fc_lport*,int ) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct fc_fcp_pkt {int xfer_ddp; int xfer_len; struct fc_lport* lp; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*,int ) ;

void FUNC_1(struct fc_fcp_pkt *VAR_1)
{
 struct fc_lport *VAR_2;

 if (!VAR_1)
  return;

 if (VAR_1->xfer_ddp == VAR_0)
  return;

 VAR_2 = VAR_1->lp;
 if (VAR_2->tt.ddp_done) {
  VAR_1->xfer_len = VAR_2->tt.ddp_done(VAR_2, VAR_1->xfer_ddp);
  VAR_1->xfer_ddp = VAR_0;
 }
}
