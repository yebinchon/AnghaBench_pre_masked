
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; } ;
struct device_node {struct device_node* full_name; struct property* properties; } ;


 int FUNC_0 (struct property*) ;
 int FUNC_1 (struct device_node*) ;

__attribute__((used)) static void FUNC_2(struct device_node *VAR_0)
{
 struct property *VAR_1;

 while (VAR_0->properties) {
  VAR_1 = VAR_0->properties;
  VAR_0->properties = VAR_1->next;
  FUNC_0(VAR_1);
 }

 FUNC_1(VAR_0->full_name);
 FUNC_1(VAR_0);
}
