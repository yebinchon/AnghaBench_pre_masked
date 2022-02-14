
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct synaptics_i2c {TYPE_4__* client; struct input_dev* input; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_6__ {int version; int bustype; } ;
struct input_dev {int keybit; int evbit; int relbit; int close; int open; TYPE_3__ dev; TYPE_2__ id; int phys; int name; } ;
struct TYPE_8__ {int dev; TYPE_1__* adapter; int name; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,struct synaptics_i2c*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_3(struct synaptics_i2c *VAR_9)
{
 struct input_dev *VAR_10 = VAR_9->input;

 VAR_10->name = VAR_9->client->name;
 VAR_10->phys = VAR_9->client->adapter->name;
 VAR_10->id.bustype = VAR_1;
 VAR_10->id.version = FUNC_2(VAR_9->client,
         VAR_4);
 VAR_10->dev.parent = &VAR_9->client->dev;
 VAR_10->open = VAR_8;
 VAR_10->close = VAR_7;
 FUNC_1(VAR_10, VAR_9);


 FUNC_0(VAR_3, VAR_10->evbit);
 FUNC_0(VAR_5, VAR_10->relbit);
 FUNC_0(VAR_6, VAR_10->relbit);


 FUNC_0(VAR_2, VAR_10->evbit);
 FUNC_0(VAR_0, VAR_10->keybit);
}
