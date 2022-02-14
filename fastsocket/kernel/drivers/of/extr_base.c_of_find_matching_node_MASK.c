
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;
struct device_node {struct device_node* allnext; } ;


 struct device_node* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct of_device_id const*,struct device_node*) ;
 scalar_t__ FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct device_node *FUNC_5(struct device_node *VAR_2,
       const struct of_device_id *VAR_3)
{
 struct device_node *VAR_4;

 FUNC_3(&VAR_1);
 VAR_4 = VAR_2 ? VAR_2->allnext : VAR_0;
 for (; VAR_4; VAR_4 = VAR_4->allnext) {
  if (FUNC_0(VAR_3, VAR_4) && FUNC_1(VAR_4))
   break;
 }
 FUNC_2(VAR_2);
 FUNC_4(&VAR_1);
 return VAR_4;
}
