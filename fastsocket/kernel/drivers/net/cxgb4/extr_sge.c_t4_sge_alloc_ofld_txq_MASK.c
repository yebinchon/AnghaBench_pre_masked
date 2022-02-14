
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_sw_desc {int dummy; } ;
struct tx_desc {int dummy; } ;
struct TYPE_2__ {int size; int * desc; int phys_addr; int * sdesc; } ;
struct sge_ofld_txq {scalar_t__ mapping_err; scalar_t__ full; int qresume_tsk; int sendq; struct adapter* adap; TYPE_1__ q; } ;
struct port_info {int tx_chan; } ;
struct net_device {int dummy; } ;
struct fw_eq_ofld_cmd {int eqid_pkd; int eqaddr; void* dcaen_to_eqsize; void* fetchszm_to_iqid; void* alloc_to_len16; void* op_to_vfn; } ;
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct fw_eq_ofld_cmd) ;
 int VAR_7 ;
 int * FUNC_13 (int ,int,int,int,int *,int **,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int,int *,int ) ;
 void* FUNC_16 (int) ;
 int FUNC_17 (struct adapter*,TYPE_1__*,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct fw_eq_ofld_cmd*,int ,int) ;
 struct port_info* FUNC_20 (struct net_device*) ;
 int FUNC_21 (int ) ;
 int VAR_8 ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct adapter*,int ,struct fw_eq_ofld_cmd*,int,struct fw_eq_ofld_cmd*) ;
 int FUNC_24 (int *,int ,unsigned long) ;

int FUNC_25(struct adapter *VAR_9, struct sge_ofld_txq *VAR_10,
     struct net_device *VAR_11, unsigned int VAR_12)
{
 int VAR_13, VAR_14;
 struct fw_eq_ofld_cmd VAR_15;
 struct port_info *VAR_16 = FUNC_20(VAR_11);


 VAR_14 = VAR_10->q.size + VAR_7 / sizeof(struct tx_desc);

 VAR_10->q.desc = FUNC_13(VAR_9->pdev_dev, VAR_10->q.size,
   sizeof(struct tx_desc), sizeof(struct tx_sw_desc),
   &VAR_10->q.phys_addr, &VAR_10->q.sdesc, VAR_7);
 if (!VAR_10->q.desc)
  return -VAR_0;

 FUNC_19(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.op_to_vfn = FUNC_16(FUNC_0(VAR_4) | VAR_2 |
       VAR_3 | VAR_1 |
       FUNC_10(VAR_9->fn) |
       FUNC_11(0));
 VAR_15.alloc_to_len16 = FUNC_16(VAR_5 |
     VAR_6 | FUNC_12(VAR_15));
 VAR_15.fetchszm_to_iqid = FUNC_16(FUNC_7(2) |
       FUNC_9(VAR_16->tx_chan) |
       FUNC_6(1) |
       FUNC_8(VAR_12));
 VAR_15.dcaen_to_eqsize = FUNC_16(FUNC_5(2) |
      FUNC_4(3) |
      FUNC_1(5) |
      FUNC_3(VAR_14));
 VAR_15.eqaddr = FUNC_14(VAR_10->q.phys_addr);

 VAR_13 = FUNC_23(VAR_9, VAR_9->fn, &VAR_15, sizeof(VAR_15), &VAR_15);
 if (VAR_13) {
  FUNC_18(VAR_10->q.sdesc);
  VAR_10->q.sdesc = ((void*)0);
  FUNC_15(VAR_9->pdev_dev,
      VAR_14 * sizeof(struct tx_desc),
      VAR_10->q.desc, VAR_10->q.phys_addr);
  VAR_10->q.desc = ((void*)0);
  return VAR_13;
 }

 FUNC_17(VAR_9, &VAR_10->q, FUNC_2(FUNC_21(VAR_15.eqid_pkd)));
 VAR_10->adap = VAR_9;
 FUNC_22(&VAR_10->sendq);
 FUNC_24(&VAR_10->qresume_tsk, VAR_8, (unsigned long)VAR_10);
 VAR_10->full = 0;
 VAR_10->mapping_err = 0;
 return 0;
}
