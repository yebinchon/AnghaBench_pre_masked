
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_data {unsigned char serial; unsigned char id; int tool; } ;
struct input_dev {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;


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
 int FUNC_0 (struct input_dev*,int ,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct wacom_data *VAR_12,
   struct input_dev *VAR_13, unsigned char *VAR_14)
{
 __u16 VAR_15, VAR_16, VAR_17;
 __u8 VAR_18;

 switch (VAR_14[1]) {
 case 0x80:
  FUNC_2(VAR_13, VAR_9, 0);
  FUNC_1(VAR_13, VAR_2, 0);
  FUNC_2(VAR_13, VAR_12->tool, 0);
  FUNC_1(VAR_13, VAR_1, 0);
  FUNC_0(VAR_13, VAR_10, VAR_11, VAR_12->serial);
  VAR_12->tool = 0;
  FUNC_3(VAR_13);
  break;
 case 0xC2:
  VAR_12->id = ((VAR_14[2] << 4) | (VAR_14[3] >> 4) |
   ((VAR_14[7] & 0x0f) << 20) |
   ((VAR_14[8] & 0xf0) << 12));
  VAR_12->serial = ((VAR_14[3] & 0x0f) << 28) +
    (VAR_14[4] << 20) + (VAR_14[5] << 12) +
    (VAR_14[6] << 4) + (VAR_14[7] >> 4);

  switch (VAR_12->id) {
  case 0x100802:
   VAR_12->tool = VAR_7;
   break;
  case 0x10080A:
   VAR_12->tool = VAR_8;
   break;
  }
  break;
 default:
  VAR_15 = VAR_14[2] << 9 | VAR_14[3] << 1 | ((VAR_14[9] & 0x02) >> 1);
  VAR_16 = VAR_14[4] << 9 | VAR_14[5] << 1 | (VAR_14[9] & 0x01);
  VAR_17 = (VAR_14[6] << 3) | ((VAR_14[7] & 0xC0) >> 5)
   | (VAR_14[1] & 0x01);
  VAR_18 = (VAR_14[9] >> 2) & 0x3f;

  FUNC_2(VAR_13, VAR_9, VAR_17 > 1);

  FUNC_2(VAR_13, VAR_5, VAR_14[1] & 0x02);
  FUNC_2(VAR_13, VAR_6, VAR_14[1] & 0x04);
  FUNC_2(VAR_13, VAR_12->tool, 1);
  FUNC_1(VAR_13, VAR_3, VAR_15);
  FUNC_1(VAR_13, VAR_4, VAR_16);
  FUNC_1(VAR_13, VAR_0, VAR_18);
  FUNC_1(VAR_13, VAR_2, VAR_17);
  FUNC_1(VAR_13, VAR_1, VAR_12->id);
  FUNC_0(VAR_13, VAR_10, VAR_11, VAR_12->serial);
  FUNC_3(VAR_13);
  break;
 }

 return;
}
