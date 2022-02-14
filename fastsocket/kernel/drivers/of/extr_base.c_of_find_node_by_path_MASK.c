
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {scalar_t__ full_name; struct device_node* allnext; } ;


 struct device_node* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;
 scalar_t__ FUNC_1 (struct device_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct device_node *FUNC_4(const char *VAR_2)
{
 struct device_node *VAR_3 = VAR_0;

 FUNC_2(&VAR_1);
 for (; VAR_3; VAR_3 = VAR_3->allnext) {
  if (VAR_3->full_name && (FUNC_0(VAR_3->full_name, VAR_2) == 0)
      && FUNC_1(VAR_3))
   break;
 }
 FUNC_3(&VAR_1);
 return VAR_3;
}
