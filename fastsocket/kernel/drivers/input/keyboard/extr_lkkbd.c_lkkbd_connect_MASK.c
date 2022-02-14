
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serio_driver {int dummy; } ;
struct serio {char* phys; int dev; } ;
struct lkkbd {struct serio* serio; struct input_dev* dev; int * keycode; int phys; int name; int ctrlclick_volume; int keyclick_volume; int bell_volume; int tq; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int version; scalar_t__ product; int vendor; int bustype; } ;
struct input_dev {int keycodesize; int keycodemax; int keybit; int * keycode; int sndbit; int ledbit; int evbit; int event; TYPE_2__ dev; TYPE_1__ id; int phys; int name; } ;
typedef int lk_keycode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,struct lkkbd*) ;
 int VAR_19 ;
 int FUNC_7 (struct lkkbd*) ;
 struct lkkbd* FUNC_8 (int,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct serio*) ;
 int FUNC_11 (struct serio*,struct serio_driver*) ;
 int FUNC_12 (struct serio*,struct lkkbd*) ;
 int FUNC_13 (struct serio*,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int,char*,char*) ;
 int FUNC_16 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_17 (struct serio *VAR_23, struct serio_driver *VAR_24)
{
 struct lkkbd *VAR_25;
 struct input_dev *VAR_26;
 int VAR_27;
 int VAR_28;

 VAR_25 = FUNC_8 (sizeof (struct lkkbd), VAR_6);
 VAR_26 = FUNC_3 ();
 if (!VAR_25 || !VAR_26) {
  VAR_28 = -VAR_1;
  goto fail1;
 }

 VAR_25->serio = VAR_23;
 VAR_25->dev = VAR_26;
 FUNC_0 (&VAR_25->tq, VAR_22);
 VAR_25->bell_volume = VAR_17;
 VAR_25->keyclick_volume = VAR_19;
 VAR_25->ctrlclick_volume = VAR_18;
 FUNC_9 (VAR_25->keycode, VAR_21, sizeof (lk_keycode_t) * VAR_13);

 FUNC_16 (VAR_25->name, "DEC LK keyboard", sizeof(VAR_25->name));
 FUNC_15 (VAR_25->phys, sizeof(VAR_25->phys), "%s/input0", VAR_23->phys);

 VAR_26->name = VAR_25->name;
 VAR_26->phys = VAR_25->phys;
 VAR_26->id.bustype = VAR_0;
 VAR_26->id.vendor = VAR_14;
 VAR_26->id.product = 0;
 VAR_26->id.version = 0x0100;
 VAR_26->dev.parent = &VAR_23->dev;
 VAR_26->event = VAR_20;

 FUNC_6 (VAR_26, VAR_25);

 FUNC_14 (VAR_2, VAR_26->evbit);
 FUNC_14 (VAR_3, VAR_26->evbit);
 FUNC_14 (VAR_5, VAR_26->evbit);
 FUNC_14 (VAR_4, VAR_26->evbit);
 FUNC_14 (VAR_8, VAR_26->ledbit);
 FUNC_14 (VAR_11, VAR_26->ledbit);
 FUNC_14 (VAR_9, VAR_26->ledbit);
 FUNC_14 (VAR_10, VAR_26->ledbit);
 FUNC_14 (VAR_15, VAR_26->sndbit);
 FUNC_14 (VAR_16, VAR_26->sndbit);

 VAR_26->keycode = VAR_25->keycode;
 VAR_26->keycodesize = sizeof (lk_keycode_t);
 VAR_26->keycodemax = VAR_13;

 for (VAR_27 = 0; VAR_27 < VAR_13; VAR_27++)
  FUNC_2 (VAR_25->keycode[VAR_27], VAR_26->keybit);
 FUNC_1(VAR_7, VAR_26->keybit);

 FUNC_12 (VAR_23, VAR_25);

 VAR_28 = FUNC_11 (VAR_23, VAR_24);
 if (VAR_28)
  goto fail2;

 VAR_28 = FUNC_5 (VAR_25->dev);
 if (VAR_28)
  goto fail3;

 FUNC_13 (VAR_25->serio, VAR_12);

 return 0;

 fail3: FUNC_10 (VAR_23);
 fail2: FUNC_12 (VAR_23, ((void*)0));
 fail1: FUNC_4 (VAR_26);
 FUNC_7 (VAR_25);
 return VAR_28;
}
