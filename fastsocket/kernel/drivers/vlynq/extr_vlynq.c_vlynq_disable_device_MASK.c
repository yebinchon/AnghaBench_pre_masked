
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct plat_vlynq_ops* platform_data; } ;
struct vlynq_device {int irq; scalar_t__ enabled; TYPE_1__ dev; } ;
struct plat_vlynq_ops {int (* off ) (struct vlynq_device*) ;} ;


 int FUNC_0 (int ,struct vlynq_device*) ;
 int FUNC_1 (struct vlynq_device*) ;

void FUNC_2(struct vlynq_device *VAR_0)
{
 struct plat_vlynq_ops *VAR_1 = VAR_0->dev.platform_data;

 VAR_0->enabled = 0;
 FUNC_0(VAR_0->irq, VAR_0);
 VAR_1->off(VAR_0);
}
