
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_lport {int dummy; } ;
struct TYPE_2__ {unsigned long data; } ;
struct fc_fcp_pkt {int scsi_pkt_lock; int list; TYPE_1__ timer; int ref_cnt; int xfer_ddp; struct fc_lport* lp; } ;
struct fc_fcp_internal {int scsi_pkt_pool; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct fc_fcp_internal* FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct fc_fcp_pkt* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct fc_fcp_pkt*,int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct fc_fcp_pkt *FUNC_7(struct fc_lport *VAR_1, gfp_t VAR_2)
{
 struct fc_fcp_internal *VAR_3 = FUNC_2(VAR_1);
 struct fc_fcp_pkt *VAR_4;

 VAR_4 = FUNC_4(VAR_3->scsi_pkt_pool, VAR_2);
 if (VAR_4) {
  FUNC_5(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->lp = VAR_1;
  VAR_4->xfer_ddp = VAR_0;
  FUNC_1(&VAR_4->ref_cnt, 1);
  FUNC_3(&VAR_4->timer);
  VAR_4->timer.data = (unsigned long)VAR_4;
  FUNC_0(&VAR_4->list);
  FUNC_6(&VAR_4->scsi_pkt_lock);
 }
 return VAR_4;
}
