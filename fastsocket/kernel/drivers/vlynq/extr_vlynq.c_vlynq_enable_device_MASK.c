
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct plat_vlynq_ops* platform_data; } ;
struct vlynq_device {int enabled; TYPE_1__ dev; } ;
struct plat_vlynq_ops {int (* off ) (struct vlynq_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct vlynq_device*) ;
 int FUNC_1 (struct vlynq_device*) ;
 int FUNC_2 (struct vlynq_device*) ;

int FUNC_3(struct vlynq_device *VAR_1)
{
 struct plat_vlynq_ops *VAR_2 = VAR_1->dev.platform_data;
 int VAR_3 = -VAR_0;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  VAR_2->off(VAR_1);

 VAR_1->enabled = !VAR_3;
 return VAR_3;
}
