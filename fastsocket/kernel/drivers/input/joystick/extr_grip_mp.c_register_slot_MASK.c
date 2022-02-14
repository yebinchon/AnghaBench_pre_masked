
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int product; int version; int vendor; int bustype; } ;
struct input_dev {int* evbit; int keybit; int close; int open; TYPE_2__ dev; TYPE_1__ id; int name; } ;
struct grip_port {size_t mode; int registered; scalar_t__ dirty; struct input_dev* dev; } ;
struct grip_mp {TYPE_3__* gameport; struct grip_port** port; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int** VAR_5 ;
 int** VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int,int,int,int ,int ) ;
 int FUNC_5 (struct input_dev*,struct grip_mp*) ;
 int FUNC_6 (struct grip_mp*,int) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(int VAR_10, struct grip_mp *VAR_11)
{
 struct grip_port *VAR_12 = VAR_11->port[VAR_10];
 struct input_dev *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;

 VAR_12->dev = VAR_13 = FUNC_1();
 if (!VAR_13)
  return -VAR_1;

 VAR_13->name = VAR_8[VAR_12->mode];
 VAR_13->id.bustype = VAR_0;
 VAR_13->id.vendor = VAR_4;
 VAR_13->id.product = 0x0100 + VAR_12->mode;
 VAR_13->id.version = 0x0100;
 VAR_13->dev.parent = &VAR_11->gameport->dev;

 FUNC_5(VAR_13, VAR_11);

 VAR_13->open = VAR_9;
 VAR_13->close = VAR_7;

 VAR_13->evbit[0] = FUNC_0(VAR_3) | FUNC_0(VAR_2);

 for (VAR_14 = 0; (VAR_15 = VAR_5[VAR_12->mode][VAR_14]) >= 0; VAR_14++)
  FUNC_4(VAR_13, VAR_15, -1, 1, 0, 0);

 for (VAR_14 = 0; (VAR_15 = VAR_6[VAR_12->mode][VAR_14]) >= 0; VAR_14++)
  if (VAR_15 > 0)
   FUNC_7(VAR_15, VAR_13->keybit);

 VAR_16 = FUNC_3(VAR_12->dev);
 if (VAR_16) {
  FUNC_2(VAR_12->dev);
  return VAR_16;
 }

 VAR_12->registered = 1;

 if (VAR_12->dirty)
  FUNC_6(VAR_11, VAR_10);

 return 0;
}
