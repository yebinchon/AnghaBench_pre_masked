
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
struct TYPE_2__ {int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; int pending; } ;
struct i2c_client {int dummy; } ;
struct ds1307 {unsigned char* regs; int (* read_block_data ) (struct i2c_client*,int ,int,unsigned char*) ;int (* write_block_data ) (struct i2c_client*,int ,int,unsigned char*) ;int flags; } ;
struct device {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct ds1307* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,int,unsigned char*) ;
 int FUNC_5 (struct i2c_client*,int ,int,unsigned char*) ;
 int FUNC_6 (int ,int *) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_7(VAR_8);
 struct ds1307 *VAR_11 = FUNC_3(VAR_10);
 unsigned char *VAR_12 = VAR_11->regs;
 u8 VAR_13, VAR_14;
 int VAR_15;

 if (!FUNC_6(VAR_7, &VAR_11->flags))
  return -VAR_5;

 FUNC_1(VAR_8, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, enabled=%d, pending=%d\n",
  "alarm set", VAR_9->time.tm_sec, VAR_9->time.tm_min,
  VAR_9->time.tm_hour, VAR_9->time.tm_mday,
  VAR_9->enabled, VAR_9->pending);


 VAR_15 = VAR_11->read_block_data(VAR_10,
   VAR_4, 9, VAR_12);
 if (VAR_15 != 9) {
  FUNC_2(VAR_8, "%s error %d\n", "alarm write", VAR_15);
  return -VAR_6;
 }
 VAR_13 = VAR_11->regs[7];
 VAR_14 = VAR_11->regs[8];

 FUNC_1(VAR_8, "%s: %02x %02x %02x %02x, %02x %02x %02x, %02x %02x\n",
   "alarm set (old status)",
   VAR_11->regs[0], VAR_11->regs[1],
   VAR_11->regs[2], VAR_11->regs[3],
   VAR_11->regs[4], VAR_11->regs[5],
   VAR_11->regs[6], VAR_13, VAR_14);


 VAR_12[0] = FUNC_0(VAR_9->time.tm_sec);
 VAR_12[1] = FUNC_0(VAR_9->time.tm_min);
 VAR_12[2] = FUNC_0(VAR_9->time.tm_hour);
 VAR_12[3] = FUNC_0(VAR_9->time.tm_mday);


 VAR_12[4] = 0;
 VAR_12[5] = 0;
 VAR_12[6] = 0;


 VAR_12[7] = VAR_13 & ~(VAR_1 | VAR_3);
 if (VAR_9->enabled) {
  FUNC_1(VAR_8, "alarm IRQ armed\n");
  VAR_12[7] |= VAR_1;
 }
 VAR_12[8] = VAR_14 & ~(VAR_0 | VAR_2);

 VAR_15 = VAR_11->write_block_data(VAR_10,
   VAR_4, 9, VAR_12);
 if (VAR_15 < 0) {
  FUNC_2(VAR_8, "can't set alarm time\n");
  return VAR_15;
 }

 return 0;
}
