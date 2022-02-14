
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_f_ib_updown; int ipath_f_config_jint; int ipath_f_set_ib_cfg; int ipath_f_get_ib_cfg; int ipath_f_xgxs_reset; int ipath_f_read_counters; int ipath_f_config_ports; int ipath_f_get_msgheader; int ipath_f_intr_fallback; int ipath_f_tidtemplate; int ipath_f_free_irq; int ipath_f_get_base_info; int ipath_f_setextled; int ipath_f_cleanup; int ipath_f_put_tid; int ipath_f_clear_tids; int ipath_f_bringup_serdes; int ipath_f_quiet_serdes; int ipath_f_handle_hwerrors; int ipath_f_early_init; int ipath_f_init_hwerrors; int ipath_f_get_boardname; int ipath_f_reset; int ipath_f_bus; int ipath_f_intrsetup; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct ipath_devdata*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

void FUNC_1(struct ipath_devdata *VAR_25)
{
 VAR_25->ipath_f_intrsetup = VAR_13;
 VAR_25->ipath_f_bus = VAR_22;
 VAR_25->ipath_f_reset = VAR_23;
 VAR_25->ipath_f_get_boardname = VAR_0;
 VAR_25->ipath_f_init_hwerrors = VAR_12;
 VAR_25->ipath_f_early_init = VAR_5;
 VAR_25->ipath_f_handle_hwerrors = VAR_10;
 VAR_25->ipath_f_quiet_serdes = VAR_16;
 VAR_25->ipath_f_bringup_serdes = VAR_1;
 VAR_25->ipath_f_clear_tids = VAR_2;
 VAR_25->ipath_f_put_tid = VAR_15;
 VAR_25->ipath_f_cleanup = VAR_21;
 VAR_25->ipath_f_setextled = VAR_24;
 VAR_25->ipath_f_get_base_info = VAR_7;
 VAR_25->ipath_f_free_irq = VAR_6;
 VAR_25->ipath_f_tidtemplate = VAR_19;
 VAR_25->ipath_f_intr_fallback = VAR_14;
 VAR_25->ipath_f_get_msgheader = VAR_9;
 VAR_25->ipath_f_config_ports = VAR_4;
 VAR_25->ipath_f_read_counters = VAR_17;
 VAR_25->ipath_f_xgxs_reset = VAR_20;
 VAR_25->ipath_f_get_ib_cfg = VAR_8;
 VAR_25->ipath_f_set_ib_cfg = VAR_18;
 VAR_25->ipath_f_config_jint = VAR_3;
 VAR_25->ipath_f_ib_updown = VAR_11;




 FUNC_0(VAR_25);
}
