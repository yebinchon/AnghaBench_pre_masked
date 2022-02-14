
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct platform_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rtc_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rtc_device*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct platform_device *VAR_6 = (struct platform_device *)VAR_5;
 struct rtc_device *VAR_7 = FUNC_0(VAR_6);

 FUNC_1(VAR_2, VAR_0);

 FUNC_2(VAR_7, 1, VAR_3);

 return VAR_1;
}
