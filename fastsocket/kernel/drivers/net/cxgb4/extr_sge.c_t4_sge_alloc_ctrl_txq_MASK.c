
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_desc {int dummy; } ;
struct TYPE_2__ {int size; int * desc; int phys_addr; } ;
struct sge_ctrl_txq {scalar_t__ full; int qresume_tsk; int sendq; struct adapter* adap; TYPE_1__ q; } ;
struct port_info {int tx_chan; } ;
struct net_device {int dummy; } ;
struct fw_eq_ctrl_cmd {void* cmpliqid_eqid; int eqaddr; void* dcaen_to_eqsize; void* fetchszm_to_iqid; void* physeqid_pkd; void* alloc_to_len16; void* op_to_vfn; } ;
struct adapter {int pdev_dev; int fn; } ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct fw_eq_ctrl_cmd) ;
 int VAR_8 ;
 int * FUNC_13 (int ,int,int,int ,int *,int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int,int *,int ) ;
 void* FUNC_16 (int) ;
 int FUNC_17 (struct adapter*,TYPE_1__*,int ) ;
 struct port_info* FUNC_18 (struct net_device*) ;
 int FUNC_19 (void*) ;
 int VAR_9 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct adapter*,int ,struct fw_eq_ctrl_cmd*,int,struct fw_eq_ctrl_cmd*) ;
 int FUNC_22 (int *,int ,unsigned long) ;

int FUNC_23(struct adapter *VAR_10, struct sge_ctrl_txq *VAR_11,
     struct net_device *VAR_12, unsigned int VAR_13,
     unsigned int VAR_14)
{
 int VAR_15, VAR_16;
 struct fw_eq_ctrl_cmd VAR_17;
 struct port_info *VAR_18 = FUNC_18(VAR_12);


 VAR_16 = VAR_11->q.size + VAR_8 / sizeof(struct tx_desc);

 VAR_11->q.desc = FUNC_13(VAR_10->pdev_dev, VAR_16,
     sizeof(struct tx_desc), 0, &VAR_11->q.phys_addr,
     ((void*)0), 0);
 if (!VAR_11->q.desc)
  return -VAR_0;

 VAR_17.op_to_vfn = FUNC_16(FUNC_0(VAR_4) | VAR_2 |
       VAR_3 | VAR_1 |
       FUNC_10(VAR_10->fn) |
       FUNC_11(0));
 VAR_17.alloc_to_len16 = FUNC_16(VAR_5 |
     VAR_6 | FUNC_12(VAR_17));
 VAR_17.cmpliqid_eqid = FUNC_16(FUNC_2(VAR_14));
 VAR_17.physeqid_pkd = FUNC_16(0);
 VAR_17.fetchszm_to_iqid = FUNC_16(FUNC_7(2) |
       FUNC_9(VAR_18->tx_chan) |
       VAR_7 |
       FUNC_8(VAR_13));
 VAR_17.dcaen_to_eqsize = FUNC_16(FUNC_6(2) |
      FUNC_5(3) |
      FUNC_1(5) |
      FUNC_4(VAR_16));
 VAR_17.eqaddr = FUNC_14(VAR_11->q.phys_addr);

 VAR_15 = FUNC_21(VAR_10, VAR_10->fn, &VAR_17, sizeof(VAR_17), &VAR_17);
 if (VAR_15) {
  FUNC_15(VAR_10->pdev_dev,
      VAR_16 * sizeof(struct tx_desc),
      VAR_11->q.desc, VAR_11->q.phys_addr);
  VAR_11->q.desc = ((void*)0);
  return VAR_15;
 }

 FUNC_17(VAR_10, &VAR_11->q, FUNC_3(FUNC_19(VAR_17.cmpliqid_eqid)));
 VAR_11->adap = VAR_10;
 FUNC_20(&VAR_11->sendq);
 FUNC_22(&VAR_11->qresume_tsk, VAR_9, (unsigned long)VAR_11);
 VAR_11->full = 0;
 return 0;
}
