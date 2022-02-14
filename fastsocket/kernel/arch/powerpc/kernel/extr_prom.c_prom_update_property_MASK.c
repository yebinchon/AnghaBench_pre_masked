
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; } ;
struct device_node {scalar_t__ pde; struct property* deadprops; struct property* properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct property*,struct property*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct device_node *VAR_2,
    struct property *VAR_3,
    struct property *VAR_4)
{
 struct property **VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_1(&VAR_1, VAR_6);
 VAR_5 = &VAR_2->properties;
 while (*VAR_5) {
  if (*VAR_5 == VAR_4) {

   VAR_3->next = VAR_4->next;
   *VAR_5 = VAR_3;
   VAR_4->next = VAR_2->deadprops;
   VAR_2->deadprops = VAR_4;
   VAR_7 = 1;
   break;
  }
  VAR_5 = &(*VAR_5)->next;
 }
 FUNC_2(&VAR_1, VAR_6);

 if (!VAR_7)
  return -VAR_0;







 return 0;
}
