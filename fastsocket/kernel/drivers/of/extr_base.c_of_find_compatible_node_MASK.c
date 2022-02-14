
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {scalar_t__ type; struct device_node* allnext; } ;


 struct device_node* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device_node*,char const*) ;
 scalar_t__ FUNC_1 (scalar_t__,char const*) ;
 scalar_t__ FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct device_node *FUNC_6(struct device_node *VAR_2,
 const char *VAR_3, const char *VAR_4)
{
 struct device_node *VAR_5;

 FUNC_4(&VAR_1);
 VAR_5 = VAR_2 ? VAR_2->allnext : VAR_0;
 for (; VAR_5; VAR_5 = VAR_5->allnext) {
  if (VAR_3
      && !(VAR_5->type && (FUNC_1(VAR_5->type, VAR_3) == 0)))
   continue;
  if (FUNC_0(VAR_5, VAR_4) && FUNC_2(VAR_5))
   break;
 }
 FUNC_3(VAR_2);
 FUNC_5(&VAR_1);
 return VAR_5;
}
