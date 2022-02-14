
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serio_driver {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {int type; } ;
struct serio {TYPE_2__ dev; int write; TYPE_1__ id; } ;
struct input_dev {int dummy; } ;
struct atkbd {int translated; int write; int softraw; int set; int id; struct input_dev* dev; scalar_t__ softrepeat; int scroll; int event_mutex; int event_work; int ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;


 int FUNC_1 (struct atkbd*) ;
 int VAR_3 ;
 int FUNC_2 (struct atkbd*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct atkbd*) ;
 int FUNC_4 (struct atkbd*) ;
 int VAR_6 ;
 int FUNC_5 (struct atkbd*,int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct atkbd*) ;
 int FUNC_7 (struct atkbd*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct input_dev* FUNC_8 () ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct atkbd*) ;
 struct atkbd* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,struct serio*) ;
 int FUNC_15 (struct serio*) ;
 int FUNC_16 (struct serio*,struct serio_driver*) ;
 int FUNC_17 (struct serio*,struct atkbd*) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;

__attribute__((used)) static int FUNC_20(struct serio *VAR_10, struct serio_driver *VAR_11)
{
 struct atkbd *VAR_12;
 struct input_dev *VAR_13;
 int VAR_14 = -VAR_1;

 VAR_12 = FUNC_12(sizeof(struct atkbd), VAR_2);
 VAR_13 = FUNC_8();
 if (!VAR_12 || !VAR_13)
  goto fail1;

 VAR_12->dev = VAR_13;
 FUNC_14(&VAR_12->ps2dev, VAR_10);
 FUNC_0(&VAR_12->event_work, VAR_4);
 FUNC_13(&VAR_12->event_mutex);

 switch (VAR_10->id.type) {

  case 128:
   VAR_12->translated = 1;
  case 129:
   if (VAR_10->write)
    VAR_12->write = 1;
   break;
 }

 VAR_12->softraw = VAR_8;
 VAR_12->softrepeat = VAR_9;
 VAR_12->scroll = VAR_6;

 if (VAR_12->softrepeat)
  VAR_12->softraw = 1;

 FUNC_17(VAR_10, VAR_12);

 VAR_14 = FUNC_16(VAR_10, VAR_11);
 if (VAR_14)
  goto fail2;

 if (VAR_12->write) {

  if (FUNC_3(VAR_12)) {
   VAR_14 = -VAR_0;
   goto fail3;
  }

  VAR_12->set = FUNC_5(VAR_12, VAR_7, VAR_5);
  FUNC_4(VAR_12);
  FUNC_1(VAR_12);

 } else {
  VAR_12->set = 2;
  VAR_12->id = 0xab00;
 }

 FUNC_7(VAR_12);
 FUNC_6(VAR_12);

 VAR_14 = FUNC_18(&VAR_10->dev.kobj, &VAR_3);
 if (VAR_14)
  goto fail3;

 FUNC_2(VAR_12);

 VAR_14 = FUNC_10(VAR_12->dev);
 if (VAR_14)
  goto fail4;

 return 0;

 fail4: FUNC_19(&VAR_10->dev.kobj, &VAR_3);
 fail3: FUNC_15(VAR_10);
 fail2: FUNC_17(VAR_10, ((void*)0));
 fail1: FUNC_9(VAR_13);
 FUNC_11(VAR_12);
 return VAR_14;
}
