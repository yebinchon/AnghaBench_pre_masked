
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_xpad {scalar_t__ dpad_mapping; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
typedef int __s16 ;
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
 scalar_t__ VAR_22 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_xpad *VAR_23, u16 VAR_24, unsigned char *VAR_25)
{
 struct input_dev *VAR_26 = VAR_23->dev;


 FUNC_0(VAR_26, VAR_5,
    (__s16) FUNC_3((__le16 *)(VAR_25 + 12)));
 FUNC_0(VAR_26, VAR_6,
    ~(__s16) FUNC_3((__le16 *)(VAR_25 + 14)));


 FUNC_0(VAR_26, VAR_2,
    (__s16) FUNC_3((__le16 *)(VAR_25 + 16)));
 FUNC_0(VAR_26, VAR_3,
    ~(__s16) FUNC_3((__le16 *)(VAR_25 + 18)));


 FUNC_0(VAR_26, VAR_7, VAR_25[10]);
 FUNC_0(VAR_26, VAR_4, VAR_25[11]);


 if (VAR_23->dpad_mapping == VAR_22) {
  FUNC_0(VAR_26, VAR_0,
     !!(VAR_25[2] & 0x08) - !!(VAR_25[2] & 0x04));
  FUNC_0(VAR_26, VAR_1,
     !!(VAR_25[2] & 0x02) - !!(VAR_25[2] & 0x01));
 } else {
  FUNC_1(VAR_26, VAR_14, VAR_25[2] & 0x04);
  FUNC_1(VAR_26, VAR_15, VAR_25[2] & 0x08);
  FUNC_1(VAR_26, VAR_8, VAR_25[2] & 0x01);
  FUNC_1(VAR_26, VAR_9, VAR_25[2] & 0x02);
 }


 FUNC_1(VAR_26, VAR_16, VAR_25[2] & 0x10);
 FUNC_1(VAR_26, VAR_12, VAR_25[2] & 0x20);
 FUNC_1(VAR_26, VAR_17, VAR_25[2] & 0x40);
 FUNC_1(VAR_26, VAR_18, VAR_25[2] & 0x80);


 FUNC_1(VAR_26, VAR_10, VAR_25[4]);
 FUNC_1(VAR_26, VAR_11, VAR_25[5]);
 FUNC_1(VAR_26, VAR_19, VAR_25[6]);
 FUNC_1(VAR_26, VAR_20, VAR_25[7]);


 FUNC_1(VAR_26, VAR_13, VAR_25[8]);
 FUNC_1(VAR_26, VAR_21, VAR_25[9]);

 FUNC_2(VAR_26);
}
