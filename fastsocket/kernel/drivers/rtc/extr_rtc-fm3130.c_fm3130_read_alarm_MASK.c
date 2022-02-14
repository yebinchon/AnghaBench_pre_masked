
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_time {scalar_t__ tm_mon; int tm_wday; int tm_year; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct fm3130 {int* regs; int * msg; TYPE_2__* client; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,char*,int) ;
 struct fm3130* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct fm3130 *VAR_8 = FUNC_3(VAR_6);
 int VAR_9;
 struct rtc_time *VAR_10 = &VAR_7->time;

 VAR_9 = FUNC_4(FUNC_5(VAR_8->client->dev.parent),
   &VAR_8->msg[2], 2);
 if (VAR_9 != 2) {
  FUNC_2(VAR_6, "%s error %d\n", "read", VAR_9);
  return -VAR_0;
 }
 FUNC_1(VAR_6, "alarm read %02x %02x %02x %02x %02x\n",
   VAR_8->regs[VAR_5],
   VAR_8->regs[VAR_3],
   VAR_8->regs[VAR_2],
   VAR_8->regs[VAR_1],
   VAR_8->regs[VAR_4]);


 VAR_10->tm_sec = FUNC_0(VAR_8->regs[VAR_5] & 0x7F);
 VAR_10->tm_min = FUNC_0(VAR_8->regs[VAR_3] & 0x7F);
 VAR_10->tm_hour = FUNC_0(VAR_8->regs[VAR_2] & 0x3F);
 VAR_10->tm_mday = FUNC_0(VAR_8->regs[VAR_1] & 0x3F);
 VAR_10->tm_mon = FUNC_0(VAR_8->regs[VAR_4] & 0x1F);
 if (VAR_10->tm_mon > 0)
  VAR_10->tm_mon -= 1;
 FUNC_1(VAR_6, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "read alarm", VAR_10->tm_sec, VAR_10->tm_min,
  VAR_10->tm_hour, VAR_10->tm_mday,
  VAR_10->tm_mon, VAR_10->tm_year, VAR_10->tm_wday);

 return 0;
}
