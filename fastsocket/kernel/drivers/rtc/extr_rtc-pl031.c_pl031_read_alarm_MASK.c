
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {void* enabled; void* pending; int time; } ;
struct pl031_local {scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 struct pl031_local* FUNC_1 (struct device*) ;
 int FUNC_2 (void*,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct pl031_local *VAR_5 = FUNC_1(VAR_3);

 FUNC_2(FUNC_0(VAR_5->base + VAR_1), &VAR_4->time);
 VAR_4->pending = FUNC_0(VAR_5->base + VAR_2);
 VAR_4->enabled = FUNC_0(VAR_5->base + VAR_0);

 return 0;
}
