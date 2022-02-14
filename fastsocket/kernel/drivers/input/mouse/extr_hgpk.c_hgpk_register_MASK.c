
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* serio; } ;
struct psmouse {int pktsize; int resetafter; scalar_t__ model; TYPE_2__ ps2dev; scalar_t__ resync_time; int reconnect; int disconnect; int poll; int protocol_handler; struct input_dev* dev; } ;
struct input_dev {int keybit; int relbit; int evbit; } ;
struct TYPE_8__ {int dattr; } ;
struct TYPE_7__ {int dattr; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_8 ;
 int FUNC_4 (struct psmouse*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__ VAR_12 ;
 TYPE_3__ VAR_13 ;

__attribute__((used)) static int FUNC_5(struct psmouse *VAR_14)
{
 struct input_dev *VAR_15 = VAR_14->dev;
 int VAR_16;


 FUNC_0(VAR_1, VAR_15->keybit);


 FUNC_1(VAR_3, VAR_15->evbit);
 FUNC_1(VAR_4, VAR_15->evbit);

 FUNC_1(VAR_6, VAR_15->relbit);
 FUNC_1(VAR_7, VAR_15->relbit);

 FUNC_1(VAR_0, VAR_15->keybit);
 FUNC_1(VAR_2, VAR_15->keybit);


 VAR_14->protocol_handler = VAR_10;
 VAR_14->poll = VAR_9;
 VAR_14->disconnect = VAR_8;
 VAR_14->reconnect = VAR_11;
 VAR_14->pktsize = 3;


 VAR_14->resync_time = 0;

 VAR_14->resetafter = 1024;

 VAR_16 = FUNC_2(&VAR_14->ps2dev.serio->dev,
     &VAR_12.dattr);
 if (VAR_16) {
  FUNC_4(VAR_14, "Failed creating 'powered' sysfs node\n");
  return VAR_16;
 }


 if (VAR_14->model >= VAR_5) {
  VAR_16 = FUNC_2(&VAR_14->ps2dev.serio->dev,
      &VAR_13.dattr);
  if (VAR_16) {
   FUNC_4(VAR_14,
    "Failed creating 'recalibrate' sysfs node\n");
   FUNC_3(&VAR_14->ps2dev.serio->dev,
     &VAR_12.dattr);
   return VAR_16;
  }
 }

 return 0;
}
