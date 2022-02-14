
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; int time; } ;
struct pl031_local {scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 struct pl031_local* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct pl031_local *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;

 FUNC_2(&VAR_3->time, &VAR_5);

 FUNC_0(VAR_5, VAR_4->base + VAR_1);
 FUNC_0(!VAR_3->enabled, VAR_4->base + VAR_0);

 return 0;
}
