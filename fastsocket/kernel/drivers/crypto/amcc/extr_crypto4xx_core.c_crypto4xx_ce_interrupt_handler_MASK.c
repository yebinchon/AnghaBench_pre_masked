
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto4xx_core_device {int tasklet; TYPE_1__* dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ ce_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto4xx_core_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct device *VAR_5 = (struct device *)VAR_4;
 struct crypto4xx_core_device *VAR_6 = FUNC_0(VAR_5);

 if (VAR_6->dev->ce_base == 0)
  return 0;

 FUNC_2(VAR_2,
        VAR_6->dev->ce_base + VAR_0);
 FUNC_1(&VAR_6->tasklet);

 return VAR_1;
}
