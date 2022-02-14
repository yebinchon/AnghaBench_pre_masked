
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i2c_msg {scalar_t__ len; int addr; int flags; int buf; } ;
struct i2c_adapter {int dummy; } ;
struct davinci_i2c_platform_data {scalar_t__ bus_delay; } ;
struct TYPE_3__ {int timeout; } ;
struct davinci_i2c_dev {int buf_len; int cmd_err; int terminate; TYPE_2__* dev; TYPE_1__ adapter; int cmd_complete; int buf; } ;
struct TYPE_4__ {struct davinci_i2c_platform_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int) ;
 struct davinci_i2c_platform_data VAR_21 ;
 int FUNC_2 (struct davinci_i2c_dev*,int ) ;
 int FUNC_3 (struct davinci_i2c_dev*,int ,int) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (struct davinci_i2c_dev*) ;
 struct davinci_i2c_dev* FUNC_6 (struct i2c_adapter*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct i2c_adapter *VAR_22, struct i2c_msg *VAR_23, int VAR_24)
{
 struct davinci_i2c_dev *VAR_25 = FUNC_6(VAR_22);
 struct davinci_i2c_platform_data *VAR_26 = VAR_25->dev->platform_data;
 u32 VAR_27;
 u16 VAR_28;
 int VAR_29;

 if (VAR_23->len == 0)
  return -VAR_14;

 if (!VAR_26)
  VAR_26 = &VAR_21;

 if (VAR_26->bus_delay)
  FUNC_8(VAR_26->bus_delay);


 FUNC_3(VAR_25, VAR_11, VAR_23->addr);

 VAR_25->buf = VAR_23->buf;
 VAR_25->buf_len = VAR_23->len;

 FUNC_3(VAR_25, VAR_0, VAR_25->buf_len);

 FUNC_0(VAR_25->cmd_complete);
 VAR_25->cmd_err = 0;



 VAR_27 = VAR_4 | VAR_5 | VAR_8;


 if (VAR_23->flags & VAR_20)
  VAR_27 |= VAR_10;
 if (!(VAR_23->flags & VAR_19))
  VAR_27 |= VAR_9;
 if (VAR_24)
  VAR_27 |= VAR_7;


 VAR_28 = FUNC_2(VAR_25, VAR_1);
 if (VAR_23->flags & VAR_19)
  FUNC_1(VAR_28, VAR_2, 1);
 else
  FUNC_1(VAR_28, VAR_3, 1);
 FUNC_3(VAR_25, VAR_1, VAR_28);

 VAR_25->terminate = 0;

 FUNC_3(VAR_25, VAR_6, VAR_27);

 VAR_29 = FUNC_9(&VAR_25->cmd_complete,
            VAR_25->adapter.timeout);
 if (VAR_29 == 0) {
  FUNC_4(VAR_25->dev, "controller timed out\n");
  FUNC_5(VAR_25);
  VAR_25->buf_len = 0;
  return -VAR_17;
 }
 if (VAR_25->buf_len) {




  if (VAR_29 >= 0) {
   FUNC_4(VAR_25->dev, "abnormal termination buf_len=%i\n",
    VAR_25->buf_len);
   VAR_29 = -VAR_16;
  }
  VAR_25->terminate = 1;
  FUNC_10();
  VAR_25->buf_len = 0;
 }
 if (VAR_29 < 0)
  return VAR_29;


 if (FUNC_7(!VAR_25->cmd_err))
  return VAR_23->len;


 if (VAR_25->cmd_err & VAR_12) {
  FUNC_5(VAR_25);
  return -VAR_15;
 }

 if (VAR_25->cmd_err & VAR_13) {
  if (VAR_23->flags & VAR_18)
   return VAR_23->len;
  if (VAR_24) {
   VAR_28 = FUNC_2(VAR_25, VAR_6);
   FUNC_1(VAR_28, VAR_7, 1);
   FUNC_3(VAR_25, VAR_6, VAR_28);
  }
  return -VAR_16;
 }
 return -VAR_15;
}
