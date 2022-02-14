
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vpi_used; } ;
struct TYPE_4__ {int sli4_flags; int vfi_ids; int vfi_bmask; int xri_ids; int xri_bmask; TYPE_1__ max_cfg_param; scalar_t__ extents_in_use; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; int vpi_ids; int vpi_bmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_3(struct lpfc_hba *VAR_7)
{
 if (VAR_7->sli4_hba.extents_in_use) {
  FUNC_2(VAR_7, VAR_2);
  FUNC_2(VAR_7, VAR_0);
  FUNC_2(VAR_7, VAR_3);
  FUNC_2(VAR_7, VAR_1);
 } else {
  FUNC_1(VAR_7->vpi_bmask);
  VAR_7->sli4_hba.max_cfg_param.vpi_used = 0;
  FUNC_1(VAR_7->vpi_ids);
  FUNC_0(VAR_6, &VAR_7->sli4_hba.sli4_flags, 0);
  FUNC_1(VAR_7->sli4_hba.xri_bmask);
  FUNC_1(VAR_7->sli4_hba.xri_ids);
  FUNC_1(VAR_7->sli4_hba.vfi_bmask);
  FUNC_1(VAR_7->sli4_hba.vfi_ids);
  FUNC_0(VAR_5, &VAR_7->sli4_hba.sli4_flags, 0);
  FUNC_0(VAR_4, &VAR_7->sli4_hba.sli4_flags, 0);
 }

 return 0;
}
