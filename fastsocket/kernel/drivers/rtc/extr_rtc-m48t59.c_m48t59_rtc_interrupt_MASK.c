
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct m48t59_plat_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct m48t59_private {int rtc; int lock; } ;
struct m48t59_plat_data {int dummy; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct m48t59_private* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct platform_device* FUNC_5 (struct device*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct device *VAR_8 = (struct device *)VAR_7;
 struct platform_device *VAR_9 = FUNC_5(VAR_8);
 struct m48t59_plat_data *VAR_10 = VAR_9->dev.platform_data;
 struct m48t59_private *VAR_11 = FUNC_1(VAR_9);
 u8 VAR_12;

 FUNC_3(&VAR_11->lock);
 VAR_12 = FUNC_0(VAR_2);
 FUNC_4(&VAR_11->lock);

 if (VAR_12 & VAR_3) {
  FUNC_2(VAR_11->rtc, 1, (VAR_4 | VAR_5));
  return VAR_0;
 }

 return VAR_1;
}
