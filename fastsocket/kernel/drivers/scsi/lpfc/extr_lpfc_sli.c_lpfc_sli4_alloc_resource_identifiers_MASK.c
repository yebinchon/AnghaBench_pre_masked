
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int max_rpi; int rpi_base; int max_vpi; int vpi_base; int max_xri; int xri_base; int max_vfi; int vfi_base; scalar_t__ xri_used; } ;
struct TYPE_4__ {int next_rpi; int* rpi_bmask; int* rpi_ids; int* xri_bmask; int* xri_ids; int* vfi_bmask; int* vfi_ids; int sli4_flags; TYPE_1__ max_cfg_param; scalar_t__ extents_in_use; int rpi_hdrs_in_use; } ;
struct lpfc_hba {int* vpi_bmask; int* vpi_ids; TYPE_2__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (int*) ;
 void* FUNC_3 (int,int ) ;
 int VAR_14 ;
 int FUNC_4 (struct lpfc_hba*,int ,int,char*,...) ;
 int FUNC_5 (struct lpfc_hba*,int ) ;
 int FUNC_6 (struct lpfc_hba*,int ) ;
 int FUNC_7 (struct lpfc_hba*,int ) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_hba*) ;
 scalar_t__ FUNC_10 (int) ;

int
FUNC_11(struct lpfc_hba *VAR_15)
{
 int VAR_16, VAR_17, VAR_18 = 0;
 uint16_t VAR_19, VAR_20;
 unsigned long VAR_21;

 if (!VAR_15->sli4_hba.rpi_hdrs_in_use)
  VAR_15->sli4_hba.next_rpi = VAR_15->sli4_hba.max_cfg_param.max_rpi;
 if (VAR_15->sli4_hba.extents_in_use) {





  if (FUNC_0(VAR_14, &VAR_15->sli4_hba.sli4_flags) ==
      VAR_9) {





   VAR_17 = FUNC_6(VAR_15,
       VAR_11);
   if (VAR_17 != 0)
    VAR_18++;
   VAR_17 = FUNC_6(VAR_15,
       VAR_12);
   if (VAR_17 != 0)
    VAR_18++;
   VAR_17 = FUNC_6(VAR_15,
       VAR_13);
   if (VAR_17 != 0)
    VAR_18++;
   VAR_17 = FUNC_6(VAR_15,
       VAR_10);
   if (VAR_17 != 0)
    VAR_18++;







   if (VAR_18) {
    FUNC_4(VAR_15, VAR_5,
      VAR_7 | VAR_6,
      "2931 Detected extent resource "
      "change.  Reallocating all "
      "extents.\n");
    VAR_17 = FUNC_7(VAR_15,
       VAR_11);
    VAR_17 = FUNC_7(VAR_15,
       VAR_12);
    VAR_17 = FUNC_7(VAR_15,
       VAR_13);
    VAR_17 = FUNC_7(VAR_15,
       VAR_10);
   } else
    return 0;
  }

  VAR_17 = FUNC_5(VAR_15, VAR_11);
  if (FUNC_10(VAR_17))
   goto err_exit;

  VAR_17 = FUNC_5(VAR_15, VAR_12);
  if (FUNC_10(VAR_17))
   goto err_exit;

  VAR_17 = FUNC_5(VAR_15, VAR_10);
  if (FUNC_10(VAR_17))
   goto err_exit;

  VAR_17 = FUNC_5(VAR_15, VAR_13);
  if (FUNC_10(VAR_17))
   goto err_exit;
  FUNC_1(VAR_14, &VAR_15->sli4_hba.sli4_flags,
         VAR_9);
  return VAR_17;
 } else {







  if (FUNC_0(VAR_14, &VAR_15->sli4_hba.sli4_flags) ==
      VAR_9) {
   FUNC_8(VAR_15);
   FUNC_9(VAR_15);
  }

  VAR_19 = VAR_15->sli4_hba.max_cfg_param.max_rpi;
  if (VAR_19 <= 0) {
   FUNC_4(VAR_15, VAR_4, VAR_8,
     "3279 Invalid provisioning of "
     "rpi:%d\n", VAR_19);
   VAR_17 = -VAR_1;
   goto err_exit;
  }
  VAR_20 = VAR_15->sli4_hba.max_cfg_param.rpi_base;
  VAR_21 = (VAR_19 + VAR_0 - 1) / VAR_0;
  VAR_15->sli4_hba.rpi_bmask = FUNC_3(VAR_21 *
         sizeof(unsigned long),
         VAR_3);
  if (FUNC_10(!VAR_15->sli4_hba.rpi_bmask)) {
   VAR_17 = -VAR_2;
   goto err_exit;
  }
  VAR_15->sli4_hba.rpi_ids = FUNC_3(VAR_19 *
       sizeof(uint16_t),
       VAR_3);
  if (FUNC_10(!VAR_15->sli4_hba.rpi_ids)) {
   VAR_17 = -VAR_2;
   goto free_rpi_bmask;
  }

  for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++)
   VAR_15->sli4_hba.rpi_ids[VAR_16] = VAR_20 + VAR_16;


  VAR_19 = VAR_15->sli4_hba.max_cfg_param.max_vpi;
  if (VAR_19 <= 0) {
   FUNC_4(VAR_15, VAR_4, VAR_8,
     "3280 Invalid provisioning of "
     "vpi:%d\n", VAR_19);
   VAR_17 = -VAR_1;
   goto free_rpi_ids;
  }
  VAR_20 = VAR_15->sli4_hba.max_cfg_param.vpi_base;
  VAR_21 = (VAR_19 + VAR_0 - 1) / VAR_0;
  VAR_15->vpi_bmask = FUNC_3(VAR_21 *
       sizeof(unsigned long),
       VAR_3);
  if (FUNC_10(!VAR_15->vpi_bmask)) {
   VAR_17 = -VAR_2;
   goto free_rpi_ids;
  }
  VAR_15->vpi_ids = FUNC_3(VAR_19 *
     sizeof(uint16_t),
     VAR_3);
  if (FUNC_10(!VAR_15->vpi_ids)) {
   VAR_17 = -VAR_2;
   goto free_vpi_bmask;
  }

  for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++)
   VAR_15->vpi_ids[VAR_16] = VAR_20 + VAR_16;


  VAR_19 = VAR_15->sli4_hba.max_cfg_param.max_xri;
  if (VAR_19 <= 0) {
   FUNC_4(VAR_15, VAR_4, VAR_8,
     "3281 Invalid provisioning of "
     "xri:%d\n", VAR_19);
   VAR_17 = -VAR_1;
   goto free_vpi_ids;
  }
  VAR_20 = VAR_15->sli4_hba.max_cfg_param.xri_base;
  VAR_21 = (VAR_19 + VAR_0 - 1) / VAR_0;
  VAR_15->sli4_hba.xri_bmask = FUNC_3(VAR_21 *
         sizeof(unsigned long),
         VAR_3);
  if (FUNC_10(!VAR_15->sli4_hba.xri_bmask)) {
   VAR_17 = -VAR_2;
   goto free_vpi_ids;
  }
  VAR_15->sli4_hba.max_cfg_param.xri_used = 0;
  VAR_15->sli4_hba.xri_ids = FUNC_3(VAR_19 *
       sizeof(uint16_t),
       VAR_3);
  if (FUNC_10(!VAR_15->sli4_hba.xri_ids)) {
   VAR_17 = -VAR_2;
   goto free_xri_bmask;
  }

  for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++)
   VAR_15->sli4_hba.xri_ids[VAR_16] = VAR_20 + VAR_16;


  VAR_19 = VAR_15->sli4_hba.max_cfg_param.max_vfi;
  if (VAR_19 <= 0) {
   FUNC_4(VAR_15, VAR_4, VAR_8,
     "3282 Invalid provisioning of "
     "vfi:%d\n", VAR_19);
   VAR_17 = -VAR_1;
   goto free_xri_ids;
  }
  VAR_20 = VAR_15->sli4_hba.max_cfg_param.vfi_base;
  VAR_21 = (VAR_19 + VAR_0 - 1) / VAR_0;
  VAR_15->sli4_hba.vfi_bmask = FUNC_3(VAR_21 *
         sizeof(unsigned long),
         VAR_3);
  if (FUNC_10(!VAR_15->sli4_hba.vfi_bmask)) {
   VAR_17 = -VAR_2;
   goto free_xri_ids;
  }
  VAR_15->sli4_hba.vfi_ids = FUNC_3(VAR_19 *
       sizeof(uint16_t),
       VAR_3);
  if (FUNC_10(!VAR_15->sli4_hba.vfi_ids)) {
   VAR_17 = -VAR_2;
   goto free_vfi_bmask;
  }

  for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++)
   VAR_15->sli4_hba.vfi_ids[VAR_16] = VAR_20 + VAR_16;





  FUNC_1(VAR_14, &VAR_15->sli4_hba.sli4_flags,
         VAR_9);
  return 0;
 }

 free_vfi_bmask:
 FUNC_2(VAR_15->sli4_hba.vfi_bmask);
 free_xri_ids:
 FUNC_2(VAR_15->sli4_hba.xri_ids);
 free_xri_bmask:
 FUNC_2(VAR_15->sli4_hba.xri_bmask);
 free_vpi_ids:
 FUNC_2(VAR_15->vpi_ids);
 free_vpi_bmask:
 FUNC_2(VAR_15->vpi_bmask);
 free_rpi_ids:
 FUNC_2(VAR_15->sli4_hba.rpi_ids);
 free_rpi_bmask:
 FUNC_2(VAR_15->sli4_hba.rpi_bmask);
 err_exit:
 return VAR_17;
}
