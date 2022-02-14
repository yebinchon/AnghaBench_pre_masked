
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; int tm_year; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct fm3130 {int* regs; int alarm; int client; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct fm3130* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ,size_t,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_10, struct rtc_wkalrm *VAR_11)
{
 struct fm3130 *VAR_12 = FUNC_2(VAR_10);
 struct rtc_time *VAR_13 = &VAR_11->time;
 int VAR_14;

 FUNC_1(VAR_10, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "write alarm", VAR_13->tm_sec, VAR_13->tm_min,
  VAR_13->tm_hour, VAR_13->tm_mday,
  VAR_13->tm_mon, VAR_13->tm_year, VAR_13->tm_wday);

 if (VAR_13->tm_sec != -1)
  VAR_12->regs[VAR_5] =
   FUNC_0(VAR_13->tm_sec) | 0x80;

 if (VAR_13->tm_min != -1)
  VAR_12->regs[VAR_2] =
   FUNC_0(VAR_13->tm_min) | 0x80;

 if (VAR_13->tm_hour != -1)
  VAR_12->regs[VAR_1] =
   FUNC_0(VAR_13->tm_hour) | 0x80;

 if (VAR_13->tm_mday != -1)
  VAR_12->regs[VAR_0] =
   FUNC_0(VAR_13->tm_mday) | 0x80;

 if (VAR_13->tm_mon != -1)
  VAR_12->regs[VAR_3] =
   FUNC_0(VAR_13->tm_mon + 1) | 0x80;

 FUNC_1(VAR_10, "alarm write %02x %02x %02x %02x %02x\n",
   VAR_12->regs[VAR_5],
   VAR_12->regs[VAR_2],
   VAR_12->regs[VAR_1],
   VAR_12->regs[VAR_0],
   VAR_12->regs[VAR_3]);

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  FUNC_4(VAR_12->client,
     VAR_5 + VAR_14,
     VAR_12->regs[VAR_5 + VAR_14]);
 }
 VAR_12->regs[VAR_6] =
  FUNC_3(VAR_12->client, VAR_6);

 if (VAR_12->regs[VAR_6] & VAR_8) {
  VAR_12->alarm = 1;
  VAR_12->regs[VAR_6] &= ~VAR_8;
 }
 if (VAR_11->enabled) {
  FUNC_4(VAR_12->client, VAR_6,
   (VAR_12->regs[VAR_6] &
    ~(VAR_9)) |
     VAR_7);
 } else {
  FUNC_4(VAR_12->client, VAR_6,
   VAR_12->regs[VAR_6] &
    ~(VAR_7));
 }
 return 0;
}
