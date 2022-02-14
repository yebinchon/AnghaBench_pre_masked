
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_rtc {scalar_t__ mmio_base; } ;
struct device {struct ep93xx_rtc* platform_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, unsigned long VAR_2)
{
 struct ep93xx_rtc *VAR_3 = VAR_1->platform_data;

 FUNC_0(VAR_2 + 1, VAR_3->mmio_base + VAR_0);
 return 0;
}
