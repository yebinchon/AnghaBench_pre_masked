
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* data; struct property* full_name; struct property* deadprops; struct property* value; struct property* name; struct property* next; int kref; struct property* properties; } ;
struct kref {int dummy; } ;
struct device_node {struct device_node* data; struct device_node* full_name; struct device_node* deadprops; struct device_node* value; struct device_node* name; struct device_node* next; int kref; struct device_node* properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct property*) ;
 int FUNC_2 (int *) ;
 struct property* FUNC_3 (struct kref*) ;
 int FUNC_4 (struct property*,int ) ;
 int FUNC_5 (char*,struct property*) ;

__attribute__((used)) static void FUNC_6(struct kref *VAR_2)
{
 struct device_node *VAR_3 = FUNC_3(VAR_2);
 struct property *VAR_4 = VAR_3->properties;


 if (!FUNC_4(VAR_3, VAR_0)) {
  FUNC_5("WARNING: Bad of_node_put() on %s\n", VAR_3->full_name);
  FUNC_0();
  FUNC_2(&VAR_3->kref);
  return;
 }

 if (!FUNC_4(VAR_3, VAR_1))
  return;

 while (VAR_4) {
  struct property *VAR_5 = VAR_4->next;
  FUNC_1(VAR_4->name);
  FUNC_1(VAR_4->value);
  FUNC_1(VAR_4);
  VAR_4 = VAR_5;

  if (!VAR_4) {
   VAR_4 = VAR_3->deadprops;
   VAR_3->deadprops = ((void*)0);
  }
 }
 FUNC_1(VAR_3->full_name);
 FUNC_1(VAR_3->data);
 FUNC_1(VAR_3);
}
