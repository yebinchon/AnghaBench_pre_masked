
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serio_driver {int dummy; } ;
struct serio {char* phys; int dev; } ;
struct magellan {struct input_dev* dev; int phys; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int product; int version; int vendor; int bustype; } ;
struct input_dev {char* name; int* evbit; int keybit; TYPE_2__ dev; TYPE_1__ id; int phys; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_5 (struct magellan*) ;
 struct magellan* FUNC_6 (int,int ) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_7 (struct serio*) ;
 int FUNC_8 (struct serio*,struct serio_driver*) ;
 int FUNC_9 (struct serio*,struct magellan*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_12(struct serio *VAR_8, struct serio_driver *VAR_9)
{
 struct magellan *VAR_10;
 struct input_dev *VAR_11;
 int VAR_12 = -VAR_1;
 int VAR_13;

 VAR_10 = FUNC_6(sizeof(struct magellan), VAR_4);
 VAR_11 = FUNC_1();
 if (!VAR_10 || !VAR_11)
  goto fail1;

 VAR_10->dev = VAR_11;
 FUNC_11(VAR_10->phys, sizeof(VAR_10->phys), "%s/input0", VAR_8->phys);

 VAR_11->name = "LogiCad3D Magellan / SpaceMouse";
 VAR_11->phys = VAR_10->phys;
 VAR_11->id.bustype = VAR_0;
 VAR_11->id.vendor = VAR_5;
 VAR_11->id.product = 0x0001;
 VAR_11->id.version = 0x0100;
 VAR_11->dev.parent = &VAR_8->dev;

 VAR_11->evbit[0] = FUNC_0(VAR_3) | FUNC_0(VAR_2);

 for (VAR_13 = 0; VAR_13 < 9; VAR_13++)
  FUNC_10(VAR_7[VAR_13], VAR_11->keybit);

 for (VAR_13 = 0; VAR_13 < 6; VAR_13++)
  FUNC_4(VAR_11, VAR_6[VAR_13], -360, 360, 0, 0);

 FUNC_9(VAR_8, VAR_10);

 VAR_12 = FUNC_8(VAR_8, VAR_9);
 if (VAR_12)
  goto fail2;

 VAR_12 = FUNC_3(VAR_10->dev);
 if (VAR_12)
  goto fail3;

 return 0;

 fail3: FUNC_7(VAR_8);
 fail2: FUNC_9(VAR_8, ((void*)0));
 fail1: FUNC_2(VAR_11);
 FUNC_5(VAR_10);
 return VAR_12;
}
