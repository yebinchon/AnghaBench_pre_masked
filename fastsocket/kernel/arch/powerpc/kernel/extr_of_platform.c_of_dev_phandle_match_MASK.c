
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
typedef scalar_t__ phandle ;
struct TYPE_4__ {TYPE_1__* node; } ;
struct TYPE_3__ {scalar_t__ linux_phandle; } ;


 TYPE_2__* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 phandle *VAR_2 = VAR_1;
 return FUNC_0(VAR_0)->node->linux_phandle == *VAR_2;
}
