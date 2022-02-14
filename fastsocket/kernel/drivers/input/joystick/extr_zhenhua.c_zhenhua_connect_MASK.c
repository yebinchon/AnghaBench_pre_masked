
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zhenhua {struct input_dev* dev; int phys; } ;
struct serio_driver {int dummy; } ;
struct serio {char* phys; int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int product; int version; int vendor; int bustype; } ;
struct input_dev {char* name; int * evbit; TYPE_2__ dev; TYPE_1__ id; int phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_5 (struct zhenhua*) ;
 struct zhenhua* FUNC_6 (int,int ) ;
 int FUNC_7 (struct serio*) ;
 int FUNC_8 (struct serio*,struct serio_driver*) ;
 int FUNC_9 (struct serio*,struct zhenhua*) ;
 int FUNC_10 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_11(struct serio *VAR_9, struct serio_driver *VAR_10)
{
 struct zhenhua *VAR_11;
 struct input_dev *VAR_12;
 int VAR_13 = -VAR_5;

 VAR_11 = FUNC_6(sizeof(struct zhenhua), VAR_7);
 VAR_12 = FUNC_1();
 if (!VAR_11 || !VAR_12)
  goto fail1;

 VAR_11->dev = VAR_12;
 FUNC_10(VAR_11->phys, sizeof(VAR_11->phys), "%s/input0", VAR_9->phys);

 VAR_12->name = "Zhen Hua 5-byte device";
 VAR_12->phys = VAR_11->phys;
 VAR_12->id.bustype = VAR_4;
 VAR_12->id.vendor = VAR_8;
 VAR_12->id.product = 0x0001;
 VAR_12->id.version = 0x0100;
 VAR_12->dev.parent = &VAR_9->dev;

 VAR_12->evbit[0] = FUNC_0(VAR_6);
 FUNC_4(VAR_12, VAR_1, 50, 200, 0, 0);
 FUNC_4(VAR_12, VAR_2, 50, 200, 0, 0);
 FUNC_4(VAR_12, VAR_3, 50, 200, 0, 0);
 FUNC_4(VAR_12, VAR_0, 50, 200, 0, 0);

 FUNC_9(VAR_9, VAR_11);

 VAR_13 = FUNC_8(VAR_9, VAR_10);
 if (VAR_13)
  goto fail2;

 VAR_13 = FUNC_3(VAR_11->dev);
 if (VAR_13)
  goto fail3;

 return 0;

 fail3: FUNC_7(VAR_9);
 fail2: FUNC_9(VAR_9, ((void*)0));
 fail1: FUNC_2(VAR_12);
 FUNC_5(VAR_11);
 return VAR_13;
}
