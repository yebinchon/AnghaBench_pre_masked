
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vhost_dev {int nvqs; int * mm; int * worker; int work_list; int * memory; int * log_file; int * log_ctx; TYPE_1__* vqs; } ;
struct TYPE_3__ {int * call; int * call_ctx; int * kick; int * error; int * error_ctx; scalar_t__ ubufs; int poll; scalar_t__ handle_kick; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vhost_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct vhost_dev*,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

void FUNC_13(struct vhost_dev *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->nvqs; ++VAR_1) {
  if (VAR_0->vqs[VAR_1].kick && VAR_0->vqs[VAR_1].handle_kick) {
   FUNC_9(&VAR_0->vqs[VAR_1].poll);
   FUNC_8(&VAR_0->vqs[VAR_1].poll);
  }

  if (VAR_0->vqs[VAR_1].ubufs)
   FUNC_10(VAR_0->vqs[VAR_1].ubufs);


  FUNC_12(&VAR_0->vqs[VAR_1]);

  if (VAR_0->vqs[VAR_1].error_ctx)
   FUNC_1(VAR_0->vqs[VAR_1].error_ctx);
  if (VAR_0->vqs[VAR_1].error)
   FUNC_2(VAR_0->vqs[VAR_1].error);
  if (VAR_0->vqs[VAR_1].kick)
   FUNC_2(VAR_0->vqs[VAR_1].kick);
  if (VAR_0->vqs[VAR_1].call_ctx)
   FUNC_1(VAR_0->vqs[VAR_1].call_ctx);
  if (VAR_0->vqs[VAR_1].call)
   FUNC_2(VAR_0->vqs[VAR_1].call);
  FUNC_11(VAR_0, VAR_0->vqs + VAR_1);
 }
 FUNC_7(VAR_0);
 if (VAR_0->log_ctx)
  FUNC_1(VAR_0->log_ctx);
 VAR_0->log_ctx = ((void*)0);
 if (VAR_0->log_file)
  FUNC_2(VAR_0->log_file);
 VAR_0->log_file = ((void*)0);

 FUNC_3(VAR_0->memory);
 VAR_0->memory = ((void*)0);
 FUNC_0(!FUNC_5(&VAR_0->work_list));
 if (VAR_0->worker) {
  FUNC_4(VAR_0->worker);
  VAR_0->worker = ((void*)0);
 }
 if (VAR_0->mm)
  FUNC_6(VAR_0->mm);
 VAR_0->mm = ((void*)0);
}
