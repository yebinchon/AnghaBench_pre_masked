
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 u32 VAR_6;

 FUNC_0(&VAR_5->time, &VAR_3, sizeof(struct rtc_time));
 VAR_6 = VAR_0;
 VAR_5->enabled = (VAR_6 & VAR_2) ? 1 : 0;
 VAR_5->pending = (VAR_6 & VAR_1) ? 1 : 0;
 return 0;
}
