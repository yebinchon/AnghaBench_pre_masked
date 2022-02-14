
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct ep93xx_rtc {scalar_t__ mmio_base; } ;
struct device {struct ep93xx_rtc* platform_data; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct ep93xx_rtc *VAR_3 = VAR_1->platform_data;
 unsigned long VAR_4;

  VAR_4 = FUNC_0(VAR_3->mmio_base + VAR_0);

 FUNC_1(VAR_4, VAR_2);
 return 0;
}
