
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (unsigned long,struct rtc_time*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 struct rtc_time *VAR_10 = &VAR_6->time;

 FUNC_2(&VAR_4);

 VAR_7 = FUNC_0(VAR_1);
 VAR_8 = FUNC_0(VAR_2);
 VAR_9 = FUNC_0(VAR_0);
 VAR_6->enabled = VAR_3;

 FUNC_3(&VAR_4);

 FUNC_1((VAR_9 << 17) | (VAR_8 << 1) | (VAR_7 >> 15), VAR_10);

 return 0;
}
