
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 unsigned long VAR_8;
 struct rtc_time *VAR_9 = &VAR_7->time;

 VAR_8 = FUNC_2(VAR_9->tm_year + 1900, VAR_9->tm_mon + 1, VAR_9->tm_mday,
                    VAR_9->tm_hour, VAR_9->tm_min, VAR_9->tm_sec);

 FUNC_4(&VAR_5);

 if (VAR_4)
  FUNC_0(VAR_3);

 FUNC_3(VAR_1, (uint16_t)(VAR_8 << 15));
 FUNC_3(VAR_2, (uint16_t)(VAR_8 >> 1));
 FUNC_3(VAR_0, (uint16_t)(VAR_8 >> 17));

 if (VAR_7->enabled)
  FUNC_1(VAR_3);

 VAR_4 = VAR_7->enabled;

 FUNC_5(&VAR_5);

 return 0;
}
