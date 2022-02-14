
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int ce_count; int ce_noinfo_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct mem_ctl_info*,int ,char*,char const*) ;

void FUNC_2(struct mem_ctl_info *VAR_1, const char *VAR_2)
{
 if (FUNC_0())
  FUNC_1(VAR_1, VAR_0,
   "CE - no information available: %s\n", VAR_2);

 VAR_1->ce_noinfo_count++;
 VAR_1->ce_count++;
}
