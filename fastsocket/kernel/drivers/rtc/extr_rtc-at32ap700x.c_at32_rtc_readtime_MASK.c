
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_at32ap700x {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct rtc_at32ap700x* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (struct rtc_at32ap700x*,int ) ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct rtc_at32ap700x *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_4, VAR_2);

 return 0;
}
