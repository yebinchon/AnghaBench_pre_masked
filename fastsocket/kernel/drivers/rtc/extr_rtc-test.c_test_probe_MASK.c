
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct platform_device*,struct rtc_device*) ;
 struct rtc_device* FUNC_4 (char*,int *,int *,int ) ;
 int FUNC_5 (struct rtc_device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 int VAR_4;
 struct rtc_device *VAR_5 = FUNC_4("test", &VAR_3->dev,
      &VAR_2, VAR_0);
 if (FUNC_0(VAR_5)) {
  VAR_4 = FUNC_1(VAR_5);
  return VAR_4;
 }

 VAR_4 = FUNC_2(&VAR_3->dev, &VAR_1);
 if (VAR_4)
  goto err;

 FUNC_3(VAR_3, VAR_5);

 return 0;

err:
 FUNC_5(VAR_5);
 return VAR_4;
}
