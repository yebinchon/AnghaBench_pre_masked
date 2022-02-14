
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int cfg_aer_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_hba *VAR_3, int VAR_4)
{
 if (VAR_4 == 0 || VAR_4 == 1) {
  VAR_3->cfg_aer_support = VAR_4;
  return 0;
 }
 FUNC_0(VAR_3, VAR_1, VAR_2,
   "2712 lpfc_aer_support attribute value %d out "
   "of range, allowed values are 0|1, setting it "
   "to default value of 1\n", VAR_4);

 VAR_3->cfg_aer_support = 1;
 return -VAR_0;
}
