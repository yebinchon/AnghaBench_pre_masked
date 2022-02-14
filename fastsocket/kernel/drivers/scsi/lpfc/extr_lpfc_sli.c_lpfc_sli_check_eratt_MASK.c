
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int link_flag; int hba_flag; int sli_rev; int hbalock; int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int
FUNC_7(struct lpfc_hba *VAR_5)
{
 uint32_t VAR_6;




 if (VAR_5->link_flag & VAR_4)
  return 0;


 FUNC_4(&VAR_5->hbalock);
 if (VAR_5->hba_flag & VAR_1) {

  FUNC_5(&VAR_5->hbalock);
  return 0;
 }





 if (FUNC_6(VAR_5->hba_flag & VAR_0)) {
  FUNC_5(&VAR_5->hbalock);
  return 0;
 }


 if (FUNC_6(FUNC_3(VAR_5->pcidev))) {
  FUNC_5(&VAR_5->hbalock);
  return 0;
 }

 switch (VAR_5->sli_rev) {
 case 130:
 case 129:

  VAR_6 = FUNC_2(VAR_5);
  break;
 case 128:

  VAR_6 = FUNC_1(VAR_5);
  break;
 default:
  FUNC_0(VAR_5, VAR_2, VAR_3,
    "0299 Invalid SLI revision (%d)\n",
    VAR_5->sli_rev);
  VAR_6 = 0;
  break;
 }
 FUNC_5(&VAR_5->hbalock);

 return VAR_6;
}
