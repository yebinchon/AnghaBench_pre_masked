
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_9, struct rtc_wkalrm *VAR_10)
{
 u8 VAR_11;

 if (FUNC_5(&VAR_10->time) < 0)
  return -VAR_0;

 FUNC_0();
 FUNC_3();

 FUNC_4(VAR_10->time.tm_year, VAR_6);
 FUNC_4(VAR_10->time.tm_mon, VAR_4);
 FUNC_4(VAR_10->time.tm_mday, VAR_1);
 FUNC_4(VAR_10->time.tm_hour, VAR_2);
 FUNC_4(VAR_10->time.tm_min, VAR_3);
 FUNC_4(VAR_10->time.tm_sec, VAR_5);

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_10->enabled)
  VAR_11 |= VAR_7;
 else
  VAR_11 &= ~VAR_7;
 FUNC_4(VAR_11, VAR_8);

 FUNC_1();

 return 0;
}
