
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
 int VAR_4 ;
 struct rtc_device* FUNC_0 (struct platform_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtc_device*,int,int) ;
 int VAR_7 ;
 struct platform_device* FUNC_2 (void*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct platform_device *VAR_10 = FUNC_2(VAR_9);
 struct rtc_device *VAR_11 = FUNC_0(VAR_10);
 VAR_1 = VAR_2;

 FUNC_1(VAR_11, VAR_6, VAR_4 | VAR_3);

 if (VAR_6 == 1)
  VAR_6 = (VAR_5 * ((1 << 30) / (VAR_7 >> 2)));

 return VAR_0;
}
