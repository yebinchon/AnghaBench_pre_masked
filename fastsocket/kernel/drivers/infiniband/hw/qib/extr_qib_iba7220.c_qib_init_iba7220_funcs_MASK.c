
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qib_devdata {TYPE_1__* cspec; int revision; int f_tempsense_rd; int f_writescratch; int f_xgxs_reset; int f_wantpiobuf_intr; int f_update_usrhead; int f_txchk_change; int f_setextled; int f_set_intr_state; int f_set_ib_loopback; int f_set_ib_cfg; int f_get_ib_cfg; int f_ibphys_portstate; int f_iblink_state; int f_set_cntr_sample; int f_set_armlaunch; int f_sendctrl; int f_sdma_init_early; int f_sdma_hw_start_up; int f_sdma_hw_clean_up; int f_sdma_update_tail; int f_sdma_set_desc_cnt; int f_sdma_sendctrl; int f_sdma_gethead; int f_sdma_busy; int f_init_sdma_regs; int f_reset; int f_read_portcntrs; int f_read_cntrs; int f_rcvctrl; int f_quiet_serdes; int f_put_tid; int f_portcntr; int f_setpbc_control; int f_late_initreg; int f_intr_fallback; int f_initvl15_bufs; int f_init_ctxt; int f_ib_updown; int f_hdrqempty; int f_eeprom_wen; int f_gpio_mod; int f_getsendbuf; int f_get_msgheader; int f_get_base_info; int f_free_irq; int f_clear_tids; int f_cleanup; int f_bringup_serdes; } ;
struct qib_chippport_specific {int dummy; } ;
struct qib_chip_specific {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 struct qib_devdata* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct qib_devdata*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
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
 int VAR_19 ;
 int FUNC_3 (struct qib_devdata*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 struct qib_devdata* FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct qib_devdata*,char*) ;
 int FUNC_6 (struct qib_devdata*) ;
 int FUNC_7 (struct qib_devdata*) ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_8 (struct qib_devdata*) ;
 int FUNC_9 (struct qib_devdata*,struct pci_dev*,struct pci_device_id const*) ;
 scalar_t__ FUNC_10 (struct qib_devdata*,int,int *,int *) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_11 (struct qib_devdata*,int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_12 (struct qib_devdata*) ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_13 (struct qib_devdata*,int ,int) ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;

struct qib_devdata *FUNC_14(struct pci_dev *VAR_55,
        const struct pci_device_id *VAR_56)
{
 struct qib_devdata *VAR_57;
 int VAR_58;
 u32 VAR_59, VAR_60;

 VAR_57 = FUNC_4(VAR_55, sizeof(struct qib_chip_specific) +
  sizeof(struct qib_chippport_specific));
 if (FUNC_1(VAR_57))
  goto bail;

 VAR_57->f_bringup_serdes = VAR_8;
 VAR_57->f_cleanup = VAR_47;
 VAR_57->f_clear_tids = VAR_9;
 VAR_57->f_free_irq = VAR_11;
 VAR_57->f_get_base_info = VAR_12;
 VAR_57->f_get_msgheader = VAR_14;
 VAR_57->f_getsendbuf = VAR_15;
 VAR_57->f_gpio_mod = VAR_3;
 VAR_57->f_eeprom_wen = VAR_10;
 VAR_57->f_hdrqempty = VAR_16;
 VAR_57->f_ib_updown = VAR_17;
 VAR_57->f_init_ctxt = VAR_19;
 VAR_57->f_initvl15_bufs = VAR_20;
 VAR_57->f_intr_fallback = VAR_21;
 VAR_57->f_late_initreg = VAR_36;
 VAR_57->f_setpbc_control = VAR_32;
 VAR_57->f_portcntr = VAR_38;
 VAR_57->f_put_tid = VAR_23;
 VAR_57->f_quiet_serdes = VAR_24;
 VAR_57->f_rcvctrl = VAR_52;
 VAR_57->f_read_cntrs = VAR_39;
 VAR_57->f_read_portcntrs = VAR_40;
 VAR_57->f_reset = VAR_48;
 VAR_57->f_init_sdma_regs = VAR_4;
 VAR_57->f_sdma_busy = VAR_41;
 VAR_57->f_sdma_gethead = VAR_42;
 VAR_57->f_sdma_sendctrl = VAR_28;
 VAR_57->f_sdma_set_desc_cnt = VAR_43;
 VAR_57->f_sdma_update_tail = VAR_44;
 VAR_57->f_sdma_hw_clean_up = VAR_25;
 VAR_57->f_sdma_hw_start_up = VAR_26;
 VAR_57->f_sdma_init_early = VAR_27;
 VAR_57->f_sendctrl = VAR_53;
 VAR_57->f_set_armlaunch = VAR_45;
 VAR_57->f_set_cntr_sample = VAR_46;
 VAR_57->f_iblink_state = VAR_18;
 VAR_57->f_ibphys_portstate = VAR_22;
 VAR_57->f_get_ib_cfg = VAR_13;
 VAR_57->f_set_ib_cfg = VAR_29;
 VAR_57->f_set_ib_loopback = VAR_31;
 VAR_57->f_set_intr_state = VAR_30;
 VAR_57->f_setextled = VAR_49;
 VAR_57->f_txchk_change = VAR_34;
 VAR_57->f_update_usrhead = VAR_50;
 VAR_57->f_wantpiobuf_intr = VAR_51;
 VAR_57->f_xgxs_reset = VAR_35;
 VAR_57->f_writescratch = VAR_54;
 VAR_57->f_tempsense_rd = VAR_33;






 VAR_58 = FUNC_9(VAR_57, VAR_55, VAR_56);
 if (VAR_58 < 0)
  goto bail_free;


 VAR_58 = FUNC_7(VAR_57);
 if (VAR_58)
  goto bail_cleanup;

 if (VAR_37)
  goto bail;

 VAR_59 = FUNC_2(VAR_57->revision, VAR_2,
       VAR_0);
 switch (VAR_59) {
 case 0:
 case 2:
 case 10:
 case 12:
  VAR_60 = 16;
  break;
 default:
  VAR_60 = 8;
  break;
 }
 if (FUNC_10(VAR_57, VAR_60, ((void*)0), ((void*)0)))
  FUNC_5(VAR_57,
   "Failed to setup PCIe or interrupts; continuing anyway\n");


 VAR_57->cspec->irq = VAR_55->irq;

 if (FUNC_11(VAR_57, VAR_7) &
     VAR_1)
  FUNC_13(VAR_57, VAR_6,
          VAR_1);


 FUNC_12(VAR_57);
 FUNC_3(VAR_57);


 FUNC_13(VAR_57, VAR_5, 0);

 goto bail;

bail_cleanup:
 FUNC_8(VAR_57);
bail_free:
 FUNC_6(VAR_57);
 VAR_57 = FUNC_0(VAR_58);
bail:
 return VAR_57;
}
