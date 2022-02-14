
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lis3l02dq_state {TYPE_3__* trig; TYPE_2__* us; } ;
struct iio_dev {int id; struct lis3l02dq_state* dev_data; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_8__ {scalar_t__ name; int * control_attrs; int * try_reenable; int * set_trigger_state; struct lis3l02dq_state* private_data; int owner; TYPE_1__ dev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,int ,char*,int) ;

int FUNC_6(struct iio_dev *VAR_7)
{
 int VAR_8;
 struct lis3l02dq_state *VAR_9 = VAR_7->dev_data;

 VAR_9->trig = FUNC_0();
 VAR_9->trig->name = FUNC_4(VAR_2, VAR_1);
 if (!VAR_9->trig->name) {
  VAR_8 = -VAR_0;
  goto error_free_trig;
 }
 FUNC_5((char *)VAR_9->trig->name,
   VAR_2,
   "lis3l02dq-dev%d", VAR_7->id);
 VAR_9->trig->dev.parent = &VAR_9->us->dev;
 VAR_9->trig->owner = VAR_3;
 VAR_9->trig->private_data = VAR_9;
 VAR_9->trig->set_trigger_state = &VAR_4;
 VAR_9->trig->try_reenable = &VAR_5;
 VAR_9->trig->control_attrs = &VAR_6;
 VAR_8 = FUNC_2(VAR_9->trig);
 if (VAR_8)
  goto error_free_trig_name;

 return 0;

error_free_trig_name:
 FUNC_3(VAR_9->trig->name);
error_free_trig:
 FUNC_1(VAR_9->trig);

 return VAR_8;
}
