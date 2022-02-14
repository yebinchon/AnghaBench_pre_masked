
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_queue {int id; scalar_t__ read_ptr; scalar_t__ write_ptr; int n_bd; } ;
struct iwl_txq {TYPE_3__* scratchbufs; struct iwl_queue q; int lock; struct iwl_trans_pcie* trans_pcie; } ;
struct iwl_trans_pcie {int scd_base_addr; int wd_timeout; } ;
struct iwl_trans {int op_mode; TYPE_2__* cfg; } ;
typedef int buf ;
struct TYPE_6__ {int scratch; } ;
struct TYPE_5__ {TYPE_1__* base_params; } ;
struct TYPE_4__ {int num_of_queues; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_trans*,char*,int,scalar_t__,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct iwl_trans*,int*,int) ;
 int FUNC_10 (int,int) ;
 scalar_t__ FUNC_11 (struct iwl_trans*,int ) ;
 int FUNC_12 (struct iwl_trans*,int ) ;
 struct iwl_trans* FUNC_13 (struct iwl_trans_pcie*) ;
 int FUNC_14 (struct iwl_trans*,int) ;
 int FUNC_15 (struct iwl_trans*,int,int*,int) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void FUNC_20(unsigned long VAR_3)
{
 struct iwl_txq *VAR_4 = (void *)VAR_3;
 struct iwl_queue *VAR_5 = &VAR_4->q;
 struct iwl_trans_pcie *VAR_6 = VAR_4->trans_pcie;
 struct iwl_trans *VAR_7 = FUNC_13(VAR_6);
 u32 VAR_8 = VAR_6->scd_base_addr +
    FUNC_7(VAR_4->q.id);
 u8 VAR_9[16];
 int VAR_10;

 FUNC_18(&VAR_4->lock);

 if (VAR_4->q.read_ptr == VAR_4->q.write_ptr) {
  FUNC_19(&VAR_4->lock);
  return;
 }
 FUNC_19(&VAR_4->lock);

 FUNC_2(VAR_7, "Queue %d stuck for %u ms.\n", VAR_4->q.id,
  FUNC_16(VAR_6->wd_timeout));
 FUNC_2(VAR_7, "Current SW read_ptr %d write_ptr %d\n",
  VAR_4->q.read_ptr, VAR_4->q.write_ptr);

 FUNC_15(VAR_7, VAR_8, VAR_9, sizeof(VAR_9));

 FUNC_9(VAR_7, VAR_9, sizeof(VAR_9));

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_2(VAR_7, "FH TRBs(%d) = 0x%08x\n", VAR_10,
   FUNC_11(VAR_7, FUNC_1(VAR_10)));

 for (VAR_10 = 0; VAR_10 < VAR_7->cfg->base_params->num_of_queues; VAR_10++) {
  u32 VAR_11 = FUNC_12(VAR_7, FUNC_4(VAR_10));
  u8 VAR_12 = (VAR_11 >> VAR_2) & 0x7;
  bool VAR_13 = !!(VAR_11 & FUNC_0(VAR_1));
  u32 VAR_14 =
   FUNC_14(VAR_7,
          VAR_6->scd_base_addr +
          FUNC_6(VAR_10));

  if (VAR_10 & 0x1)
   VAR_14 = (VAR_14 & 0xFFFF0000) >> 16;
  else
   VAR_14 = VAR_14 & 0x0000FFFF;

  FUNC_2(VAR_7,
   "Q %d is %sactive and mapped to fifo %d ra_tid 0x%04x [%d,%d]\n",
   VAR_10, VAR_13 ? "" : "in", VAR_12, VAR_14,
   FUNC_12(VAR_7,
          FUNC_3(VAR_10)) & (VAR_4->q.n_bd - 1),
   FUNC_12(VAR_7, FUNC_5(VAR_10)));
 }

 for (VAR_10 = VAR_5->read_ptr; VAR_10 != VAR_5->write_ptr;
      VAR_10 = FUNC_10(VAR_10, VAR_5->n_bd))
  FUNC_2(VAR_7, "scratch %d = 0x%08x\n", VAR_10,
   FUNC_17(VAR_4->scratchbufs[VAR_10].scratch));

 FUNC_8(VAR_7->op_mode);
}
