
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_node {int dummy; } ;
struct device_private {struct device* device; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 struct device_private* FUNC_1 (struct klist_node*) ;

__attribute__((used)) static void FUNC_2(struct klist_node *VAR_0)
{
 struct device_private *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = VAR_1->device;

 FUNC_0(VAR_2);
}
