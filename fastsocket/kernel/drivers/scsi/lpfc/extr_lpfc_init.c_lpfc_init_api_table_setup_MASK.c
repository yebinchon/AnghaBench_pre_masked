
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lpfc_hba {int lpfc_stop_port; int lpfc_handle_eratt; int lpfc_hba_down_post; int lpfc_selective_reset; int lpfc_hba_down_link; int lpfc_hba_init_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int
FUNC_1(struct lpfc_hba *VAR_12, uint8_t VAR_13)
{
 VAR_12->lpfc_hba_init_link = VAR_8;
 VAR_12->lpfc_hba_down_link = VAR_5;
 VAR_12->lpfc_selective_reset = VAR_9;
 switch (VAR_13) {
 case 129:
  VAR_12->lpfc_hba_down_post = VAR_6;
  VAR_12->lpfc_handle_eratt = VAR_3;
  VAR_12->lpfc_stop_port = VAR_10;
  break;
 case 128:
  VAR_12->lpfc_hba_down_post = VAR_7;
  VAR_12->lpfc_handle_eratt = VAR_4;
  VAR_12->lpfc_stop_port = VAR_11;
  break;
 default:
  FUNC_0(VAR_12, VAR_1, VAR_2,
    "1431 Invalid HBA PCI-device group: 0x%x\n",
    VAR_13);
  return -VAR_0;
  break;
 }
 return 0;
}
