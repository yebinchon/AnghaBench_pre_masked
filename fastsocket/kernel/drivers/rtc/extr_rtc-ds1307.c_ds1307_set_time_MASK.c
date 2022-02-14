
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct ds1307 {int* regs; int type; int (* write_block_data ) (int ,int ,int,int*) ;int offset; int client; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,char*,int,int,int,int,int,int,int) ;
 int FUNC_2 (struct device*,char*,char*,int) ;
 struct ds1307* FUNC_3 (struct device*) ;




 int FUNC_4 (int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct ds1307 *VAR_12 = FUNC_3(VAR_10);
 int VAR_13;
 int VAR_14;
 u8 *VAR_15 = VAR_12->regs;

 FUNC_1(VAR_10, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "write", VAR_11->tm_sec, VAR_11->tm_min,
  VAR_11->tm_hour, VAR_11->tm_mday,
  VAR_11->tm_mon, VAR_11->tm_year, VAR_11->tm_wday);

 VAR_15[VAR_4] = FUNC_0(VAR_11->tm_sec);
 VAR_15[VAR_2] = FUNC_0(VAR_11->tm_min);
 VAR_15[VAR_0] = FUNC_0(VAR_11->tm_hour);
 VAR_15[VAR_5] = FUNC_0(VAR_11->tm_wday + 1);
 VAR_15[VAR_1] = FUNC_0(VAR_11->tm_mday);
 VAR_15[VAR_3] = FUNC_0(VAR_11->tm_mon + 1);


 VAR_14 = VAR_11->tm_year - 100;
 VAR_15[VAR_6] = FUNC_0(VAR_14);

 switch (VAR_12->type) {
 case 131:
 case 130:
 case 128:
  VAR_15[VAR_3] |= VAR_7;
  break;
 case 129:
  VAR_15[VAR_0] |= VAR_9
    | VAR_8;
  break;
 default:
  break;
 }

 FUNC_1(VAR_10, "%s: %02x %02x %02x %02x %02x %02x %02x\n",
  "write", VAR_15[0], VAR_15[1], VAR_15[2], VAR_15[3],
  VAR_15[4], VAR_15[5], VAR_15[6]);

 VAR_13 = VAR_12->write_block_data(VAR_12->client,
  VAR_12->offset, 7, VAR_15);
 if (VAR_13 < 0) {
  FUNC_2(VAR_10, "%s error %d\n", "write", VAR_13);
  return VAR_13;
 }
 return 0;
}
