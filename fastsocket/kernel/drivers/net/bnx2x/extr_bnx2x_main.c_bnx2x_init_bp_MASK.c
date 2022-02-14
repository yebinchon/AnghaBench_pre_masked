
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int expires; unsigned long data; int function; } ;
struct TYPE_6__ {int phy_mutex; } ;
struct bnx2x {int fw_seq; int disable_tpa; int flags; int dropless_fc; int rx_csum; int tx_ticks; int rx_ticks; int current_interval; int max_cos; int min_msix_vec_cnt; int dump_preset_idx; int cnic_base_cl_id; TYPE_4__ timer; int rx_ring_size; int tx_ring_size; int mrrs; TYPE_3__* dev; TYPE_2__* pdev; int period_task; int sp_rtnl_task; int sp_task; int stats_sema; int stats_lock; int fw_mb_mutex; TYPE_1__ port; } ;
struct TYPE_10__ {int drv_mb_header; } ;
struct TYPE_8__ {int features; int dev_addr; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct bnx2x*) ;
 size_t FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (struct bnx2x*) ;
 scalar_t__ FUNC_8 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (struct bnx2x*) ;
 scalar_t__ FUNC_11 (struct bnx2x*) ;
 scalar_t__ FUNC_12 (struct bnx2x*) ;
 scalar_t__ FUNC_13 (struct bnx2x*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_14 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_15 (struct bnx2x*,int ) ;
 int FUNC_16 (struct bnx2x*,int ) ;
 int VAR_12 ;
 int FUNC_17 (struct bnx2x*) ;
 int FUNC_18 (struct bnx2x*) ;
 int FUNC_19 (struct bnx2x*,int,int ) ;
 int FUNC_20 (struct bnx2x*) ;
 int FUNC_21 (struct bnx2x*) ;
 int VAR_13 ;
 int FUNC_22 (struct bnx2x*) ;
 int FUNC_23 (struct bnx2x*) ;
 int FUNC_24 (struct bnx2x*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_25 (int *,char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_26 (int ) ;
 TYPE_5__* VAR_21 ;
 int FUNC_27 (TYPE_4__*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,int) ;
 int FUNC_30 (int *) ;

__attribute__((used)) static int FUNC_31(struct bnx2x *VAR_24)
{
 int VAR_25;
 int VAR_26;

 FUNC_28(&VAR_24->port.phy_mutex);
 FUNC_28(&VAR_24->fw_mb_mutex);
 FUNC_30(&VAR_24->stats_lock);
 FUNC_29(&VAR_24->stats_sema, 1);

 FUNC_9(&VAR_24->sp_task, VAR_15);
 FUNC_9(&VAR_24->sp_rtnl_task, VAR_14);
 FUNC_9(&VAR_24->period_task, VAR_13);
 if (FUNC_12(VAR_24)) {
  VAR_26 = FUNC_21(VAR_24);
  if (VAR_26)
   return VAR_26;
 } else {
  FUNC_26(VAR_24->dev->dev_addr);
 }

 FUNC_24(VAR_24);

 VAR_26 = FUNC_17(VAR_24);
 if (VAR_26)
  return VAR_26;

 FUNC_23(VAR_24);

 VAR_25 = FUNC_1(VAR_24);


 if (FUNC_12(VAR_24) && !FUNC_3(VAR_24)) {

  VAR_24->fw_seq =
   FUNC_16(VAR_24, VAR_21[FUNC_2(VAR_24)].drv_mb_header) &
       VAR_3;
  FUNC_0("fw_seq 0x%08x\n", VAR_24->fw_seq);

  FUNC_22(VAR_24);
 }

 if (FUNC_6(VAR_24))
  FUNC_25(&VAR_24->pdev->dev, "FPGA detected\n");

 if (FUNC_3(VAR_24) && (VAR_25 == 0))
  FUNC_25(&VAR_24->pdev->dev, "MCP disabled, must load devices in order!\n");

 VAR_24->dev->features |= VAR_10;

 VAR_24->disable_tpa = VAR_19;
 VAR_24->disable_tpa |= FUNC_11(VAR_24) || FUNC_10(VAR_24);


 if (VAR_24->disable_tpa) {
  VAR_24->flags &= ~(VAR_12 | VAR_6);
  VAR_24->dev->features &= ~VAR_11;
 } else {

  VAR_24->flags |= VAR_12;
  VAR_24->dev->features |= VAR_11;
 }

 if (FUNC_4(VAR_24))
  VAR_24->dropless_fc = 0;
 else
  VAR_24->dropless_fc = VAR_20 | FUNC_20(VAR_24);

 VAR_24->mrrs = VAR_23;

 VAR_24->tx_ring_size = FUNC_10(VAR_24) ? 0 : VAR_9;
 if (FUNC_13(VAR_24))
  VAR_24->rx_ring_size = VAR_8;

 VAR_24->rx_csum = 1;


 VAR_24->tx_ticks = (50 / VAR_0) * VAR_0;
 VAR_24->rx_ticks = (25 / VAR_0) * VAR_0;

 VAR_24->current_interval = FUNC_7(VAR_24) ? 5*VAR_7 : VAR_7;

 FUNC_27(&VAR_24->timer);
 VAR_24->timer.expires = VAR_22 + VAR_24->current_interval;
 VAR_24->timer.data = (unsigned long) VAR_24;
 VAR_24->timer.function = VAR_16;

 if (FUNC_14(VAR_24, VAR_18) &&
     FUNC_14(VAR_24, VAR_17) &&
     FUNC_15(VAR_24, VAR_18) &&
     FUNC_15(VAR_24, VAR_17)) {
  FUNC_19(VAR_24, 1, VAR_2);
  FUNC_18(VAR_24);
 } else {
  FUNC_19(VAR_24, 0, VAR_1);
 }

 if (FUNC_5(VAR_24))
  VAR_24->cnic_base_cl_id = VAR_4;
 else
  VAR_24->cnic_base_cl_id = VAR_5;

 VAR_24->max_cos = 1;





 if (FUNC_8(VAR_24))
  VAR_24->min_msix_vec_cnt = 3;
 else
  VAR_24->min_msix_vec_cnt = 2;
 FUNC_0("bp->min_msix_vec_cnt %d", VAR_24->min_msix_vec_cnt);

 VAR_24->dump_preset_idx = 1;

 return VAR_26;
}
