
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int vendor; int product; int bustype; } ;
struct TYPE_14__ {int * parent; } ;
struct input_dev {char* name; int* evbit; struct ff_device* ff; int ffbit; int keybit; TYPE_4__ id; TYPE_7__ dev; int close; int open; } ;
struct TYPE_12__ {char* name; int end; int * sibling; int * child; int * parent; int flags; scalar_t__ start; } ;
struct TYPE_8__ {int buf; } ;
struct iforce {int bus; int* edata; struct input_dev* dev; TYPE_6__* type; int ecmd; TYPE_5__ device_memory; TYPE_3__* serio; TYPE_2__* usbdev; int xmit_data; TYPE_1__ xmit; int mem_mutex; int xmit_lock; int wait; } ;
struct ff_device {int playback; int (* set_autocenter ) (struct input_dev*,int ) ;int set_gain; int erase; int upload; } ;
struct TYPE_13__ {int idvendor; int idproduct; char* name; scalar_t__* btn; short* abs; scalar_t__* ff; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int dev; } ;
 int FUNC_0 (int ) ;
 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 int VAR_9 ;
 int FUNC_1 (TYPE_7__*,char*,...) ;
 int FUNC_2 (char*) ;
 TYPE_6__* VAR_10 ;
 int FUNC_3 (char*,int ,int*) ;
 int VAR_11 ;
 int FUNC_4 (struct iforce*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct input_dev*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int *) ;
 struct input_dev* FUNC_7 () ;
 int FUNC_8 (struct input_dev*,int) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,short,int,int,int,int) ;
 int FUNC_12 (struct input_dev*,struct iforce*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (short,int ) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct iforce *VAR_17)
{
 struct input_dev *VAR_18;
 struct ff_device *VAR_19;
 unsigned char VAR_20[] = "CEOV";
 int VAR_21, VAR_22;
 int VAR_23 = 0;

 VAR_18 = FUNC_7();
 if (!VAR_18)
  return -VAR_4;

 FUNC_6(&VAR_17->wait);
 FUNC_15(&VAR_17->xmit_lock);
 FUNC_13(&VAR_17->mem_mutex);
 VAR_17->xmit.buf = VAR_17->xmit_data;
 VAR_17->dev = VAR_18;





 switch (VAR_17->bus) {
 }

 FUNC_12(VAR_18, VAR_17);

 VAR_18->name = "Unknown I-Force device";
 VAR_18->open = VAR_12;
 VAR_18->close = VAR_14;





 VAR_17->device_memory.name = "I-Force device effect memory";
 VAR_17->device_memory.start = 0;
 VAR_17->device_memory.end = 200;
 VAR_17->device_memory.flags = VAR_9;
 VAR_17->device_memory.parent = ((void*)0);
 VAR_17->device_memory.child = ((void*)0);
 VAR_17->device_memory.sibling = ((void*)0);





 for (VAR_21 = 0; VAR_21 < 20; VAR_21++)
  if (!FUNC_4(VAR_17, "O"))
   break;

 if (VAR_21 == 20) {
  FUNC_2("Timeout waiting for response from device.");
  VAR_22 = -VAR_3;
  goto fail;
 }





 if (!FUNC_4(VAR_17, "M"))
  VAR_18->id.vendor = (VAR_17->edata[2] << 8) | VAR_17->edata[1];
 else
  FUNC_1(&VAR_17->dev->dev, "Device does not respond to id packet M\n");

 if (!FUNC_4(VAR_17, "P"))
  VAR_18->id.product = (VAR_17->edata[2] << 8) | VAR_17->edata[1];
 else
  FUNC_1(&VAR_17->dev->dev, "Device does not respond to id packet P\n");

 if (!FUNC_4(VAR_17, "B"))
  VAR_17->device_memory.end = (VAR_17->edata[2] << 8) | VAR_17->edata[1];
 else
  FUNC_1(&VAR_17->dev->dev, "Device does not respond to id packet B\n");

 if (!FUNC_4(VAR_17, "N"))
  VAR_23 = VAR_17->edata[1];
 else
  FUNC_1(&VAR_17->dev->dev, "Device does not respond to id packet N\n");


 if (VAR_23 > VAR_8) {
  FUNC_1(&VAR_17->dev->dev, "Limiting number of effects to %d (device reports %d)\n",
         VAR_8, VAR_23);
  VAR_23 = VAR_8;
 }





 for (VAR_21 = 0; VAR_20[VAR_21]; VAR_21++)
  if (!FUNC_4(VAR_17, VAR_20 + VAR_21))
   FUNC_3("info", VAR_17->ecmd, VAR_17->edata);




 FUNC_5(VAR_18, 0);





 for (VAR_21 = 0; VAR_10[VAR_21].idvendor; VAR_21++)
  if (VAR_10[VAR_21].idvendor == VAR_18->id.vendor &&
      VAR_10[VAR_21].idproduct == VAR_18->id.product)
   break;

 VAR_17->type = VAR_10 + VAR_21;
 VAR_18->name = VAR_17->type->name;





 VAR_18->evbit[0] = FUNC_0(VAR_7) | FUNC_0(VAR_5) |
  FUNC_0(VAR_6);

 for (VAR_21 = 0; VAR_17->type->btn[VAR_21] >= 0; VAR_21++)
  FUNC_14(VAR_17->type->btn[VAR_21], VAR_18->keybit);
 FUNC_14(VAR_0, VAR_18->keybit);

 for (VAR_21 = 0; VAR_17->type->abs[VAR_21] >= 0; VAR_21++) {

  signed short VAR_24 = VAR_17->type->abs[VAR_21];

  switch (VAR_24) {

   case 131:
   case 130:
   case 132:

    FUNC_11(VAR_18, VAR_24, -1920, 1920, 16, 128);
    FUNC_14(VAR_24, VAR_18->ffbit);
    break;

   case 133:
   case 139:
   case 140:

    FUNC_11(VAR_18, VAR_24, 0, 255, 0, 0);
    break;

   case 134:

    FUNC_11(VAR_18, VAR_24, -128, 127, 0, 0);
    break;

   case 138:
   case 137:
          case 136:
          case 135:

    FUNC_11(VAR_18, VAR_24, -1, 1, 0, 0);
    break;
  }
 }

 if (VAR_23) {

  for (VAR_21 = 0; VAR_17->type->ff[VAR_21] >= 0; VAR_21++)
   FUNC_14(VAR_17->type->ff[VAR_21], VAR_18->ffbit);

  VAR_22 = FUNC_8(VAR_18, VAR_23);
  if (VAR_22)
   goto fail;

  VAR_19 = VAR_18->ff;
  VAR_19->upload = VAR_16;
  VAR_19->erase = VAR_11;
  VAR_19->set_gain = VAR_15;
  VAR_19->set_autocenter = FUNC_5;
  VAR_19->playback = VAR_13;
 }




 VAR_22 = FUNC_10(VAR_17->dev);
 if (VAR_22)
  goto fail;

 return 0;

 fail: FUNC_9(VAR_18);
 return VAR_22;
}
