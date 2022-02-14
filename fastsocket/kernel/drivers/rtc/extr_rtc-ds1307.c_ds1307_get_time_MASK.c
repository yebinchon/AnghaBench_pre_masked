
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct ds1307 {int (* read_block_data ) (int ,int ,int,int*) ;int* regs; int offset; int client; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,char*,int,int,int,int,int,int,int) ;
 int FUNC_2 (struct device*,char*,char*,int) ;
 struct ds1307* FUNC_3 (struct device*) ;
 int FUNC_4 (struct rtc_time*) ;
 int FUNC_5 (int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_8, struct rtc_time *VAR_9)
{
 struct ds1307 *VAR_10 = FUNC_3(VAR_8);
 int VAR_11;


 VAR_11 = VAR_10->read_block_data(VAR_10->client,
  VAR_10->offset, 7, VAR_10->regs);
 if (VAR_11 != 7) {
  FUNC_2(VAR_8, "%s error %d\n", "read", VAR_11);
  return -VAR_7;
 }

 FUNC_1(VAR_8, "%s: %02x %02x %02x %02x %02x %02x %02x\n",
   "read",
   VAR_10->regs[0], VAR_10->regs[1],
   VAR_10->regs[2], VAR_10->regs[3],
   VAR_10->regs[4], VAR_10->regs[5],
   VAR_10->regs[6]);

 VAR_9->tm_sec = FUNC_0(VAR_10->regs[VAR_4] & 0x7f);
 VAR_9->tm_min = FUNC_0(VAR_10->regs[VAR_2] & 0x7f);
 VAR_11 = VAR_10->regs[VAR_0] & 0x3f;
 VAR_9->tm_hour = FUNC_0(VAR_11);
 VAR_9->tm_wday = FUNC_0(VAR_10->regs[VAR_5] & 0x07) - 1;
 VAR_9->tm_mday = FUNC_0(VAR_10->regs[VAR_1] & 0x3f);
 VAR_11 = VAR_10->regs[VAR_3] & 0x1f;
 VAR_9->tm_mon = FUNC_0(VAR_11) - 1;


 VAR_9->tm_year = FUNC_0(VAR_10->regs[VAR_6]) + 100;

 FUNC_1(VAR_8, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "read", VAR_9->tm_sec, VAR_9->tm_min,
  VAR_9->tm_hour, VAR_9->tm_mday,
  VAR_9->tm_mon, VAR_9->tm_year, VAR_9->tm_wday);


 return FUNC_4(VAR_9);
}
