
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ulp_bde64 {int dummy; } ;
struct lpfc_sli_ring {int dummy; } ;
struct TYPE_8__ {unsigned long data; int function; } ;
struct lpfc_sli {struct lpfc_sli_ring* ring; TYPE_4__ mbox_tmo; } ;
struct lpfc_hba {int work_ha_mask; int cfg_sg_seg_cnt; int cfg_sg_dma_buf_size; int cfg_total_seg_cnt; int cfg_sriov_nr_virtfn; scalar_t__ max_vports; int max_vpi; scalar_t__ cfg_enable_bg; struct lpfc_sli sli; int menlo_flag; TYPE_1__* pcidev; TYPE_4__ eratt_poll; TYPE_4__ fabric_block_timer; TYPE_4__ fcp_poll_timer; TYPE_4__ hb_tmofunc; } ;
struct fcp_rsp {int dummy; } ;
struct fcp_cmnd {int dummy; } ;
struct TYPE_7__ {int sg_tablesize; } ;
struct TYPE_6__ {int sg_tablesize; } ;
struct TYPE_5__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_19 ;
 int FUNC_2 (struct lpfc_hba*) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_3 (struct lpfc_hba*,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (struct lpfc_hba*,int ,int,char*,int,...) ;
 int FUNC_5 (struct lpfc_hba*,int ) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 TYPE_3__ VAR_24 ;
 TYPE_2__ VAR_25 ;

__attribute__((used)) static int
FUNC_8(struct lpfc_hba *VAR_26)
{
 struct lpfc_sli *VAR_27;
 int VAR_28;






 FUNC_0(&VAR_26->hb_tmofunc);
 VAR_26->hb_tmofunc.function = VAR_20;
 VAR_26->hb_tmofunc.data = (unsigned long)VAR_26;

 VAR_27 = &VAR_26->sli;

 FUNC_0(&VAR_27->mbox_tmo);
 VAR_27->mbox_tmo.function = VAR_21;
 VAR_27->mbox_tmo.data = (unsigned long) VAR_26;

 FUNC_0(&VAR_26->fcp_poll_timer);
 VAR_26->fcp_poll_timer.function = VAR_23;
 VAR_26->fcp_poll_timer.data = (unsigned long) VAR_26;

 FUNC_0(&VAR_26->fabric_block_timer);
 VAR_26->fabric_block_timer.function = VAR_19;
 VAR_26->fabric_block_timer.data = (unsigned long) VAR_26;

 FUNC_0(&VAR_26->eratt_poll);
 VAR_26->eratt_poll.function = VAR_22;
 VAR_26->eratt_poll.data = (unsigned long) VAR_26;


 VAR_26->work_ha_mask = (VAR_3 | VAR_5 | VAR_4);
 VAR_26->work_ha_mask |= (VAR_6 << (VAR_13 * 4));


 FUNC_2(VAR_26);
 if (VAR_26->pcidev->device == VAR_18) {
  VAR_26->menlo_flag |= VAR_7;

  if (VAR_26->cfg_sg_seg_cnt < VAR_12)
   VAR_26->cfg_sg_seg_cnt = VAR_12;
 }

 if (!VAR_26->sli.ring)
  VAR_26->sli.ring = (struct lpfc_sli_ring *)
   FUNC_1(VAR_17 *
   sizeof(struct lpfc_sli_ring), VAR_2);
 if (!VAR_26->sli.ring)
  return -VAR_1;







 VAR_25.sg_tablesize = VAR_26->cfg_sg_seg_cnt;
 VAR_24.sg_tablesize = VAR_26->cfg_sg_seg_cnt;


 if (VAR_26->cfg_enable_bg) {
  VAR_26->cfg_sg_dma_buf_size = sizeof(struct fcp_cmnd) +
   sizeof(struct fcp_rsp) +
   (VAR_14 * sizeof(struct ulp_bde64));

  if (VAR_26->cfg_sg_seg_cnt > VAR_15)
   VAR_26->cfg_sg_seg_cnt = VAR_15;


  VAR_26->cfg_total_seg_cnt = VAR_14;
 } else {





  VAR_26->cfg_sg_dma_buf_size = sizeof(struct fcp_cmnd) +
   sizeof(struct fcp_rsp) +
   ((VAR_26->cfg_sg_seg_cnt + 2) * sizeof(struct ulp_bde64));


  VAR_26->cfg_total_seg_cnt = VAR_26->cfg_sg_seg_cnt + 2;
 }

 FUNC_4(VAR_26, VAR_8, VAR_11 | VAR_10,
   "9088 sg_tablesize:%d dmabuf_size:%d total_bde:%d\n",
   VAR_26->cfg_sg_seg_cnt, VAR_26->cfg_sg_dma_buf_size,
   VAR_26->cfg_total_seg_cnt);

 VAR_26->max_vpi = VAR_16;

 VAR_26->max_vports = 0;




 FUNC_7(VAR_26);
 FUNC_6(VAR_26);


 if (FUNC_3(VAR_26, VAR_0))
  return -VAR_1;





 if (VAR_26->cfg_sriov_nr_virtfn > 0) {
  VAR_28 = FUNC_5(VAR_26,
       VAR_26->cfg_sriov_nr_virtfn);
  if (VAR_28) {
   FUNC_4(VAR_26, VAR_9, VAR_11,
     "2808 Requested number of SR-IOV "
     "virtual functions (%d) is not "
     "supported\n",
     VAR_26->cfg_sriov_nr_virtfn);
   VAR_26->cfg_sriov_nr_virtfn = 0;
  }
 }

 return 0;
}
