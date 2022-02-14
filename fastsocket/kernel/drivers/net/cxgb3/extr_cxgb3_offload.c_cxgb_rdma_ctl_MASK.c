
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tp_mib_stats {int dummy; } ;
struct rdma_info {struct pci_dev* pdev; scalar_t__ kdb_addr; void* rqt_top; void* rqt_base; void* pbl_top; void* pbl_base; void* tpt_top; void* tpt_base; int udbell_len; int udbell_physbase; } ;
struct rdma_ctrlqp_setup {int size; int base_addr; } ;
struct rdma_cq_setup {int credit_thres; int credits; int ovfl_mode; int size; int base_addr; int id; } ;
struct rdma_cq_op {int credits; int op; int id; } ;
struct pci_dev {int dummy; } ;
struct mc7 {int dummy; } ;
struct ch_mem_range {int addr; int len; scalar_t__ buf; int mem_id; } ;
struct TYPE_2__ {int reg_lock; } ;
struct adapter {int stats_lock; TYPE_1__ sge; struct mc7 pmtx; struct mc7 pmrx; struct mc7 cm; scalar_t__ regs; struct pci_dev* pdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct mc7*,int,int,int *) ;
 void* FUNC_9 (struct adapter*,int ) ;
 int FUNC_10 (struct adapter*,int ,int ,int ) ;
 int FUNC_11 (struct adapter*,unsigned int) ;
 int FUNC_12 (struct adapter*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_13 (struct adapter*,int ,int ,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_14 (struct adapter*,struct tp_mib_stats*) ;

__attribute__((used)) static int FUNC_15(struct adapter *VAR_16, unsigned int VAR_17, void *VAR_18)
{
 int VAR_19 = 0;

 switch (VAR_17) {
 case 128: {
  struct rdma_info *VAR_20 = VAR_18;
  struct pci_dev *VAR_21 = VAR_16->pdev;

  VAR_20->udbell_physbase = FUNC_1(VAR_21, 2);
  VAR_20->udbell_len = FUNC_0(VAR_21, 2);
  VAR_20->tpt_base =
   FUNC_9(VAR_16, VAR_6);
  VAR_20->tpt_top = FUNC_9(VAR_16, VAR_7);
  VAR_20->pbl_base =
   FUNC_9(VAR_16, VAR_4);
  VAR_20->pbl_top = FUNC_9(VAR_16, VAR_5);
  VAR_20->rqt_base = FUNC_9(VAR_16, VAR_2);
  VAR_20->rqt_top = FUNC_9(VAR_16, VAR_3);
  VAR_20->kdb_addr = VAR_16->regs + VAR_1;
  VAR_20->pdev = VAR_21;
  break;
 }
 case 133:{
  unsigned long VAR_22;
  struct rdma_cq_op *VAR_23 = VAR_18;


  FUNC_4(&VAR_16->sge.reg_lock, VAR_22);
  VAR_19 = FUNC_10(VAR_16, VAR_23->id, VAR_23->op,
     VAR_23->credits);
  FUNC_7(&VAR_16->sge.reg_lock, VAR_22);
  break;
 }
 case 130:{
  struct ch_mem_range *VAR_24 = VAR_18;
  struct mc7 *VAR_25;

  if ((VAR_24->addr & 7) || (VAR_24->len & 7))
   return -VAR_8;
  if (VAR_24->mem_id == VAR_12)
   VAR_25 = &VAR_16->cm;
  else if (VAR_24->mem_id == VAR_13)
   VAR_25 = &VAR_16->pmrx;
  else if (VAR_24->mem_id == VAR_14)
   VAR_25 = &VAR_16->pmtx;
  else
   return -VAR_8;

  VAR_19 =
   FUNC_8(VAR_25, VAR_24->addr / 8, VAR_24->len / 8,
     (u64 *) VAR_24->buf);
  if (VAR_19)
   return VAR_19;
  break;
 }
 case 132:{
  struct rdma_cq_setup *VAR_26 = VAR_18;

  FUNC_3(&VAR_16->sge.reg_lock);
  VAR_19 =
   FUNC_12(VAR_16, VAR_26->id,
     VAR_26->base_addr, VAR_26->size,
     VAR_0,
     VAR_26->ovfl_mode, VAR_26->credits,
     VAR_26->credit_thres);
  FUNC_6(&VAR_16->sge.reg_lock);
  break;
 }
 case 134:
  FUNC_3(&VAR_16->sge.reg_lock);
  VAR_19 = FUNC_11(VAR_16, *(unsigned int *)VAR_18);
  FUNC_6(&VAR_16->sge.reg_lock);
  break;
 case 131:{
  struct rdma_ctrlqp_setup *VAR_27 = VAR_18;

  FUNC_3(&VAR_16->sge.reg_lock);
  VAR_19 = FUNC_13(VAR_16, VAR_10, 0,
      VAR_15,
      VAR_0,
      VAR_27->base_addr, VAR_27->size,
      VAR_11, 1, 0);
  FUNC_6(&VAR_16->sge.reg_lock);
  break;
 }
 case 129: {
  FUNC_2(&VAR_16->stats_lock);
  FUNC_14(VAR_16, (struct tp_mib_stats *)VAR_18);
  FUNC_5(&VAR_16->stats_lock);
  break;
 }
 default:
  VAR_19 = -VAR_9;
 }
 return VAR_19;
}
