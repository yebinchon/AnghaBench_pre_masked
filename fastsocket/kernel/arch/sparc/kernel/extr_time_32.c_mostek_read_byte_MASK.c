
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {struct m48t59_plat_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct m48t59_plat_data {scalar_t__ ioaddr; } ;
struct device {int dummy; } ;


 unsigned char FUNC_0 (scalar_t__) ;
 struct platform_device* FUNC_1 (struct device*) ;

__attribute__((used)) static unsigned char FUNC_2(struct device *VAR_0, u32 VAR_1)
{
 struct platform_device *VAR_2 = FUNC_1(VAR_0);
 struct m48t59_plat_data *VAR_3 = VAR_2->dev.platform_data;

 return FUNC_0(VAR_3->ioaddr + VAR_1);
}
