
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t10_pr_registration {int dummy; } ;
struct se_portal_group {int dummy; } ;
struct se_node_acl {unsigned char* initiatorname; } ;


 int FUNC_0 (unsigned char*,char*,int) ;
 unsigned char FUNC_1 (unsigned char*) ;

u32 FUNC_2(
 struct se_portal_group *VAR_0,
 struct se_node_acl *VAR_1,
 struct t10_pr_registration *VAR_2,
 int *VAR_3,
 unsigned char *VAR_4)
{
 unsigned char VAR_5, *VAR_6;
 int VAR_7;
 u32 VAR_8 = 8;
 VAR_6 = &VAR_1->initiatorname[0];

 for (VAR_7 = 0; VAR_7 < 24; ) {
  if (!FUNC_0(&VAR_6[VAR_7], ":", 1)) {
   VAR_7++;
   continue;
  }
  VAR_5 = FUNC_1(&VAR_6[VAR_7]);
  VAR_4[VAR_8++] = VAR_5;
  VAR_7 += 2;
 }



 return 24;
}
