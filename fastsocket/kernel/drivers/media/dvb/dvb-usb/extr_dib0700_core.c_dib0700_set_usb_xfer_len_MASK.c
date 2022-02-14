
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {struct dib0700_state* priv; } ;
struct dib0700_state {int fw_version; } ;
typedef int b ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_2, u16 VAR_3)
{
 struct dib0700_state *VAR_4 = VAR_2->priv;
 u8 VAR_5[3];
 int VAR_6;

 if (VAR_4->fw_version >= 0x10201) {
  VAR_5[0] = VAR_1;
  VAR_5[1] = (VAR_3 >> 8) & 0xff;
  VAR_5[2] = VAR_3 & 0xff;

  FUNC_0("set the USB xfer len to %i Ts packet\n", VAR_3);

  VAR_6 = FUNC_1(VAR_2, VAR_5, sizeof(VAR_5));
 } else {
  FUNC_0("this firmware does not allow to change the USB xfer len\n");
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
