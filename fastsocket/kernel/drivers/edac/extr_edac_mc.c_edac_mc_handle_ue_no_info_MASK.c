
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int ue_count; int ue_noinfo_count; int mc_idx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct mem_ctl_info*,int ,char*,char const*) ;
 int FUNC_3 (char*,int ) ;

void FUNC_4(struct mem_ctl_info *VAR_1, const char *VAR_2)
{
 if (FUNC_1())
  FUNC_3("EDAC MC%d: Uncorrected Error", VAR_1->mc_idx);

 if (FUNC_0())
  FUNC_2(VAR_1, VAR_0,
   "UE - no information available: %s\n", VAR_2);
 VAR_1->ue_noinfo_count++;
 VAR_1->ue_count++;
}
