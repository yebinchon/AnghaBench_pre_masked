
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ucbus_write_cmd {int bw_addr; int bw_data; } ;
struct gspca_dev {int usb_err; int * usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int,int,int,int *,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_7,
   const struct ucbus_write_cmd *VAR_8,
   int VAR_9,
   int VAR_10)
{
 u8 *VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14, VAR_15;

 if (VAR_7->usb_err < 0)
  return;
 for (;;) {
  VAR_14 = VAR_9;
  if (VAR_14 > VAR_10)
   VAR_14 = VAR_10;
  VAR_9 -= VAR_14;

  VAR_12 = (VAR_8->bw_addr << 8) | VAR_2;
  VAR_13 = (VAR_8->bw_data << 8) | (VAR_8->bw_addr >> 8);

  VAR_11 = VAR_7->usb_buf;
  while (--VAR_14 > 0) {
   VAR_8++;
   *VAR_11++ = VAR_8->bw_addr;
   *VAR_11++ = VAR_8->bw_addr >> 8;
   *VAR_11++ = VAR_8->bw_data;
  }
  if (VAR_11 != VAR_7->usb_buf)
   FUNC_0(VAR_0, "ucbus v: %04x i: %04x %02x...%02x",
     VAR_12, VAR_13,
     VAR_7->usb_buf[0], VAR_11[-1]);
  else
   FUNC_0(VAR_0, "ucbus v: %04x i: %04x",
     VAR_12, VAR_13);
  VAR_15 = FUNC_3(VAR_7->dev,
    FUNC_4(VAR_7->dev, 0),
    0x0c,
      VAR_4 | VAR_6 | VAR_5,
    VAR_12, VAR_13,
    VAR_7->usb_buf, VAR_11 - VAR_7->usb_buf,
    500);
  if (VAR_15 < 0) {
   FUNC_1("ucbus_write failed %d", VAR_15);
   VAR_7->usb_err = VAR_15;
   return;
  }
  FUNC_2(30);
  if (VAR_9 <= 0)
   break;
  VAR_8++;
 }
}
