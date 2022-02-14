
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; int name; } ;
struct device_node {scalar_t__ pde; struct property* properties; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct property*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct device_node *VAR_1, struct property *VAR_2)
{
 struct property **VAR_3;
 unsigned long VAR_4;

 VAR_2->next = ((void*)0);
 FUNC_2(&VAR_0, VAR_4);
 VAR_3 = &VAR_1->properties;
 while (*VAR_3) {
  if (FUNC_1(VAR_2->name, (*VAR_3)->name) == 0) {

   FUNC_3(&VAR_0, VAR_4);
   return -1;
  }
  VAR_3 = &(*VAR_3)->next;
 }
 *VAR_3 = VAR_2;
 FUNC_3(&VAR_0, VAR_4);







 return 0;
}
