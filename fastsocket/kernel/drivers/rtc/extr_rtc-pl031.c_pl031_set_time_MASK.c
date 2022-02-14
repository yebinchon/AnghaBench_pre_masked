
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct pl031_local {scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 struct pl031_local* FUNC_1 (struct device*) ;
 int FUNC_2 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 unsigned long VAR_3;
 struct pl031_local *VAR_4 = FUNC_1(VAR_1);

 FUNC_2(VAR_2, &VAR_3);
 FUNC_0(VAR_3, VAR_4->base + VAR_0);

 return 0;
}
