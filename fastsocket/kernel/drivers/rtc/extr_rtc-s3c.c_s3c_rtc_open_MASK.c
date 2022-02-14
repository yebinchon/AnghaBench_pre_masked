
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (int ,struct rtc_device*) ;
 struct rtc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ,int ,char*,struct rtc_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_4(VAR_5);
 struct rtc_device *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_1,
     VAR_0, "s3c2410-rtc alarm", VAR_7);

 if (VAR_8) {
  FUNC_0(VAR_5, "IRQ%d error %d\n", VAR_2, VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_3,
     VAR_0, "s3c2410-rtc tick", VAR_7);

 if (VAR_8) {
  FUNC_0(VAR_5, "IRQ%d error %d\n", VAR_4, VAR_8);
  goto tick_err;
 }

 return VAR_8;

 tick_err:
 FUNC_1(VAR_2, VAR_7);
 return VAR_8;
}
