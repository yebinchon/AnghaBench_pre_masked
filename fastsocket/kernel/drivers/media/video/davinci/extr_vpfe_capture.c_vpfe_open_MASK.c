
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_fh {int prio; scalar_t__ io_allowed; struct vpfe_device* vpfe_dev; } ;
struct vpfe_device {int lock; int prio; int usrs; int initialized; int v4l2_dev; TYPE_1__* cfg; } ;
struct file {struct vpfe_fh* private_data; } ;
struct TYPE_2__ {int num_subdevs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vpfe_fh* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ,int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *) ;
 struct vpfe_device* FUNC_6 (struct file*) ;
 scalar_t__ FUNC_7 (struct vpfe_device*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_5)
{
 struct vpfe_device *VAR_6 = FUNC_6(VAR_5);
 struct vpfe_fh *VAR_7;

 FUNC_3(1, VAR_4, &VAR_6->v4l2_dev, "vpfe_open\n");

 if (!VAR_6->cfg->num_subdevs) {
  FUNC_4(&VAR_6->v4l2_dev, "No decoder registered\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_0(sizeof(struct vpfe_fh), VAR_2);
 if (((void*)0) == VAR_7) {
  FUNC_4(&VAR_6->v4l2_dev,
   "unable to allocate memory for file handle object\n");
  return -VAR_1;
 }

 VAR_5->private_data = VAR_7;
 VAR_7->vpfe_dev = VAR_6;
 FUNC_1(&VAR_6->lock);

 if (!VAR_6->initialized) {
  if (FUNC_7(VAR_6)) {
   FUNC_2(&VAR_6->lock);
   return -VAR_0;
  }
 }

 VAR_6->usrs++;

 VAR_7->io_allowed = 0;

 VAR_7->prio = VAR_3;
 FUNC_5(&VAR_6->prio, &VAR_7->prio);
 FUNC_2(&VAR_6->lock);
 return 0;
}
