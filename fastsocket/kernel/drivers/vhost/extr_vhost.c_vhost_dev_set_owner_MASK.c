
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vhost_dev {int * mm; struct task_struct* worker; } ;
struct task_struct {int dummy; } ;
struct TYPE_3__ {int pid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 TYPE_1__* VAR_1 ;
 int * FUNC_2 (TYPE_1__*) ;
 struct task_struct* FUNC_3 (int ,struct vhost_dev*,char*,int ) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vhost_dev*) ;
 int FUNC_7 (struct vhost_dev*) ;
 int VAR_2 ;
 int FUNC_8 (struct task_struct*) ;

__attribute__((used)) static long FUNC_9(struct vhost_dev *VAR_3)
{
 struct task_struct *VAR_4;
 int VAR_5;

 if (VAR_3->mm) {
  VAR_5 = -VAR_0;
  goto err_mm;
 }

 VAR_3->mm = FUNC_2(VAR_1);
 VAR_4 = FUNC_3(VAR_2, VAR_3, "vhost-%d", VAR_1->pid);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto err_worker;
 }

 VAR_3->worker = VAR_4;
 FUNC_8(VAR_4);

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5)
  goto err_cgroup;

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5)
  goto err_cgroup;

 return 0;
err_cgroup:
 FUNC_4(VAR_4);
 VAR_3->worker = ((void*)0);
err_worker:
 if (VAR_3->mm)
  FUNC_5(VAR_3->mm);
 VAR_3->mm = ((void*)0);
err_mm:
 return VAR_5;
}
