
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct TYPE_6__ {int suni_ds3_frm_stat; int suni_e3_frm_fram_intr_ind_stat; int suni_e3_frm_maint_intr_ind; int suni_ds3_frm_intr_stat; } ;
typedef TYPE_1__ suni_pm7345_t ;
struct TYPE_7__ {int mb25_intr_status; } ;
typedef TYPE_2__ ia_mb25_t ;
struct TYPE_9__ {int phy_type; void* carrier_detect; scalar_t__ phy; } ;
struct TYPE_8__ {int suni_rsop_status; } ;
typedef TYPE_3__ IA_SUNI ;
typedef TYPE_4__ IADEV ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(IADEV *VAR_7) {
  volatile IA_SUNI *VAR_8;
  volatile ia_mb25_t *VAR_9;
  volatile suni_pm7345_t *VAR_10;
  u32 VAR_11;
  u_int VAR_12;

  if(VAR_7->phy_type & VAR_0) {
     VAR_9 = (ia_mb25_t*)VAR_7->phy;
     VAR_7->carrier_detect = FUNC_0(VAR_9->mb25_intr_status & VAR_3);
  } else if (VAR_7->phy_type & VAR_1) {
     VAR_10 = (suni_pm7345_t *)VAR_7->phy;

     VAR_12 = VAR_10->suni_ds3_frm_intr_stat;
     VAR_7->carrier_detect =
           FUNC_0(!(VAR_10->suni_ds3_frm_stat & VAR_4));
  } else if (VAR_7->phy_type & VAR_2 ) {
     VAR_10 = (suni_pm7345_t *)VAR_7->phy;
     VAR_12 = VAR_10->suni_e3_frm_maint_intr_ind;
     VAR_7->carrier_detect =
           FUNC_0(!(VAR_10->suni_e3_frm_fram_intr_ind_stat&VAR_5));
  }
  else {
     VAR_8 = (IA_SUNI *)VAR_7->phy;
     VAR_11 = VAR_8->suni_rsop_status & 0xff;
     VAR_7->carrier_detect = FUNC_0(!(VAR_8->suni_rsop_status & VAR_6));
  }
  if (VAR_7->carrier_detect)
    FUNC_1("IA: SUNI carrier detected\n");
  else
    FUNC_1("IA: SUNI carrier lost signal\n");
  return;
}
