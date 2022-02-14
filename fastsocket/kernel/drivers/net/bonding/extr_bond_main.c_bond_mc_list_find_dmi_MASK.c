
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_mc_list {struct dev_mc_list* next; } ;


 scalar_t__ FUNC_0 (struct dev_mc_list*,struct dev_mc_list*) ;

__attribute__((used)) static struct dev_mc_list *FUNC_1(struct dev_mc_list *VAR_0,
       struct dev_mc_list *VAR_1)
{
 struct dev_mc_list *VAR_2;

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_0(VAR_0, VAR_2))
   return VAR_2;
 }

 return ((void*)0);
}
