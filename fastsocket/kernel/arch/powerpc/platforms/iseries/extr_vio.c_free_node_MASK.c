
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; } ;
struct device_node {struct device_node* full_name; int parent; struct property* properties; } ;


 int FUNC_0 (struct property*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device_node *VAR_0)
{
 struct property *VAR_1;
 struct property *VAR_2;

 VAR_1 = VAR_0->properties;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_2->next;
  FUNC_0(VAR_2);
 }
 FUNC_2(VAR_0->parent);
 FUNC_1(VAR_0->full_name);
 FUNC_1(VAR_0);
}
