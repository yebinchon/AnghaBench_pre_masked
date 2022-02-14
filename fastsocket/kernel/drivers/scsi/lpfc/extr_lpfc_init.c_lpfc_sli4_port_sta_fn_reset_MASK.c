
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int intr_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,int ) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_hba *VAR_4, int VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;





 VAR_6 = FUNC_6(VAR_4);
 if (!VAR_6) {

  FUNC_3(VAR_4, VAR_1, VAR_2,
    "2887 Reset Needed: Attempting Port "
    "Recovery...\n");
  FUNC_1(VAR_4, VAR_5);
  FUNC_0(VAR_4);

  FUNC_4(VAR_4);
  FUNC_7(VAR_4);

  VAR_7 = FUNC_5(VAR_4, VAR_4->intr_mode);
  if (VAR_7 == VAR_3) {
   FUNC_3(VAR_4, VAR_1, VAR_2,
     "3175 Failed to enable interrupt\n");
   return -VAR_0;
  } else {
   VAR_4->intr_mode = VAR_7;
  }
  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6 == 0)
   FUNC_8(VAR_4);
 }
 return VAR_6;
}
