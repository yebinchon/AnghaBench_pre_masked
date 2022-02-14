
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
typedef int phandle ;
struct TYPE_3__ {struct device_node* lastnode; } ;
typedef TYPE_1__ DATA ;


 struct device_node* FUNC_0 (int ) ;

__attribute__((used)) static struct device_node *FUNC_1(phandle VAR_0, DATA *VAR_1)
{
 struct device_node *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  VAR_1->lastnode = VAR_2;

 return VAR_2;
}
