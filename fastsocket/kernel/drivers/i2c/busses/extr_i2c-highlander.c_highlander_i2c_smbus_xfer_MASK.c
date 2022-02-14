
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
struct highlander_i2c_dev {int* buf; int buf_len; scalar_t__ base; int dev; int cmd_complete; } ;


 int VAR_0 ;


 char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int,int ,char,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct highlander_i2c_dev*,int ,int) ;
 int FUNC_3 (struct highlander_i2c_dev*) ;
 int FUNC_4 (struct highlander_i2c_dev*) ;
 int FUNC_5 (struct highlander_i2c_dev*) ;
 struct highlander_i2c_dev* FUNC_6 (struct i2c_adapter*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct i2c_adapter *VAR_6, u16 VAR_7,
      unsigned short VAR_8, char VAR_9,
      u8 VAR_10, int VAR_11,
      union i2c_smbus_data *VAR_12)
{
 struct highlander_i2c_dev *VAR_13 = FUNC_6(VAR_6);
 int VAR_14 = VAR_9 & VAR_1;
 u16 VAR_15;

 FUNC_7(&VAR_13->cmd_complete);

 FUNC_0(VAR_13->dev, "addr %04x, command %02x, read_write %d, size %d\n",
  VAR_7, VAR_10, VAR_9, VAR_11);




 switch (VAR_11) {
 case 129:
  VAR_13->buf = &VAR_12->byte;
  VAR_13->buf_len = 1;
  break;
 case 128:
  VAR_13->buf = &VAR_12->block[1];
  VAR_13->buf_len = VAR_12->block[0];
  break;
 default:
  FUNC_1(VAR_13->dev, "unsupported command %d\n", VAR_11);
  return -VAR_0;
 }




 VAR_15 = FUNC_8(VAR_13->base + VAR_2);
 VAR_15 &= ~(VAR_3 | VAR_4);

 switch (VAR_13->buf_len) {
 case 1:

  break;
 case 8:
  VAR_15 |= VAR_3;
  break;
 case 16:
  VAR_15 |= VAR_4;
  break;
 case 32:
  VAR_15 |= (VAR_3 | VAR_4);
  break;
 default:
  FUNC_1(VAR_13->dev, "unsupported xfer size %d\n", VAR_13->buf_len);
  return -VAR_0;
 }

 FUNC_9(VAR_15, VAR_13->base + VAR_2);


 FUNC_3(VAR_13);


 FUNC_9((VAR_7 << 1) | VAR_14, VAR_13->base + VAR_5);

 FUNC_2(VAR_13, VAR_10, VAR_13->buf_len);

 if (VAR_14)
  return FUNC_4(VAR_13);
 else
  return FUNC_5(VAR_13);
}
