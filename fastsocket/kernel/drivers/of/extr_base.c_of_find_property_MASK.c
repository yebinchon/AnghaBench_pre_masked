
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int length; int name; struct property* next; } ;
struct device_node {struct property* properties; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct property *FUNC_3(const struct device_node *VAR_1,
      const char *VAR_2,
      int *VAR_3)
{
 struct property *VAR_4;

 if (!VAR_1)
  return ((void*)0);

 FUNC_1(&VAR_0);
 for (VAR_4 = VAR_1->properties; VAR_4 != 0; VAR_4 = VAR_4->next) {
  if (FUNC_0(VAR_4->name, VAR_2) == 0) {
   if (VAR_3 != 0)
    *VAR_3 = VAR_4->length;
   break;
  }
 }
 FUNC_2(&VAR_0);

 return VAR_4;
}
