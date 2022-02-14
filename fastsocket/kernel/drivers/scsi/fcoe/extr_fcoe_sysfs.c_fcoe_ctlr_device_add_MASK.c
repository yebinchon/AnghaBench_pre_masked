
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fcoe_sysfs_function_template {int dummy; } ;
struct TYPE_3__ {int * type; int * bus; struct device* parent; } ;
struct fcoe_ctlr_device {int id; int * work_q; int * devloss_work_q; TYPE_1__ dev; int devloss_work_q_name; int work_q_name; int fcf_dev_loss_tmo; int lock; int fcfs; int mode; struct fcoe_sysfs_function_template* f; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct fcoe_ctlr_device*) ;
 struct fcoe_ctlr_device* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int,char*,int) ;

struct fcoe_ctlr_device *FUNC_10(struct device *VAR_6,
        struct fcoe_sysfs_function_template *VAR_7,
        int VAR_8)
{
 struct fcoe_ctlr_device *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_7(sizeof(struct fcoe_ctlr_device) + VAR_8,
         VAR_1);
 if (!VAR_9)
  goto out;

 VAR_9->id = FUNC_1(&VAR_2) - 1;
 VAR_9->f = VAR_7;
 VAR_9->mode = VAR_0;
 FUNC_0(&VAR_9->fcfs);
 FUNC_8(&VAR_9->lock);
 VAR_9->dev.parent = VAR_6;
 VAR_9->dev.bus = &VAR_3;
 VAR_9->dev.type = &VAR_4;

 VAR_9->fcf_dev_loss_tmo = VAR_5;

 FUNC_9(VAR_9->work_q_name, sizeof(VAR_9->work_q_name),
   "ctlr_wq_%d", VAR_9->id);
 VAR_9->work_q = FUNC_2(
  VAR_9->work_q_name);
 if (!VAR_9->work_q)
  goto out_del;

 FUNC_9(VAR_9->devloss_work_q_name,
   sizeof(VAR_9->devloss_work_q_name),
   "ctlr_dl_wq_%d", VAR_9->id);
 VAR_9->devloss_work_q = FUNC_2(
  VAR_9->devloss_work_q_name);
 if (!VAR_9->devloss_work_q)
  goto out_del_q;

 FUNC_4(&VAR_9->dev, "ctlr_%d", VAR_9->id);
 VAR_10 = FUNC_5(&VAR_9->dev);
 if (VAR_10)
  goto out_del_q2;

 return VAR_9;

out_del_q2:
 FUNC_3(VAR_9->devloss_work_q);
 VAR_9->devloss_work_q = ((void*)0);
out_del_q:
 FUNC_3(VAR_9->work_q);
 VAR_9->work_q = ((void*)0);
out_del:
 FUNC_6(VAR_9);
out:
 return ((void*)0);
}
