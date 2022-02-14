
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int name; struct property* next; } ;
struct device_node {struct property* properties; struct device_node* allnext; } ;


 struct device_node* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct device_node *FUNC_5(struct device_node *VAR_2,
 const char *VAR_3)
{
 struct device_node *VAR_4;
 struct property *VAR_5;

 FUNC_3(&VAR_1);
 VAR_4 = VAR_2 ? VAR_2->allnext : VAR_0;
 for (; VAR_4; VAR_4 = VAR_4->allnext) {
  for (VAR_5 = VAR_4->properties; VAR_5 != 0; VAR_5 = VAR_5->next) {
   if (FUNC_2(VAR_5->name, VAR_3) == 0) {
    FUNC_0(VAR_4);
    goto out;
   }
  }
 }
out:
 FUNC_1(VAR_2);
 FUNC_4(&VAR_1);
 return VAR_4;
}
