
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct twidjoy_button_spec {int bitmask; int * buttons; } ;
struct twidjoy {struct input_dev* dev; int phys; } ;
struct serio_driver {int dummy; } ;
struct serio {char* phys; int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int product; int version; int vendor; int bustype; } ;
struct input_dev {char* name; int* evbit; int keybit; TYPE_2__ dev; TYPE_1__ id; int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,int,int,int,int) ;
 int FUNC_5 (struct twidjoy*) ;
 struct twidjoy* FUNC_6 (int,int ) ;
 int FUNC_7 (struct serio*) ;
 int FUNC_8 (struct serio*,struct serio_driver*) ;
 int FUNC_9 (struct serio*,struct twidjoy*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int,char*,char*) ;
 struct twidjoy_button_spec* VAR_8 ;

__attribute__((used)) static int FUNC_12(struct serio *VAR_9, struct serio_driver *VAR_10)
{
 struct twidjoy_button_spec *VAR_11;
 struct twidjoy *VAR_12;
 struct input_dev *VAR_13;
 int VAR_14 = -VAR_3;
 int VAR_15;

 VAR_12 = FUNC_6(sizeof(struct twidjoy), VAR_6);
 VAR_13 = FUNC_1();
 if (!VAR_12 || !VAR_13)
  goto fail1;

 VAR_12->dev = VAR_13;
 FUNC_11(VAR_12->phys, sizeof(VAR_12->phys), "%s/input0", VAR_9->phys);

 VAR_13->name = "Handykey Twiddler";
 VAR_13->phys = VAR_12->phys;
 VAR_13->id.bustype = VAR_2;
 VAR_13->id.vendor = VAR_7;
 VAR_13->id.product = 0x0001;
 VAR_13->id.version = 0x0100;
 VAR_13->dev.parent = &VAR_9->dev;

 VAR_13->evbit[0] = FUNC_0(VAR_5) | FUNC_0(VAR_4);
 FUNC_4(VAR_13, VAR_0, -50, 50, 4, 4);
 FUNC_4(VAR_13, VAR_1, -50, 50, 4, 4);

 for (VAR_11 = VAR_8; VAR_11->bitmask; VAR_11++)
  for (VAR_15 = 0; VAR_15 < VAR_11->bitmask; VAR_15++)
   FUNC_10(VAR_11->buttons[VAR_15], VAR_13->keybit);

 FUNC_9(VAR_9, VAR_12);

 VAR_14 = FUNC_8(VAR_9, VAR_10);
 if (VAR_14)
  goto fail2;

 VAR_14 = FUNC_3(VAR_12->dev);
 if (VAR_14)
  goto fail3;

 return 0;

 fail3: FUNC_7(VAR_9);
 fail2: FUNC_9(VAR_9, ((void*)0));
 fail1: FUNC_2(VAR_13);
 FUNC_5(VAR_12);
 return VAR_14;
}
