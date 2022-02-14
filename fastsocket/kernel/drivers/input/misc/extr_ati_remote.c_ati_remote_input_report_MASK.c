
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int actual_length; TYPE_1__* dev; struct ati_remote* context; } ;
struct input_dev {int dummy; } ;
struct ati_remote {unsigned char* inbuf; unsigned long old_jiffies; unsigned char* old_data; int repeat_count; unsigned long first_jiffies; TYPE_2__* interface; struct input_dev* idev; } ;
struct TYPE_6__ {int kind; int value; int code; int type; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int dev; } ;



 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ati_remote*) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int,unsigned char,unsigned char) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,int,unsigned char,unsigned char,int,...) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,int,unsigned char,unsigned char) ;
 int FUNC_6 (struct input_dev*,int ,int ,int) ;
 int FUNC_7 (struct input_dev*,int ,int) ;
 int FUNC_8 (struct input_dev*) ;
 void* VAR_6 ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct urb *VAR_9)
{
 struct ati_remote *VAR_10 = VAR_9->context;
 unsigned char *VAR_11= VAR_10->inbuf;
 struct input_dev *VAR_12 = VAR_10->idev;
 int VAR_13, VAR_14;
 int VAR_15;


 if ( (VAR_9->actual_length != 4) || (VAR_11[0] != 0x14) ||
  ((VAR_11[3] & 0x0f) != 0x00) ) {
  FUNC_1(&VAR_9->dev->dev, VAR_11, VAR_9->actual_length);
  return;
 }



 VAR_15 = (VAR_11[3] >> 4) & 0x0f;
        if (VAR_5 & (1 << (VAR_15 + 1))) {
  FUNC_3(&VAR_10->interface->dev,
   "Masked input from channel 0x%02x: data %02x,%02x, mask= 0x%02lx\n",
   VAR_15, VAR_11[1], VAR_11[2], VAR_5);
  return;
 }


 VAR_13 = FUNC_2(VAR_15, VAR_11[1], VAR_11[2]);
 if (VAR_13 < 0) {
  FUNC_5(&VAR_10->interface->dev,
    "Unknown input from channel 0x%02x: data %02x,%02x\n",
    VAR_15, VAR_11[1], VAR_11[2]);
  return;
 }
 FUNC_3(&VAR_10->interface->dev,
  "channel 0x%02x; data %02x,%02x; index %d; keycode %d\n",
  VAR_15, VAR_11[1], VAR_11[2], VAR_13, VAR_4[VAR_13].code);

 if (VAR_4[VAR_13].kind == VAR_1) {
  FUNC_6(VAR_12, VAR_4[VAR_13].type,
   VAR_4[VAR_13].code,
   VAR_4[VAR_13].value);
  FUNC_8(VAR_12);

  VAR_10->old_jiffies = VAR_6;
  return;
 }

 if (VAR_4[VAR_13].kind == VAR_0) {
  unsigned long VAR_16 = VAR_6;


  if (VAR_10->old_data[0] == VAR_11[1] &&
      VAR_10->old_data[1] == VAR_11[2] &&
      FUNC_10(VAR_16, VAR_10->old_jiffies +
         FUNC_9(VAR_8))) {
   VAR_10->repeat_count++;
  } else {
   VAR_10->repeat_count = 0;
   VAR_10->first_jiffies = VAR_16;
  }

  VAR_10->old_data[0] = VAR_11[1];
  VAR_10->old_data[1] = VAR_11[2];
  VAR_10->old_jiffies = VAR_16;





  if (VAR_10->repeat_count > 0 &&
      (VAR_10->repeat_count < 5 ||
       FUNC_10(VAR_16, VAR_10->first_jiffies +
          FUNC_9(VAR_7))))
   return;


  FUNC_6(VAR_12, VAR_4[VAR_13].type,
   VAR_4[VAR_13].code, 1);
  FUNC_8(VAR_12);
  FUNC_6(VAR_12, VAR_4[VAR_13].type,
   VAR_4[VAR_13].code, 0);
  FUNC_8(VAR_12);

 } else {






  VAR_14 = FUNC_0(VAR_10);

  switch (VAR_4[VAR_13].kind) {
  case 132:
   FUNC_6(VAR_12, VAR_4[VAR_13].type,
    VAR_4[VAR_13].code,
    VAR_4[VAR_13].value * VAR_14);
   break;
  case 130:
   FUNC_7(VAR_12, VAR_2, -VAR_14);
   FUNC_7(VAR_12, VAR_3, -VAR_14);
   break;
  case 128:
   FUNC_7(VAR_12, VAR_2, VAR_14);
   FUNC_7(VAR_12, VAR_3, -VAR_14);
   break;
  case 131:
   FUNC_7(VAR_12, VAR_2, -VAR_14);
   FUNC_7(VAR_12, VAR_3, VAR_14);
   break;
  case 129:
   FUNC_7(VAR_12, VAR_2, VAR_14);
   FUNC_7(VAR_12, VAR_3, VAR_14);
   break;
  default:
   FUNC_4(&VAR_10->interface->dev, "ati_remote kind=%d\n",
    VAR_4[VAR_13].kind);
  }
  FUNC_8(VAR_12);

  VAR_10->old_jiffies = VAR_6;
  VAR_10->old_data[0] = VAR_11[1];
  VAR_10->old_data[1] = VAR_11[2];
 }
}
