
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sensor_s {int i2c_addr; int i2c_dum; } ;
struct gspca_dev {int usb_err; int * usb_buf; int dev; } ;
struct sd {size_t sensor; struct gspca_dev gspca_dev; } ;
struct i2c_write_cmd {int val; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 struct sensor_s* VAR_5 ;
 int FUNC_2 (int ,int ,int,int,int,int,int *,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sd *VAR_6,
   const struct i2c_write_cmd *VAR_7,
   int VAR_8)
{
 struct gspca_dev *VAR_9 = &VAR_6->gspca_dev;
 const struct sensor_s *VAR_10;
 u16 VAR_11, VAR_12;
 u8 *VAR_13;
 int VAR_14;

 if (VAR_9->usb_err < 0)
  return;

 VAR_10 = &VAR_5[VAR_6->sensor];

 VAR_11 = (VAR_10->i2c_addr << 8) | VAR_1;
 VAR_12 = (VAR_7->val & 0xff00) | VAR_7->reg;

 VAR_13 = VAR_9->usb_buf;
 *VAR_13++ = VAR_10->i2c_dum;
 *VAR_13++ = VAR_7->val;

 while (--VAR_8 > 0) {
  VAR_7++;
  *VAR_13++ = VAR_7->reg;
  *VAR_13++ = VAR_7->val >> 8;
  *VAR_13++ = VAR_10->i2c_dum;
  *VAR_13++ = VAR_7->val;
 }

 FUNC_0(VAR_0, "i2c_w v: %04x i: %04x %02x...%02x",
   VAR_11, VAR_12, VAR_9->usb_buf[0], VAR_13[-1]);
 VAR_14 = FUNC_2(VAR_9->dev,
   FUNC_3(VAR_9->dev, 0),
   0x0c,
   VAR_2 | VAR_4 | VAR_3,
   VAR_11, VAR_12,
   VAR_9->usb_buf, VAR_13 - VAR_9->usb_buf,
   500);
 if (VAR_14 < 0) {
  FUNC_1("i2c_write failed %d", VAR_14);
  VAR_9->usb_err = VAR_14;
 }
}
