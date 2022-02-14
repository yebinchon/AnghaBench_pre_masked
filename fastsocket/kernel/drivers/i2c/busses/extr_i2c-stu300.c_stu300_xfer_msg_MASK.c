
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct stu300_dev {int clk; scalar_t__ virtbase; TYPE_1__* pdev; int msg_len; int msg_index; } ;
struct i2c_msg {int len; int flags; int* buf; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 struct stu300_dev* FUNC_4 (struct i2c_adapter*) ;
 int FUNC_5 (struct stu300_dev*,int ) ;
 int FUNC_6 (struct stu300_dev*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct stu300_dev*,struct i2c_msg*,int) ;
 int FUNC_9 (struct stu300_dev*,int,int ) ;
 int FUNC_10 (struct stu300_dev*) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct i2c_adapter *VAR_18,
        struct i2c_msg *VAR_19, int VAR_20)
{
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 int VAR_24;
 int VAR_25 = 0;
 struct stu300_dev *VAR_26 = FUNC_4(VAR_18);

 FUNC_1(VAR_26->clk);


 if (0) {
  FUNC_2(&VAR_26->pdev->dev, "I2C message to: 0x%04x, len: %d, "
   "flags: 0x%04x, stop: %d\n",
   VAR_19->addr, VAR_19->len, VAR_19->flags, VAR_20);
 }


 if (VAR_19->len == 0) {
  VAR_24 = -VAR_0;
  goto exit_disable;
 }







 do {
  if (VAR_25)
   FUNC_2(&VAR_26->pdev->dev, "wait while busy\n");

  VAR_24 = FUNC_10(VAR_26);
  if (VAR_24 != 0)
   goto exit_disable;

  if (VAR_25)
   FUNC_2(&VAR_26->pdev->dev, "re-int hw\n");




  VAR_24 = FUNC_6(VAR_26);
  if (VAR_24)
   goto exit_disable;


  VAR_21 = VAR_4;

  if (!(VAR_19->flags & VAR_9))
   VAR_21 |= VAR_5;
  if ((VAR_19->flags & VAR_10) && (VAR_19->len > 1))

   VAR_21 |= VAR_3;

  if (!(VAR_19->flags & VAR_9)) {
   if (VAR_25)
    FUNC_2(&VAR_26->pdev->dev, "send start event\n");
   VAR_24 = FUNC_9(VAR_26, VAR_21,
            VAR_15);
  }

  if (VAR_25)
   FUNC_2(&VAR_26->pdev->dev, "send address\n");

  if (VAR_24 == 0)

   VAR_24 = FUNC_8(VAR_26, VAR_19, VAR_25 != 0);

  if (VAR_24 != 0) {
   VAR_25++;
   FUNC_2(&VAR_26->pdev->dev, "failed sending address, "
    "retrying. Attempt: %d msg_index: %d/%d\n",
          VAR_25, VAR_26->msg_index, VAR_26->msg_len);
  }

 } while (VAR_24 != 0 && VAR_25 < VAR_14);

 if (VAR_25 < VAR_14 && VAR_25 > 0) {
  FUNC_2(&VAR_26->pdev->dev, "managed to get address "
   "through after %d attempts\n", VAR_25);
 } else if (VAR_25 == VAR_14) {
  FUNC_2(&VAR_26->pdev->dev, "I give up, tried %d times "
   "to resend address.\n",
   VAR_14);
  goto exit_disable;
 }


 if (VAR_19->flags & VAR_10) {

  for (VAR_23 = 0; VAR_23 < VAR_19->len; VAR_23++) {
   if (VAR_23 == VAR_19->len-1) {




    VAR_22 = VAR_4;

    if (VAR_20)
     VAR_22 |= VAR_6;

    FUNC_11(VAR_22,
        VAR_26->virtbase + VAR_2);
   }

   VAR_24 = FUNC_5(VAR_26, VAR_16);
   if (VAR_24 != 0)
    goto exit_disable;

   VAR_19->buf[VAR_23] = (u8) FUNC_7(VAR_26->virtbase + VAR_7);
  }
 } else {

  for (VAR_23 = 0; VAR_23 < VAR_19->len; VAR_23++) {

   FUNC_11(VAR_19->buf[VAR_23],
       VAR_26->virtbase + VAR_7);

   VAR_24 = FUNC_5(VAR_26, VAR_17);

   if (VAR_24 != 0) {
    FUNC_3(&VAR_26->pdev->dev, "error awaiting "
           "event 8 (%d)\n", VAR_24);
    goto exit_disable;
   }
  }

  if (!(VAR_19->flags & VAR_8)) {
   if (FUNC_7(VAR_26->virtbase + VAR_12) &
       VAR_13) {
    FUNC_3(&VAR_26->pdev->dev, "I2C payload "
           "send returned NAK!\n");
    VAR_24 = -VAR_1;
    goto exit_disable;
   }
  }
  if (VAR_20) {

   VAR_22 = VAR_4;
   VAR_22 |= VAR_6;
   FUNC_11(VAR_22, VAR_26->virtbase + VAR_2);
  }
 }


 VAR_24 = FUNC_10(VAR_26);
 if (VAR_24 != 0) {
  FUNC_3(&VAR_26->pdev->dev, "timout waiting for transfer "
         "to commence.\n");
  goto exit_disable;
 }


 VAR_22 = FUNC_7(VAR_26->virtbase + VAR_12);
 VAR_22 = FUNC_7(VAR_26->virtbase + VAR_11);
 VAR_24 = 0;

 exit_disable:

 FUNC_11(0x00, VAR_26->virtbase + VAR_2);
 FUNC_0(VAR_26->clk);
 return VAR_24;
}
