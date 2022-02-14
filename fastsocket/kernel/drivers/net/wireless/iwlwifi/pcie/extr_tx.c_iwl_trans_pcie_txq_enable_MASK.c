
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iwl_trans_pcie {int cmd_queue; TYPE_2__* txq; scalar_t__ scd_base_addr; int queue_used; } ;
struct iwl_trans {int dummy; } ;
struct TYPE_3__ {int read_ptr; int write_ptr; } ;
struct TYPE_4__ {int active; TYPE_1__ q; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct iwl_trans*,char*,int,int,int) ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (struct iwl_trans*,int ,int ) ;
 int FUNC_9 (struct iwl_trans*,int) ;
 int FUNC_10 (struct iwl_trans*,int,int) ;
 int FUNC_11 (struct iwl_trans*,int ,int ) ;
 int FUNC_12 (struct iwl_trans*,scalar_t__,int) ;
 int FUNC_13 (struct iwl_trans*,int ,int) ;
 int FUNC_14 (struct iwl_trans*,int ,int) ;
 scalar_t__ FUNC_15 (int,int ) ;

void FUNC_16(struct iwl_trans *VAR_11, int VAR_12, int VAR_13,
          int VAR_14, int VAR_15, int VAR_16, u16 VAR_17)
{
 struct iwl_trans_pcie *VAR_18 = FUNC_3(VAR_11);

 if (FUNC_15(VAR_12, VAR_18->queue_used))
  FUNC_7(1, "queue %d already used - expect issues", VAR_12);


 FUNC_9(VAR_11, VAR_12);


 if (VAR_12 != VAR_18->cmd_queue)
  FUNC_11(VAR_11, VAR_2, FUNC_0(VAR_12));


 if (VAR_14 >= 0) {
  u16 VAR_19 = FUNC_1(VAR_14, VAR_15);


  FUNC_10(VAR_11, VAR_19, VAR_12);


  FUNC_11(VAR_11, VAR_1, FUNC_0(VAR_12));
 } else {





  FUNC_8(VAR_11, VAR_1, FUNC_0(VAR_12));
 }



 VAR_18->txq[VAR_12].q.read_ptr = (VAR_17 & 0xff);
 VAR_18->txq[VAR_12].q.write_ptr = (VAR_17 & 0xff);

 FUNC_13(VAR_11, VAR_0,
      (VAR_17 & 0xff) | (VAR_12 << 8));
 FUNC_14(VAR_11, FUNC_5(VAR_12), VAR_17);


 FUNC_12(VAR_11, VAR_18->scd_base_addr +
   FUNC_4(VAR_12), 0);
 FUNC_12(VAR_11, VAR_18->scd_base_addr +
   FUNC_4(VAR_12) + sizeof(u32),
   ((VAR_16 << VAR_6) &
    VAR_5) |
   ((VAR_16 << VAR_4) &
    VAR_3));


 FUNC_14(VAR_11, FUNC_6(VAR_12),
         (1 << VAR_8) |
         (VAR_13 << VAR_9) |
         (1 << VAR_10) |
         VAR_7);
 VAR_18->txq[VAR_12].active = 1;
 FUNC_2(VAR_11, "Activate queue %d on FIFO %d WrPtr: %d\n",
       VAR_12, VAR_13, VAR_17 & 0xff);
}
