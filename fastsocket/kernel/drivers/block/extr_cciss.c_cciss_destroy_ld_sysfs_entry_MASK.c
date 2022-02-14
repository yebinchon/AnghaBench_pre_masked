
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ctlr_info {TYPE_1__** drv; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_0, int VAR_1,
 int VAR_2)
{
 struct device *VAR_3 = &VAR_0->drv[VAR_1]->dev;


 if (VAR_1 == 0 && !VAR_2)
  return;

 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 VAR_0->drv[VAR_1] = ((void*)0);
}
