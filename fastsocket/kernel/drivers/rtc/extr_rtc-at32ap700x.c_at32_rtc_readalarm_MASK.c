
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct rtc_at32ap700x {int lock; int alarm_time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct rtc_at32ap700x* FUNC_1 (struct device*) ;
 int FUNC_2 (struct rtc_at32ap700x*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct rtc_at32ap700x *VAR_6 = FUNC_1(VAR_4);

 FUNC_4(&VAR_6->lock);
 FUNC_3(VAR_6->alarm_time, &VAR_5->time);
 VAR_5->enabled = FUNC_2(VAR_6, VAR_0) & FUNC_0(VAR_1) ? 1 : 0;
 VAR_5->pending = FUNC_2(VAR_6, VAR_2) & FUNC_0(VAR_3) ? 1 : 0;
 FUNC_5(&VAR_6->lock);

 return 0;
}
