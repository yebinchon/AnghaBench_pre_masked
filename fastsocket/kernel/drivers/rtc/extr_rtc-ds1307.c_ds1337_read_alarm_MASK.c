
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
struct i2c_client {int dummy; } ;
struct ds1307 {int (* read_block_data ) (struct i2c_client*,int ,int,int*) ;int* regs; int flags; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,char*,int,int,int,int,int,int,...) ;
 int FUNC_2 (struct device*,char*,char*,int) ;
 struct ds1307* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,int,int*) ;
 int FUNC_5 (int ,int *) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_6(VAR_6);
 struct ds1307 *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;

 if (!FUNC_5(VAR_5, &VAR_9->flags))
  return -VAR_3;


 VAR_10 = VAR_9->read_block_data(VAR_8,
   VAR_2, 9, VAR_9->regs);
 if (VAR_10 != 9) {
  FUNC_2(VAR_6, "%s error %d\n", "alarm read", VAR_10);
  return -VAR_4;
 }

 FUNC_1(VAR_6, "%s: %02x %02x %02x %02x, %02x %02x %02x, %02x %02x\n",
   "alarm read",
   VAR_9->regs[0], VAR_9->regs[1],
   VAR_9->regs[2], VAR_9->regs[3],
   VAR_9->regs[4], VAR_9->regs[5],
   VAR_9->regs[6], VAR_9->regs[7],
   VAR_9->regs[8]);




 VAR_7->time.tm_sec = FUNC_0(VAR_9->regs[0] & 0x7f);
 VAR_7->time.tm_min = FUNC_0(VAR_9->regs[1] & 0x7f);
 VAR_7->time.tm_hour = FUNC_0(VAR_9->regs[2] & 0x3f);
 VAR_7->time.tm_mday = FUNC_0(VAR_9->regs[3] & 0x3f);
 VAR_7->time.tm_mon = -1;
 VAR_7->time.tm_year = -1;
 VAR_7->time.tm_wday = -1;
 VAR_7->time.tm_yday = -1;
 VAR_7->time.tm_isdst = -1;


 VAR_7->enabled = !!(VAR_9->regs[7] & VAR_1);
 VAR_7->pending = !!(VAR_9->regs[8] & VAR_0);

 FUNC_1(VAR_6, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, enabled=%d, pending=%d\n",
  "alarm read", VAR_7->time.tm_sec, VAR_7->time.tm_min,
  VAR_7->time.tm_hour, VAR_7->time.tm_mday,
  VAR_7->enabled, VAR_7->pending);

 return 0;
}
