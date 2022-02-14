
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {scalar_t__ sli_rev; int cfg_fcp_cpu_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_hba *VAR_6, int VAR_7)
{
 if (VAR_6->sli_rev != VAR_5) {
  VAR_6->cfg_fcp_cpu_map = 0;
  return 0;
 }

 if (VAR_7 >= VAR_4 && VAR_7 <= VAR_3) {
  VAR_6->cfg_fcp_cpu_map = VAR_7;
  return 0;
 }

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "3326 fcp_cpu_map: %d out of range, using default\n",
   VAR_7);
 VAR_6->cfg_fcp_cpu_map = VAR_2;

 return 0;
}
