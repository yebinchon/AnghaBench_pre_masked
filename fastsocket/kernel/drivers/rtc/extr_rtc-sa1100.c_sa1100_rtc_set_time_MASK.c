
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, struct rtc_time *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_4 == 0)
  VAR_0 = VAR_3;
 return VAR_4;
}
