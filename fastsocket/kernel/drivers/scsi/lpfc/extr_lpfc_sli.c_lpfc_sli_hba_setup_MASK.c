
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int sli_flag; } ;
struct lpfc_hba {int cfg_aer_support; int hba_flag; int sli_rev; int sli3_options; int max_vpi; int* vpi_ids; int link_state; int hbalock; TYPE_1__ sli; int * vpi_bmask; int iocb_rsp_size; int iocb_cmd_size; int pcidev; int cfg_enable_npiv; } ;


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
 int FUNC_0 (int *) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int,char*,...) ;
 int FUNC_4 (struct lpfc_hba*,int) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int VAR_16 ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(struct lpfc_hba *VAR_17)
{
 uint32_t VAR_18;
 int VAR_19 = 3, VAR_20;
 int VAR_21;

 switch (VAR_16) {
 case 2:
  if (VAR_17->cfg_enable_npiv) {
   FUNC_3(VAR_17, VAR_4, VAR_6 | VAR_7,
    "1824 NPIV enabled: Override lpfc_sli_mode "
    "parameter (%d) to auto (0).\n",
    VAR_16);
   break;
  }
  VAR_19 = 2;
  break;
 case 0:
 case 3:
  break;
 default:
  FUNC_3(VAR_17, VAR_4, VAR_6 | VAR_7,
    "1819 Unrecognized lpfc_sli_mode "
    "parameter: %d.\n", VAR_16);

  break;
 }

 VAR_18 = FUNC_4(VAR_17, VAR_19);

 if (VAR_18 && VAR_16 == 3)
  FUNC_3(VAR_17, VAR_4, VAR_6 | VAR_7,
    "1820 Unable to select SLI-3.  "
    "Not supported by adapter.\n");
 if (VAR_18 && VAR_19 != 2)
  VAR_18 = FUNC_4(VAR_17, 2);
 if (VAR_18)
  goto lpfc_sli_hba_setup_error;


 if (VAR_17->cfg_aer_support == 1 && !(VAR_17->hba_flag & VAR_3)) {
  VAR_18 = FUNC_7(VAR_17->pcidev);
  if (!VAR_18) {
   FUNC_3(VAR_17, VAR_5, VAR_6,
     "2709 This device supports "
     "Advanced Error Reporting (AER)\n");
   FUNC_8(&VAR_17->hbalock);
   VAR_17->hba_flag |= VAR_3;
   FUNC_9(&VAR_17->hbalock);
  } else {
   FUNC_3(VAR_17, VAR_5, VAR_6,
     "2708 This device does not support "
     "Advanced Error Reporting (AER): %d\n",
     VAR_18);
   VAR_17->cfg_aer_support = 0;
  }
 }

 if (VAR_17->sli_rev == 3) {
  VAR_17->iocb_cmd_size = VAR_14;
  VAR_17->iocb_rsp_size = VAR_15;
 } else {
  VAR_17->iocb_cmd_size = VAR_12;
  VAR_17->iocb_rsp_size = VAR_13;
  VAR_17->sli3_options = 0;
 }

 FUNC_3(VAR_17, VAR_5, VAR_6,
   "0444 Firmware in SLI %x mode. Max_vpi %d\n",
   VAR_17->sli_rev, VAR_17->max_vpi);
 VAR_18 = FUNC_6(VAR_17);

 if (VAR_18)
  goto lpfc_sli_hba_setup_error;


 if (VAR_17->sli_rev == VAR_11) {





  if ((VAR_17->vpi_bmask == ((void*)0)) && (VAR_17->vpi_ids == ((void*)0))) {
   VAR_21 = (VAR_17->max_vpi + VAR_0) / VAR_0;
   VAR_17->vpi_bmask = FUNC_1(VAR_21 * sizeof(unsigned long),
        VAR_2);
   if (!VAR_17->vpi_bmask) {
    VAR_18 = -VAR_1;
    goto lpfc_sli_hba_setup_error;
   }

   VAR_17->vpi_ids = FUNC_1(
     (VAR_17->max_vpi+1) * sizeof(uint16_t),
     VAR_2);
   if (!VAR_17->vpi_ids) {
    FUNC_0(VAR_17->vpi_bmask);
    VAR_18 = -VAR_1;
    goto lpfc_sli_hba_setup_error;
   }
   for (VAR_20 = 0; VAR_20 < VAR_17->max_vpi; VAR_20++)
    VAR_17->vpi_ids[VAR_20] = VAR_20;
  }
 }


 if (VAR_17->sli3_options & VAR_10) {
  VAR_18 = FUNC_5(VAR_17);
  if (VAR_18)
   goto lpfc_sli_hba_setup_error;
 }
 FUNC_8(&VAR_17->hbalock);
 VAR_17->sli.sli_flag |= VAR_9;
 FUNC_9(&VAR_17->hbalock);

 VAR_18 = FUNC_2(VAR_17);
 if (VAR_18)
  goto lpfc_sli_hba_setup_error;

 return VAR_18;

lpfc_sli_hba_setup_error:
 VAR_17->link_state = VAR_8;
 FUNC_3(VAR_17, VAR_4, VAR_6,
   "0445 Firmware initialization failed\n");
 return VAR_18;
}
