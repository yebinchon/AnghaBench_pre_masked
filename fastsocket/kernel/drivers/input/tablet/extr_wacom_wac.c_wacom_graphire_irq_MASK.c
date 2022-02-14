
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; scalar_t__* tool; unsigned char* id; TYPE_1__* features; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 unsigned char VAR_26 ;


 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (void*,int ,int ,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (void*,int ,unsigned char) ;
 int FUNC_5 (void*,scalar_t__,unsigned char) ;
 int FUNC_6 (void*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct wacom_wac *VAR_27, void *VAR_28)
{
 unsigned char *VAR_29 = VAR_27->data;
 int VAR_30, VAR_31, VAR_32;

 if (VAR_29[0] != 2) {
  FUNC_0("wacom_graphire_irq: received unknown report #%d", VAR_29[0]);
  return 0;
 }

 if (VAR_29[1] & 0x80) {


  switch ((VAR_29[1] >> 5) & 3) {

   case 0:
    VAR_27->tool[0] = VAR_17;
    VAR_27->id[0] = VAR_26;
    break;

   case 1:
    VAR_27->tool[0] = VAR_18;
    VAR_27->id[0] = VAR_21;
    break;

   case 2:
    FUNC_5(VAR_28, VAR_11, VAR_29[1] & 0x04);
    if (VAR_27->features->type == 129 ||
      VAR_27->features->type == 128) {
     VAR_32 = VAR_29[7] & 0x04 ? (VAR_29[7] & 0x03)-4 : (VAR_29[7] & 0x03);
     FUNC_6(VAR_28, VAR_25, -VAR_32);
    } else
     FUNC_6(VAR_28, VAR_25, -(signed char) VAR_29[6]);


   case 3:
    VAR_27->tool[0] = VAR_16;
    VAR_27->id[0] = VAR_20;
    FUNC_5(VAR_28, VAR_10, VAR_29[1] & 0x01);
    FUNC_5(VAR_28, VAR_12, VAR_29[1] & 0x02);
    if (VAR_27->features->type == 129 ||
      VAR_27->features->type == 128)
     FUNC_4(VAR_28, VAR_0, VAR_29[6] & 0x3f);
    else
     FUNC_4(VAR_28, VAR_0, VAR_29[7] & 0x3f);
    break;
  }
  VAR_30 = FUNC_3(&VAR_29[2]);
  VAR_31 = FUNC_3(&VAR_29[4]);
  FUNC_4(VAR_28, VAR_4, VAR_30);
  FUNC_4(VAR_28, VAR_5, VAR_31);
  if (VAR_27->tool[0] != VAR_16) {
   FUNC_4(VAR_28, VAR_2, VAR_29[6] | ((VAR_29[7] & 0x01) << 8));
   FUNC_5(VAR_28, VAR_19, VAR_29[1] & 0x01);
   FUNC_5(VAR_28, VAR_13, VAR_29[1] & 0x02);
   FUNC_5(VAR_28, VAR_14, VAR_29[1] & 0x04);
  }
  FUNC_4(VAR_28, VAR_1, VAR_27->id[0]);
  FUNC_5(VAR_28, VAR_27->tool[0], 1);
 } else if (VAR_27->id[0]) {
  FUNC_4(VAR_28, VAR_4, 0);
  FUNC_4(VAR_28, VAR_5, 0);
  if (VAR_27->tool[0] == VAR_16) {
   FUNC_5(VAR_28, VAR_10, 0);
   FUNC_5(VAR_28, VAR_12, 0);
   FUNC_4(VAR_28, VAR_0, 0);
  } else {
   FUNC_4(VAR_28, VAR_2, 0);
   FUNC_5(VAR_28, VAR_19, 0);
   FUNC_5(VAR_28, VAR_13, 0);
   FUNC_5(VAR_28, VAR_14, 0);
  }
  VAR_27->id[0] = 0;
  FUNC_4(VAR_28, VAR_1, 0);
  FUNC_5(VAR_28, VAR_27->tool[0], 0);
 }


 switch (VAR_27->features->type) {
     case 129:
  if (VAR_29[7] & 0xf8) {
   FUNC_2(VAR_28);
   VAR_27->id[1] = VAR_24;
   FUNC_5(VAR_28, VAR_6, (VAR_29[7] & 0x40));
   FUNC_5(VAR_28, VAR_8, (VAR_29[7] & 0x80));
   VAR_32 = ((VAR_29[7] & 0x18) >> 3) - ((VAR_29[7] & 0x20) >> 3);
   FUNC_6(VAR_28, VAR_25, VAR_32);
   FUNC_5(VAR_28, VAR_15, 0xf0);
   FUNC_4(VAR_28, VAR_1, VAR_27->id[1]);
   FUNC_1(VAR_28, VAR_22, VAR_23, 0xf0);
  } else if (VAR_27->id[1]) {
   FUNC_2(VAR_28);
   VAR_27->id[1] = 0;
   FUNC_5(VAR_28, VAR_6, (VAR_29[7] & 0x40));
   FUNC_5(VAR_28, VAR_8, (VAR_29[7] & 0x80));
   FUNC_5(VAR_28, VAR_15, 0);
   FUNC_4(VAR_28, VAR_1, 0);
   FUNC_1(VAR_28, VAR_22, VAR_23, 0xf0);
  }
  break;
     case 128:
  if ((VAR_29[7] & 0xf8) || (VAR_29[8] & 0xff)) {
   FUNC_2(VAR_28);
   VAR_27->id[1] = VAR_24;
   FUNC_5(VAR_28, VAR_6, (VAR_29[7] & 0x08));
   FUNC_5(VAR_28, VAR_7, (VAR_29[7] & 0x20));
   FUNC_5(VAR_28, VAR_8, (VAR_29[7] & 0x10));
   FUNC_5(VAR_28, VAR_9, (VAR_29[7] & 0x40));
   FUNC_4(VAR_28, VAR_3, (VAR_29[8] & 0x7f));
   FUNC_5(VAR_28, VAR_15, 0xf0);
   FUNC_4(VAR_28, VAR_1, VAR_27->id[1]);
   FUNC_1(VAR_28, VAR_22, VAR_23, 0xf0);
  } else if (VAR_27->id[1]) {
   FUNC_2(VAR_28);
   VAR_27->id[1] = 0;
   FUNC_5(VAR_28, VAR_6, (VAR_29[7] & 0x08));
   FUNC_5(VAR_28, VAR_7, (VAR_29[7] & 0x20));
   FUNC_5(VAR_28, VAR_8, (VAR_29[7] & 0x10));
   FUNC_5(VAR_28, VAR_9, (VAR_29[7] & 0x40));
   FUNC_4(VAR_28, VAR_3, (VAR_29[8] & 0x7f));
   FUNC_5(VAR_28, VAR_15, 0);
   FUNC_4(VAR_28, VAR_1, 0);
   FUNC_1(VAR_28, VAR_22, VAR_23, 0xf0);
  }
  break;
 }
 return 1;
}
