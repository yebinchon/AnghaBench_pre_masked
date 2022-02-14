
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_plat_data {scalar_t__ irq; int irqen; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int FUNC_0 (struct rtc_plat_data*) ;
 struct rtc_plat_data* FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, unsigned int VAR_4,
       unsigned long VAR_5)
{
 struct platform_device *VAR_6 = FUNC_2(VAR_3);
 struct rtc_plat_data *VAR_7 = FUNC_1(VAR_6);

 if (VAR_7->irq <= 0)
  return -VAR_0;
 switch (VAR_4) {
 case 131:
  VAR_7->irqen &= ~VAR_1;
  FUNC_0(VAR_7);
  break;
 case 130:
  VAR_7->irqen |= VAR_1;
  FUNC_0(VAR_7);
  break;
 case 129:
  VAR_7->irqen &= ~VAR_2;
  FUNC_0(VAR_7);
  break;
 case 128:
  VAR_7->irqen |= VAR_2;
  FUNC_0(VAR_7);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
