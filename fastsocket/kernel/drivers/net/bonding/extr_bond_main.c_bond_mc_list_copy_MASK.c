
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_mc_list {int dmi_gusers; int dmi_users; int dmi_addrlen; int dmi_addr; struct dev_mc_list* next; } ;
struct bonding {struct dev_mc_list* mc_list; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct dev_mc_list* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dev_mc_list *VAR_1, struct bonding *VAR_2,
        gfp_t VAR_3)
{
 struct dev_mc_list *VAR_4, *VAR_5;

 for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next) {
  VAR_5 = FUNC_0(sizeof(struct dev_mc_list), VAR_3);

  if (!VAR_5) {

   return -VAR_0;
  }

  VAR_5->next = VAR_2->mc_list;
  VAR_2->mc_list = VAR_5;
  VAR_5->dmi_addrlen = VAR_4->dmi_addrlen;
  FUNC_1(VAR_5->dmi_addr, VAR_4->dmi_addr, VAR_4->dmi_addrlen);
  VAR_5->dmi_users = VAR_4->dmi_users;
  VAR_5->dmi_gusers = VAR_4->dmi_gusers;
 }

 return 0;
}
