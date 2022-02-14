
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc_s {int dummy; } ;
struct bfa_ioc_hwif_s {int ioc_get_alt_fwstate; int ioc_set_alt_fwstate; int ioc_get_fwstate; int ioc_set_fwstate; int ioc_sync_complete; int ioc_sync_ack; int ioc_sync_leave; int ioc_sync_join; int ioc_sync_start; int ioc_ownership_reset; int ioc_notify_fail; int ioc_firmware_unlock; int ioc_firmware_lock; } ;


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

__attribute__((used)) static void
FUNC_0(struct bfa_ioc_s *VAR_13, struct bfa_ioc_hwif_s *VAR_14)
{
 VAR_14->ioc_firmware_lock = VAR_0;
 VAR_14->ioc_firmware_unlock = VAR_1;
 VAR_14->ioc_notify_fail = VAR_4;
 VAR_14->ioc_ownership_reset = VAR_5;
 VAR_14->ioc_sync_start = VAR_12;
 VAR_14->ioc_sync_join = VAR_10;
 VAR_14->ioc_sync_leave = VAR_11;
 VAR_14->ioc_sync_ack = VAR_8;
 VAR_14->ioc_sync_complete = VAR_9;
 VAR_14->ioc_set_fwstate = VAR_7;
 VAR_14->ioc_get_fwstate = VAR_3;
 VAR_14->ioc_set_alt_fwstate = VAR_6;
 VAR_14->ioc_get_alt_fwstate = VAR_2;
}
