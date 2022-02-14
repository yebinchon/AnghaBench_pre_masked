
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_rpi_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ extents_in_use; int rpi_hdrs_in_use; int lpfc_rpi_hdr_list; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct lpfc_hba*,int ,int,char*) ;
 struct lpfc_rpi_hdr* FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;

int
FUNC_4(struct lpfc_hba *VAR_5)
{
 int VAR_6 = 0;
 struct lpfc_rpi_hdr *VAR_7;

 FUNC_0(&VAR_5->sli4_hba.lpfc_rpi_hdr_list);
 if (!VAR_5->sli4_hba.rpi_hdrs_in_use)
  return VAR_6;
 if (VAR_5->sli4_hba.extents_in_use)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7) {
  FUNC_1(VAR_5, VAR_2, VAR_3 | VAR_4,
    "0391 Error during rpi post operation\n");
  FUNC_3(VAR_5);
  VAR_6 = -VAR_1;
 }

 return VAR_6;
}
