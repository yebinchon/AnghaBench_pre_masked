
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ipw_priv {int isr_inta; int status; int lock; int adapter_restart; int wait_command_queue; TYPE_3__* ieee; struct ipw_fw_error* error; int rf_kill; int link_down; int scan_event; int request_passive_scan; int request_direct_scan; int request_scan; int * txq; int txq_cmd; int irq_lock; } ;
struct ipw_fw_error {int dummy; } ;
struct TYPE_5__ {scalar_t__ encrypt; } ;
struct TYPE_4__ {int wiphy; } ;
struct TYPE_6__ {TYPE_2__ sec; TYPE_1__ wdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;
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
 int VAR_18 ;
 int FUNC_5 (char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (struct ipw_priv*) ;
 int VAR_24 ;
 int FUNC_8 (struct ipw_priv*,struct ipw_fw_error*) ;
 int FUNC_9 (struct ipw_priv*) ;
 int FUNC_10 (struct ipw_priv*,int *,int) ;
 int FUNC_11 (struct ipw_priv*,int ) ;
 int FUNC_12 (struct ipw_priv*) ;
 int FUNC_13 (struct ipw_fw_error*) ;
 int FUNC_14 (struct ipw_priv*) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int) ;

__attribute__((used)) static void FUNC_21(struct ipw_priv *VAR_25)
{
 u32 VAR_26, VAR_27, VAR_28 = 0;
 unsigned long VAR_29;
 int VAR_30 = 0;

 FUNC_17(&VAR_25->irq_lock, VAR_29);

 VAR_26 = FUNC_11(VAR_25, VAR_18);
 VAR_27 = FUNC_11(VAR_25, VAR_17);

 if (VAR_26 == 0xFFFFFFFF) {

  FUNC_5("TASKLET INTA == 0xFFFFFFFF\n");

  VAR_26 = 0;
 }
 VAR_26 &= (VAR_16 & VAR_27);


 VAR_26 |= VAR_25->isr_inta;

 FUNC_18(&VAR_25->irq_lock, VAR_29);

 FUNC_17(&VAR_25->lock, VAR_29);


 if (VAR_26 & VAR_8) {
  FUNC_12(VAR_25);
  VAR_28 |= VAR_8;
 }

 if (VAR_26 & VAR_11) {
  FUNC_1("Command completed.\n");
  VAR_30 = FUNC_10(VAR_25, &VAR_25->txq_cmd, -1);
  VAR_25->status &= ~VAR_21;
  FUNC_19(&VAR_25->wait_command_queue);
  VAR_28 |= VAR_11;
 }

 if (VAR_26 & VAR_12) {
  FUNC_3("TX_QUEUE_1\n");
  VAR_30 = FUNC_10(VAR_25, &VAR_25->txq[0], 0);
  VAR_28 |= VAR_12;
 }

 if (VAR_26 & VAR_13) {
  FUNC_3("TX_QUEUE_2\n");
  VAR_30 = FUNC_10(VAR_25, &VAR_25->txq[1], 1);
  VAR_28 |= VAR_13;
 }

 if (VAR_26 & VAR_14) {
  FUNC_3("TX_QUEUE_3\n");
  VAR_30 = FUNC_10(VAR_25, &VAR_25->txq[2], 2);
  VAR_28 |= VAR_14;
 }

 if (VAR_26 & VAR_15) {
  FUNC_3("TX_QUEUE_4\n");
  VAR_30 = FUNC_10(VAR_25, &VAR_25->txq[3], 3);
  VAR_28 |= VAR_15;
 }

 if (VAR_26 & VAR_10) {
  FUNC_5("STATUS_CHANGE\n");
  VAR_28 |= VAR_10;
 }

 if (VAR_26 & VAR_2) {
  FUNC_5("TX_PERIOD_EXPIRED\n");
  VAR_28 |= VAR_2;
 }

 if (VAR_26 & VAR_9) {
  FUNC_5("HOST_CMD_DONE\n");
  VAR_28 |= VAR_9;
 }

 if (VAR_26 & VAR_5) {
  FUNC_5("FW_INITIALIZATION_DONE\n");
  VAR_28 |= VAR_5;
 }

 if (VAR_26 & VAR_4) {
  FUNC_5("PHY_OFF_DONE\n");
  VAR_28 |= VAR_4;
 }

 if (VAR_26 & VAR_7) {
  FUNC_2("RF_KILL_DONE\n");
  VAR_25->status |= VAR_23;
  FUNC_20(VAR_25->ieee->wdev.wiphy, 1);
  FUNC_19(&VAR_25->wait_command_queue);
  VAR_25->status &= ~(VAR_19 | VAR_20);
  FUNC_6(&VAR_25->request_scan);
  FUNC_6(&VAR_25->request_direct_scan);
  FUNC_6(&VAR_25->request_passive_scan);
  FUNC_6(&VAR_25->scan_event);
  FUNC_16(&VAR_25->link_down);
  FUNC_15(&VAR_25->rf_kill, 2 * VAR_0);
  VAR_28 |= VAR_7;
 }

 if (VAR_26 & VAR_3) {
  FUNC_5("Firmware error detected.  Restarting.\n");
  if (VAR_25->error) {
   FUNC_0("Sysfs 'error' log already exists.\n");
   if (VAR_24 & VAR_1) {
    struct ipw_fw_error *VAR_31 =
        FUNC_7(VAR_25);
    FUNC_8(VAR_25, VAR_31);
    FUNC_13(VAR_31);
   }
  } else {
   VAR_25->error = FUNC_7(VAR_25);
   if (VAR_25->error)
    FUNC_0("Sysfs 'error' log captured.\n");
   else
    FUNC_0("Error allocating sysfs 'error' "
          "log.\n");
   if (VAR_24 & VAR_1)
    FUNC_8(VAR_25, VAR_25->error);
  }



  if (VAR_25->ieee->sec.encrypt) {
   VAR_25->status &= ~VAR_19;
   FUNC_14(VAR_25);
  }



  VAR_25->status &= ~VAR_22;


  VAR_25->status &= ~VAR_21;
  FUNC_19(&VAR_25->wait_command_queue);

  FUNC_16(&VAR_25->adapter_restart);
  VAR_28 |= VAR_3;
 }

 if (VAR_26 & VAR_6) {
  FUNC_4("Parity error\n");
  VAR_28 |= VAR_6;
 }

 if (VAR_28 != VAR_26) {
  FUNC_4("Unhandled INTA bits 0x%08x\n", VAR_26 & ~VAR_28);
 }

 FUNC_18(&VAR_25->lock, VAR_29);


 FUNC_9(VAR_25);
}
