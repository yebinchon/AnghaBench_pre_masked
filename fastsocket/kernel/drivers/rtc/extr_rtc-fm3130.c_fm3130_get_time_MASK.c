
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_time {void* tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct fm3130 {int* regs; int msg; TYPE_2__* client; int data_valid; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,char*,int,int,int,int,int,int,int,...) ;
 int FUNC_2 (struct device*,char*,char*,int) ;
 struct fm3130* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct rtc_time*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct fm3130 *VAR_12 = FUNC_3(VAR_10);
 int VAR_13;

 if (!VAR_12->data_valid) {




  return -VAR_0;
 }
 FUNC_4(VAR_10, VAR_2);


 VAR_13 = FUNC_5(FUNC_7(VAR_12->client->dev.parent),
   VAR_12->msg, 2);
 if (VAR_13 != 2) {
  FUNC_2(VAR_10, "%s error %d\n", "read", VAR_13);
  return -VAR_0;
 }

 FUNC_4(VAR_10, VAR_1);

 FUNC_1(VAR_10, "%s: %02x %02x %02x %02x %02x %02x %02x %02x"
   "%02x %02x %02x %02x %02x %02x %02x\n",
   "read",
   VAR_12->regs[0], VAR_12->regs[1],
   VAR_12->regs[2], VAR_12->regs[3],
   VAR_12->regs[4], VAR_12->regs[5],
   VAR_12->regs[6], VAR_12->regs[7],
   VAR_12->regs[8], VAR_12->regs[9],
   VAR_12->regs[0xa], VAR_12->regs[0xb],
   VAR_12->regs[0xc], VAR_12->regs[0xd],
   VAR_12->regs[0xe]);

 VAR_11->tm_sec = FUNC_0(VAR_12->regs[VAR_8] & 0x7f);
 VAR_11->tm_min = FUNC_0(VAR_12->regs[VAR_6] & 0x7f);
 VAR_13 = VAR_12->regs[VAR_5] & 0x3f;
 VAR_11->tm_hour = FUNC_0(VAR_13);
 VAR_11->tm_wday = FUNC_0(VAR_12->regs[VAR_4] & 0x07) - 1;
 VAR_11->tm_mday = FUNC_0(VAR_12->regs[VAR_3] & 0x3f);
 VAR_13 = VAR_12->regs[VAR_7] & 0x1f;
 VAR_11->tm_mon = FUNC_0(VAR_13) - 1;


 VAR_11->tm_year = FUNC_0(VAR_12->regs[VAR_9]) + 100;

 FUNC_1(VAR_10, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "read", VAR_11->tm_sec, VAR_11->tm_min,
  VAR_11->tm_hour, VAR_11->tm_mday,
  VAR_11->tm_mon, VAR_11->tm_year, VAR_11->tm_wday);


 return FUNC_6(VAR_11);
}
