
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_xpad {scalar_t__ dpad_mapping; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
typedef unsigned char __s16 ;
typedef int __le16 ;


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
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_0 (struct input_dev*,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_xpad *VAR_25,
       u16 VAR_26, unsigned char *VAR_27)
{
 struct input_dev *VAR_28 = VAR_25->dev;


 if (VAR_25->dpad_mapping == VAR_23) {
  FUNC_0(VAR_28, VAR_0,
     !!(VAR_27[2] & 0x08) - !!(VAR_27[2] & 0x04));
  FUNC_0(VAR_28, VAR_1,
     !!(VAR_27[2] & 0x02) - !!(VAR_27[2] & 0x01));
 } else if (VAR_25->dpad_mapping == VAR_24) {

  FUNC_1(VAR_28, VAR_13, VAR_27[2] & 0x04);
  FUNC_1(VAR_28, VAR_15, VAR_27[2] & 0x08);
  FUNC_1(VAR_28, VAR_8, VAR_27[2] & 0x01);
  FUNC_1(VAR_28, VAR_9, VAR_27[2] & 0x02);
 }


 FUNC_1(VAR_28, VAR_16, VAR_27[2] & 0x10);
 FUNC_1(VAR_28, VAR_12, VAR_27[2] & 0x20);


 FUNC_1(VAR_28, VAR_17, VAR_27[2] & 0x40);
 FUNC_1(VAR_28, VAR_18, VAR_27[2] & 0x80);


 FUNC_1(VAR_28, VAR_10, VAR_27[3] & 0x10);
 FUNC_1(VAR_28, VAR_11, VAR_27[3] & 0x20);
 FUNC_1(VAR_28, VAR_21, VAR_27[3] & 0x40);
 FUNC_1(VAR_28, VAR_22, VAR_27[3] & 0x80);
 FUNC_1(VAR_28, VAR_19, VAR_27[3] & 0x01);
 FUNC_1(VAR_28, VAR_20, VAR_27[3] & 0x02);
 FUNC_1(VAR_28, VAR_14, VAR_27[3] & 0x04);


 FUNC_0(VAR_28, VAR_5,
    (__s16) FUNC_3((__le16 *)(VAR_27 + 6)));
 FUNC_0(VAR_28, VAR_6,
    ~(__s16) FUNC_3((__le16 *)(VAR_27 + 8)));


 FUNC_0(VAR_28, VAR_2,
    (__s16) FUNC_3((__le16 *)(VAR_27 + 10)));
 FUNC_0(VAR_28, VAR_3,
    ~(__s16) FUNC_3((__le16 *)(VAR_27 + 12)));


 FUNC_0(VAR_28, VAR_7, VAR_27[4]);
 FUNC_0(VAR_28, VAR_4, VAR_27[5]);

 FUNC_2(VAR_28);
}
