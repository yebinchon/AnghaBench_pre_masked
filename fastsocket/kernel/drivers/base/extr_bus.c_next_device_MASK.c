
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_node {int dummy; } ;
struct klist_iter {int dummy; } ;
struct device_private {struct device* device; } ;
struct device {int dummy; } ;


 struct klist_node* FUNC_0 (struct klist_iter*) ;
 struct device_private* FUNC_1 (struct klist_node*) ;

__attribute__((used)) static struct device *FUNC_2(struct klist_iter *VAR_0)
{
 struct klist_node *VAR_1 = FUNC_0(VAR_0);
 struct device *VAR_2 = ((void*)0);
 struct device_private *VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_1(VAR_1);
  VAR_2 = VAR_3->device;
 }
 return VAR_2;
}
