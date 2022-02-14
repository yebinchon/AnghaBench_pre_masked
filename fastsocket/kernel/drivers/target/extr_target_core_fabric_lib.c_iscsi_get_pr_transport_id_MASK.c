
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct t10_pr_registration {unsigned char* pr_reg_isid; scalar_t__ isid_present_at_reg; } ;
struct se_portal_group {int dummy; } ;
struct se_node_acl {char* initiatorname; int nacl_sess_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (unsigned char*,char*,char*) ;

u32 FUNC_3(
 struct se_portal_group *VAR_0,
 struct se_node_acl *VAR_1,
 struct t10_pr_registration *VAR_2,
 int *VAR_3,
 unsigned char *VAR_4)
{
 u32 VAR_5 = 4, VAR_6 = 0;
 u16 VAR_7 = 0;

 FUNC_0(&VAR_1->nacl_sess_lock);



 VAR_4[0] = 0x05;
 VAR_7 = FUNC_2(&VAR_4[VAR_5], "%s", VAR_1->initiatorname);



 VAR_7++;
 if ((*VAR_3 == 1) && (VAR_2->isid_present_at_reg)) {




  VAR_4[0] |= 0x40;
  VAR_4[VAR_5+VAR_7] = 0x2c; VAR_5++;
  VAR_4[VAR_5+VAR_7] = 0x69; VAR_5++;
  VAR_4[VAR_5+VAR_7] = 0x2c; VAR_5++;
  VAR_4[VAR_5+VAR_7] = 0x30; VAR_5++;
  VAR_4[VAR_5+VAR_7] = 0x78; VAR_5++;
  VAR_7 += 5;
  VAR_4[VAR_5+VAR_7] = VAR_2->pr_reg_isid[0]; VAR_5++;
  VAR_4[VAR_5+VAR_7] = VAR_2->pr_reg_isid[1]; VAR_5++;
  VAR_4[VAR_5+VAR_7] = VAR_2->pr_reg_isid[2]; VAR_5++;
  VAR_4[VAR_5+VAR_7] = VAR_2->pr_reg_isid[3]; VAR_5++;
  VAR_4[VAR_5+VAR_7] = VAR_2->pr_reg_isid[4]; VAR_5++;
  VAR_4[VAR_5+VAR_7] = VAR_2->pr_reg_isid[5]; VAR_5++;
  VAR_4[VAR_5+VAR_7] = '\0'; VAR_5++;
  VAR_7 += 7;
 }
 FUNC_1(&VAR_1->nacl_sess_lock);





 VAR_6 = ((-VAR_7) & 3);
 if (VAR_6 != 0)
  VAR_7 += VAR_6;

 VAR_4[2] = ((VAR_7 >> 8) & 0xff);
 VAR_4[3] = (VAR_7 & 0xff);




 VAR_7 += 4;

 return VAR_7;
}
