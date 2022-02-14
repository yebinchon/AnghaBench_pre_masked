
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct input_dev {int absbit; int dev; } ;
struct iforce {TYPE_2__* core_effects; TYPE_1__* type; int wait; int edata; scalar_t__ ecmd; scalar_t__ expect_packet; struct input_dev* dev; } ;
typedef int __s8 ;
typedef int __s16 ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int * btn; } ;


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
 int FUNC_0 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,int) ;
 TYPE_3__* VAR_16 ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int,int ) ;
 int FUNC_5 (struct input_dev*,int ,unsigned char) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct iforce*,unsigned char) ;
 int FUNC_8 (int ,unsigned char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct iforce *VAR_17, u16 VAR_18, unsigned char *VAR_19)
{
 struct input_dev *VAR_20 = VAR_17->dev;
 int VAR_21;
 static int VAR_22 = 0;

 if (VAR_22)
  FUNC_2(&VAR_17->dev->dev,
    "re-entrant call to iforce_process %d\n", VAR_22);
 VAR_22++;
 FUNC_12(&VAR_17->wait);

 if (!VAR_17->type) {
  VAR_22--;
  return;
 }

 switch (FUNC_0(VAR_18)) {

  case 0x01:
  case 0x03:
   if (FUNC_0(VAR_18) == 1) {
    FUNC_3(VAR_20, VAR_9, (__s16) (((__s16)VAR_19[1] << 8) | VAR_19[0]));
    FUNC_3(VAR_20, VAR_10, (__s16) (((__s16)VAR_19[3] << 8) | VAR_19[2]));
    FUNC_3(VAR_20, VAR_7, 255 - VAR_19[4]);
    if (FUNC_1(VAR_18) >= 8 && FUNC_11(VAR_6 ,VAR_20->absbit))
     FUNC_3(VAR_20, VAR_6, (__s8)VAR_19[7]);
   } else {
    FUNC_3(VAR_20, VAR_8, (__s16) (((__s16)VAR_19[1] << 8) | VAR_19[0]));
    FUNC_3(VAR_20, VAR_1, 255 - VAR_19[2]);
    FUNC_3(VAR_20, VAR_0, 255 - VAR_19[3]);
   }

   FUNC_3(VAR_20, VAR_2, VAR_16[VAR_19[6] >> 4].x);
   FUNC_3(VAR_20, VAR_3, VAR_16[VAR_19[6] >> 4].y);

   for (VAR_21 = 0; VAR_17->type->btn[VAR_21] >= 0; VAR_21++)
    FUNC_5(VAR_20, VAR_17->type->btn[VAR_21], VAR_19[(VAR_21 >> 3) + 5] & (1 << (VAR_21 & 7)));


   if (VAR_21 <= 8) {
    int VAR_23 = VAR_19[6];
    if (FUNC_11(VAR_4, VAR_20->absbit)) {
     if (VAR_23 & 8) FUNC_3(VAR_20, VAR_4, -1);
     else if (VAR_23 & 2) FUNC_3(VAR_20, VAR_4, 1);
     else FUNC_3(VAR_20, VAR_4, 0);
    }
    if (FUNC_11(VAR_5, VAR_20->absbit)) {
     if (VAR_23 & 1) FUNC_3(VAR_20, VAR_5, -1);
     else if (VAR_23 & 4) FUNC_3(VAR_20, VAR_5, 1);
     else FUNC_3(VAR_20, VAR_5, 0);
    }
   }

   FUNC_6(VAR_20);

   break;

  case 0x02:
   FUNC_5(VAR_20, VAR_11, VAR_19[0] & 0x02);
   FUNC_6(VAR_20);


   VAR_21 = VAR_19[1] & 0x7f;
   if (VAR_19[1] & 0x80) {
    if (!FUNC_10(VAR_12, VAR_17->core_effects[VAR_21].flags)) {

     FUNC_4(VAR_20, VAR_21, VAR_13);
    }
   } else if (FUNC_9(VAR_12, VAR_17->core_effects[VAR_21].flags)) {

    FUNC_4(VAR_20, VAR_21, VAR_14);
   }
   if (FUNC_1(VAR_18) > 3) {
    int VAR_24;
    for (VAR_24 = 3; VAR_24 < FUNC_1(VAR_18); VAR_24 += 2)
     FUNC_7(VAR_17, VAR_19[VAR_24] | (VAR_19[VAR_24+1]<<8));
   }
   break;
 }
 VAR_22--;
}
