
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_desc {int dummy; } ;
struct sge_rspq {int size; int iqe_len; int gen; size_t cntxt_id; int offset; int * desc; int phys_addr; int handler; struct net_device* netdev; struct adapter* adap; void* abs_id; int intr_params; int next_intr_params; scalar_t__ cidx; int * cur_desc; int napi; int pktcnt_idx; } ;
struct sge_fl {int size; size_t cntxt_id; int * desc; int addr; int * sdesc; scalar_t__ starving; scalar_t__ large_alloc_failed; scalar_t__ alloc_failed; scalar_t__ cidx; scalar_t__ pidx; scalar_t__ pend_cred; scalar_t__ avail; } ;
struct rx_sw_desc {int dummy; } ;
struct port_info {int tx_chan; int viid; } ;
struct net_device {int dummy; } ;
struct fw_iq_cmd {int fl0id; int physiqid; int iqid; void* fl0addr; void* fl0size; void* fl0dcaen_to_fl0cidxfthresh; void* iqns_to_fl0congen; void* iqaddr; void* iqsize; void* iqdroprss_to_iqesize; void* type_to_iqandstindex; void* alloc_to_len16; void* op_to_vfn; } ;
struct TYPE_2__ {size_t ingr_start; size_t egr_start; struct sge_fl** egr_map; struct sge_rspq** ingr_map; } ;
struct adapter {int pdev_dev; TYPE_1__ sge; int fn; } ;
typedef int rspq_handler_t ;
typedef int c ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_9 ;
 int FUNC_17 (struct fw_iq_cmd) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_18 (int ,int,int,int,int *,int **,int) ;
 void* FUNC_19 (int ) ;
 int FUNC_20 (int ,int,int *,int ) ;
 int FUNC_21 (struct sge_fl*) ;
 void* FUNC_22 (int) ;
 void* FUNC_23 (int) ;
 scalar_t__ FUNC_24 (int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct fw_iq_cmd*,int ,int) ;
 int VAR_12 ;
 struct port_info* FUNC_27 (struct net_device*) ;
 int FUNC_28 (struct net_device*,int *,int ,int) ;
 void* FUNC_29 (int ) ;
 int FUNC_30 (struct adapter*,struct sge_fl*,int ,int ) ;
 void* FUNC_31 (int,int) ;
 int FUNC_32 (struct adapter*,int ,struct fw_iq_cmd*,int,struct fw_iq_cmd*) ;

int FUNC_33(struct adapter *VAR_13, struct sge_rspq *VAR_14, bool VAR_15,
       struct net_device *VAR_16, int VAR_17,
       struct sge_fl *VAR_18, rspq_handler_t VAR_19)
{
 int VAR_20, VAR_21 = 0;
 struct fw_iq_cmd VAR_22;
 struct port_info *VAR_23 = FUNC_27(VAR_16);


 VAR_14->size = FUNC_31(VAR_14->size, 16);

 VAR_14->desc = FUNC_18(VAR_13->pdev_dev, VAR_14->size, VAR_14->iqe_len, 0,
         &VAR_14->phys_addr, ((void*)0), 0);
 if (!VAR_14->desc)
  return -VAR_0;

 FUNC_26(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.op_to_vfn = FUNC_22(FUNC_0(VAR_4) | VAR_2 |
       VAR_3 | VAR_1 |
       FUNC_13(VAR_13->fn) | FUNC_15(0));
 VAR_22.alloc_to_len16 = FUNC_22(VAR_5 | FUNC_12(1) |
     FUNC_17(VAR_22));
 VAR_22.type_to_iqandstindex = FUNC_22(FUNC_14(VAR_9) |
  FUNC_8(VAR_15) | FUNC_16(VAR_23->viid) |
  FUNC_5(VAR_17 < 0) | FUNC_7(1) |
  FUNC_6(VAR_17 >= 0 ? VAR_17 :
       -VAR_17 - 1));
 VAR_22.iqdroprss_to_iqesize = FUNC_23(FUNC_11(VAR_23->tx_chan) |
  VAR_8 |
  FUNC_10(VAR_14->pktcnt_idx) |
  FUNC_9(FUNC_24(VAR_14->iqe_len) - 4));
 VAR_22.iqsize = FUNC_23(VAR_14->size);
 VAR_22.iqaddr = FUNC_19(VAR_14->phys_addr);

 if (VAR_18) {
  VAR_18->size = FUNC_31(VAR_18->size, 8);
  VAR_18->desc = FUNC_18(VAR_13->pdev_dev, VAR_18->size, sizeof(__be64),
          sizeof(struct rx_sw_desc), &VAR_18->addr,
          &VAR_18->sdesc, VAR_11);
  if (!VAR_18->desc)
   goto fl_nomem;

  VAR_21 = VAR_18->size / 8 + VAR_11 / sizeof(struct tx_desc);
  VAR_22.iqns_to_fl0congen = FUNC_22(VAR_6 |
         FUNC_4(1) |
         FUNC_1(1) |
         VAR_7);
  VAR_22.fl0dcaen_to_fl0cidxfthresh = FUNC_23(FUNC_3(2) |
    FUNC_2(3));
  VAR_22.fl0size = FUNC_23(VAR_21);
  VAR_22.fl0addr = FUNC_19(VAR_18->addr);
 }

 VAR_20 = FUNC_32(VAR_13, VAR_13->fn, &VAR_22, sizeof(VAR_22), &VAR_22);
 if (VAR_20)
  goto err;

 FUNC_28(VAR_16, &VAR_14->napi, VAR_12, 64);
 VAR_14->cur_desc = VAR_14->desc;
 VAR_14->cidx = 0;
 VAR_14->gen = 1;
 VAR_14->next_intr_params = VAR_14->intr_params;
 VAR_14->cntxt_id = FUNC_29(VAR_22.iqid);
 VAR_14->abs_id = FUNC_29(VAR_22.physiqid);
 VAR_14->size--;
 VAR_14->adap = VAR_13;
 VAR_14->netdev = VAR_16;
 VAR_14->handler = VAR_19;


 VAR_14->offset = VAR_18 ? 0 : -1;

 VAR_13->sge.ingr_map[VAR_14->cntxt_id - VAR_13->sge.ingr_start] = VAR_14;

 if (VAR_18) {
  VAR_18->cntxt_id = FUNC_29(VAR_22.fl0id);
  VAR_18->avail = VAR_18->pend_cred = 0;
  VAR_18->pidx = VAR_18->cidx = 0;
  VAR_18->alloc_failed = VAR_18->large_alloc_failed = VAR_18->starving = 0;
  VAR_13->sge.egr_map[VAR_18->cntxt_id - VAR_13->sge.egr_start] = VAR_18;
  FUNC_30(VAR_13, VAR_18, FUNC_21(VAR_18), VAR_10);
 }
 return 0;

fl_nomem:
 VAR_20 = -VAR_0;
err:
 if (VAR_14->desc) {
  FUNC_20(VAR_13->pdev_dev, VAR_14->size * VAR_14->iqe_len,
      VAR_14->desc, VAR_14->phys_addr);
  VAR_14->desc = ((void*)0);
 }
 if (VAR_18 && VAR_18->desc) {
  FUNC_25(VAR_18->sdesc);
  VAR_18->sdesc = ((void*)0);
  FUNC_20(VAR_13->pdev_dev, VAR_21 * sizeof(struct tx_desc),
      VAR_18->desc, VAR_18->addr);
  VAR_18->desc = ((void*)0);
 }
 return VAR_20;
}
