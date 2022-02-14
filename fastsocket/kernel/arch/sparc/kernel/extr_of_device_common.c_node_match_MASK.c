
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device {struct device_node* node; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 struct of_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct of_device *VAR_2 = FUNC_0(VAR_0);
 struct device_node *VAR_3 = VAR_1;

 return (VAR_2->node == VAR_3);
}
