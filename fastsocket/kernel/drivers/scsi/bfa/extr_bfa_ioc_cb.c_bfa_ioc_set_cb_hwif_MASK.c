
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_s {TYPE_1__* ioc_hwif; } ;
struct TYPE_2__ {int ioc_get_alt_fwstate; int ioc_set_alt_fwstate; int ioc_get_fwstate; int ioc_set_fwstate; int ioc_sync_complete; int ioc_sync_ack; int ioc_sync_leave; int ioc_sync_join; int ioc_sync_start; int ioc_ownership_reset; int ioc_notify_fail; int ioc_isr_mode_set; int ioc_map_port; int ioc_reg_init; int ioc_firmware_unlock; int ioc_firmware_lock; int ioc_pll_init; } ;


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
 TYPE_1__ VAR_17 ;

void
FUNC_0(struct bfa_ioc_s *VAR_18)
{
 VAR_17.ioc_pll_init = VAR_8;
 VAR_17.ioc_firmware_lock = VAR_0;
 VAR_17.ioc_firmware_unlock = VAR_1;
 VAR_17.ioc_reg_init = VAR_9;
 VAR_17.ioc_map_port = VAR_5;
 VAR_17.ioc_isr_mode_set = VAR_4;
 VAR_17.ioc_notify_fail = VAR_6;
 VAR_17.ioc_ownership_reset = VAR_7;
 VAR_17.ioc_sync_start = VAR_16;
 VAR_17.ioc_sync_join = VAR_14;
 VAR_17.ioc_sync_leave = VAR_15;
 VAR_17.ioc_sync_ack = VAR_12;
 VAR_17.ioc_sync_complete = VAR_13;
 VAR_17.ioc_set_fwstate = VAR_11;
 VAR_17.ioc_get_fwstate = VAR_3;
 VAR_17.ioc_set_alt_fwstate = VAR_10;
 VAR_17.ioc_get_alt_fwstate = VAR_2;

 VAR_18->ioc_hwif = &VAR_17;
}
