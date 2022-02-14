
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {struct linear_conf* private; TYPE_2__* queue; int raid_disks; } ;
struct linear_conf {int dummy; } ;
struct TYPE_3__ {struct mddev* congested_data; int congested_fn; } ;
struct TYPE_4__ {TYPE_1__ backing_dev_info; int unplug_fn; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct linear_conf*) ;
 struct linear_conf* FUNC_2 (struct mddev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct mddev*,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct mddev*) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (struct mddev*,int ) ;

__attribute__((used)) static int FUNC_7 (struct mddev *VAR_4)
{
 struct linear_conf *VAR_5;
 int VAR_6;

 if (FUNC_4(VAR_4))
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_4, VAR_4->raid_disks);

 if (!VAR_5)
  return 1;
 VAR_4->private = VAR_5;
 FUNC_6(VAR_4, FUNC_3(VAR_4, 0, 0));

 FUNC_0(VAR_4->queue, VAR_2);
 VAR_4->queue->unplug_fn = VAR_3;
 VAR_4->queue->backing_dev_info.congested_fn = VAR_1;
 VAR_4->queue->backing_dev_info.congested_data = VAR_4;

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_5);
  VAR_4->private = ((void*)0);
 }
 return VAR_6;
}
