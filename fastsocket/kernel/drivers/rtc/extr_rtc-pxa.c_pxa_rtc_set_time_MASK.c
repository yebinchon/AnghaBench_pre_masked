
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct pxa_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pxa_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc_time*) ;
 int FUNC_2 (struct pxa_rtc*,int ,int ) ;
 int FUNC_3 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct pxa_rtc *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_4, VAR_1, FUNC_3(VAR_3));
 FUNC_2(VAR_4, VAR_0, FUNC_1(VAR_3));

 return 0;
}
