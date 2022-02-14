
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; int* id; int * tool; TYPE_2__* features; } ;
struct wacom_combo {TYPE_1__* wacom; } ;
struct input_dev {int dummy; } ;
typedef int __le16 ;
struct TYPE_4__ {unsigned char distance_max; } ;
struct TYPE_3__ {struct input_dev* dev; } ;


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
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct wacom_wac *VAR_12, struct wacom_combo *VAR_13)
{
 struct input_dev *VAR_14 = VAR_13->wacom->dev;
 unsigned char *VAR_15 = VAR_12->data;
 int VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;

 if (VAR_15[0] != 0x02)
     return 0;

 VAR_16 = (VAR_15[1] & 0x20) == 0x20;
 if (VAR_16) {
  if (!VAR_12->tool[0]) {
   if (VAR_15[1] & 0x08) {
    VAR_12->tool[0] = VAR_8;
    VAR_12->id[0] = VAR_10;
   } else {
    VAR_12->tool[0] = VAR_7;
    VAR_12->id[0] = VAR_11;
   }
  }
  VAR_17 = FUNC_2((__le16 *)&VAR_15[2]);
  VAR_18 = FUNC_2((__le16 *)&VAR_15[4]);
  VAR_19 = FUNC_2((__le16 *)&VAR_15[6]);






  if (VAR_15[8] <= VAR_12->features->distance_max)
   VAR_20 = VAR_12->features->distance_max - VAR_15[8];

  VAR_21 = VAR_15[1] & 0x01;
  VAR_22 = VAR_15[1] & 0x02;
  VAR_23 = VAR_15[1] & 0x04;
 }

 FUNC_1(VAR_14, VAR_9, VAR_21);
 FUNC_1(VAR_14, VAR_5, VAR_22);
 FUNC_1(VAR_14, VAR_6, VAR_23);

 FUNC_0(VAR_14, VAR_3, VAR_17);
 FUNC_0(VAR_14, VAR_4, VAR_18);
 FUNC_0(VAR_14, VAR_2, VAR_19);
 FUNC_0(VAR_14, VAR_0, VAR_20);

 if (!VAR_16)
  VAR_12->id[0] = 0;

 FUNC_1(VAR_14, VAR_12->tool[0], VAR_16);
 FUNC_0(VAR_14, VAR_1, VAR_12->id[0]);

 if (!VAR_16)
  VAR_12->tool[0] = 0;

 return 1;

}
