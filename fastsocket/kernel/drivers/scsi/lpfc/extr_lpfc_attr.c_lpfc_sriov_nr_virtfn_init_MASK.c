
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int cfg_sriov_nr_virtfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_hba *VAR_4, int VAR_5)
{
 if (VAR_5 >= 0 && VAR_5 <= VAR_3) {
  VAR_4->cfg_sriov_nr_virtfn = VAR_5;
  return 0;
 }

 FUNC_0(VAR_4, VAR_1, VAR_2,
   "3017 Enabling %d virtual functions is not "
   "allowed.\n", VAR_5);
 return -VAR_0;
}
