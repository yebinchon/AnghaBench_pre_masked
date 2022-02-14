
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,struct rtc_device*) ;
 struct rtc_device* FUNC_1 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,int ) ;
 int VAR_1 ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_3(VAR_2);
 struct rtc_device *VAR_4 = FUNC_1(VAR_3);



 FUNC_2(VAR_2, 0);
 FUNC_0(VAR_0, VAR_4);
 FUNC_0(VAR_1, VAR_4);
}
