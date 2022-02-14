
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_queue {scalar_t__ read_ptr; scalar_t__ write_ptr; int n_bd; int id; } ;
struct iwl_txq {struct iwl_queue q; } ;
struct iwl_trans_pcie {int cmd_queue; int scd_base_addr; struct iwl_txq* txq; } ;
struct iwl_trans {TYPE_2__* cfg; } ;
typedef int buf ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int num_of_queues; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_trans*,char*,int,...) ;
 int VAR_2 ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct iwl_trans*,int*,int) ;
 int FUNC_10 (struct iwl_trans*,int ) ;
 int FUNC_11 (struct iwl_trans*,int ) ;
 int FUNC_12 (struct iwl_trans*,int) ;
 int FUNC_13 (struct iwl_trans*,int,int*,int) ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct iwl_trans *VAR_6)
{
 struct iwl_trans_pcie *VAR_7 = FUNC_3(VAR_6);
 struct iwl_txq *VAR_8;
 struct iwl_queue *VAR_9;
 int VAR_10;
 unsigned long VAR_11 = VAR_5;
 u32 VAR_12;
 u8 VAR_13[16];
 int VAR_14 = 0;


 for (VAR_10 = 0; VAR_10 < VAR_6->cfg->base_params->num_of_queues; VAR_10++) {
  if (VAR_10 == VAR_7->cmd_queue)
   continue;
  VAR_8 = &VAR_7->txq[VAR_10];
  VAR_9 = &VAR_8->q;
  while (VAR_9->read_ptr != VAR_9->write_ptr && !FUNC_16(VAR_5,
         VAR_11 + FUNC_14(VAR_2)))
   FUNC_15(1);

  if (VAR_9->read_ptr != VAR_9->write_ptr) {
   FUNC_2(VAR_6,
    "fail to flush all tx fifo queues Q %d\n", VAR_10);
   VAR_14 = -VAR_0;
   break;
  }
 }

 if (!VAR_14)
  return 0;

 FUNC_2(VAR_6, "Current SW read_ptr %d write_ptr %d\n",
  VAR_8->q.read_ptr, VAR_8->q.write_ptr);

 VAR_12 = VAR_7->scd_base_addr +
   FUNC_8(VAR_8->q.id);
 FUNC_13(VAR_6, VAR_12, VAR_13, sizeof(VAR_13));

 FUNC_9(VAR_6, VAR_13, sizeof(VAR_13));

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  FUNC_2(VAR_6, "FH TRBs(%d) = 0x%08x\n", VAR_10,
   FUNC_10(VAR_6, FUNC_1(VAR_10)));

 for (VAR_10 = 0; VAR_10 < VAR_6->cfg->base_params->num_of_queues; VAR_10++) {
  u32 VAR_15 = FUNC_11(VAR_6, FUNC_5(VAR_10));
  u8 VAR_16 = (VAR_15 >> VAR_4) & 0x7;
  bool VAR_17 = !!(VAR_15 & FUNC_0(VAR_3));
  u32 VAR_18 =
   FUNC_12(VAR_6, VAR_7->scd_base_addr +
          FUNC_7(VAR_10));

  if (VAR_10 & 0x1)
   VAR_18 = (VAR_18 & 0xFFFF0000) >> 16;
  else
   VAR_18 = VAR_18 & 0x0000FFFF;

  FUNC_2(VAR_6,
   "Q %d is %sactive and mapped to fifo %d ra_tid 0x%04x [%d,%d]\n",
   VAR_10, VAR_17 ? "" : "in", VAR_16, VAR_18,
   FUNC_11(VAR_6,
          FUNC_4(VAR_10)) & (VAR_8->q.n_bd - 1),
   FUNC_11(VAR_6, FUNC_6(VAR_10)));
 }

 return VAR_14;
}
