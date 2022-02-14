
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_adapter {int feedcount; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_adapter*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_3, int VAR_4,
        u16 VAR_5, int VAR_6)
{
 u8 VAR_7 = VAR_4 & 0x1f;
 int VAR_8;
 FUNC_2("set pid filter, index %d, pid %x, onoff %d\n", VAR_4,
   VAR_5, VAR_6);
 if (VAR_6) {


  if (VAR_3->feedcount == 1) {
   FUNC_2("first pid set, enable pid table\n");
   VAR_8 = FUNC_0(VAR_3, VAR_6);
   if (VAR_8)
    return VAR_8;
  }
  VAR_8 =
      FUNC_1(VAR_3->dev,
            VAR_1,
            (u8) (VAR_5 & 0xff));
  if (VAR_8)
   return VAR_8;
  VAR_8 =
      FUNC_1(VAR_3->dev,
            VAR_0,
            (u8) (VAR_5 >> 8));
  if (VAR_8)
   return VAR_8;
  VAR_7 |= 0x20 | 0x40;
 } else {
  if (VAR_3->feedcount == 0) {
   FUNC_2("last pid unset, disable pid table\n");
   VAR_8 = FUNC_0(VAR_3, VAR_6);
   if (VAR_8)
    return VAR_8;
  }
 }
 VAR_8 = FUNC_1(VAR_3->dev, VAR_2, VAR_7);
 if (VAR_8)
  return VAR_8;
 FUNC_2("set pid ok\n");
 return 0;
}
