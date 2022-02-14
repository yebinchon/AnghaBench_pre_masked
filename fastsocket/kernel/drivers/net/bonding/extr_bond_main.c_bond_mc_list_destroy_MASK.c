
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_mc_list {struct dev_mc_list* next; } ;
struct bonding {struct dev_mc_list* mc_list; } ;


 int FUNC_0 (struct dev_mc_list*) ;

__attribute__((used)) static void FUNC_1(struct bonding *VAR_0)
{
 struct dev_mc_list *VAR_1;

 VAR_1 = VAR_0->mc_list;
 while (VAR_1) {
  VAR_0->mc_list = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_0->mc_list;
 }

 VAR_0->mc_list = ((void*)0);
}
