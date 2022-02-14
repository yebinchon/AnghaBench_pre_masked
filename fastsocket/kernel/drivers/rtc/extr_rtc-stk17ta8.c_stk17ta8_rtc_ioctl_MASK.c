
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_plat_data {scalar_t__ irq; int irqen; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct rtc_plat_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct rtc_plat_data*) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, unsigned int VAR_3,
       unsigned long VAR_4)
{
 struct platform_device *VAR_5 = FUNC_2(VAR_2);
 struct rtc_plat_data *VAR_6 = FUNC_0(VAR_5);

 if (VAR_6->irq <= 0)
  return -VAR_0;
 switch (VAR_3) {
 case 129:
  VAR_6->irqen &= ~VAR_1;
  FUNC_1(VAR_6);
  break;
 case 128:
  VAR_6->irqen |= VAR_1;
  FUNC_1(VAR_6);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
