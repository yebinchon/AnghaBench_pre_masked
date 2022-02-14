
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {scalar_t__ handle_kick; int poll; int mutex; struct vhost_dev* dev; int * ubuf_info; int * heads; int * indirect; int * log; } ;
struct vhost_dev {int nvqs; struct vhost_virtqueue* vqs; int * worker; int work_list; int work_lock; int * mm; int * memory; int * log_file; int * log_ctx; int mutex; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int ,struct vhost_dev*) ;
 int FUNC_4 (struct vhost_dev*,struct vhost_virtqueue*) ;

long FUNC_5(struct vhost_dev *VAR_1,
      struct vhost_virtqueue *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_1->vqs = VAR_2;
 VAR_1->nvqs = VAR_3;
 FUNC_1(&VAR_1->mutex);
 VAR_1->log_ctx = ((void*)0);
 VAR_1->log_file = ((void*)0);
 VAR_1->memory = ((void*)0);
 VAR_1->mm = ((void*)0);
 FUNC_2(&VAR_1->work_lock);
 FUNC_0(&VAR_1->work_list);
 VAR_1->worker = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_1->nvqs; ++VAR_4) {
  VAR_1->vqs[VAR_4].log = ((void*)0);
  VAR_1->vqs[VAR_4].indirect = ((void*)0);
  VAR_1->vqs[VAR_4].heads = ((void*)0);
  VAR_1->vqs[VAR_4].ubuf_info = ((void*)0);
  VAR_1->vqs[VAR_4].dev = VAR_1;
  FUNC_1(&VAR_1->vqs[VAR_4].mutex);
  FUNC_4(VAR_1, VAR_1->vqs + VAR_4);
  if (VAR_1->vqs[VAR_4].handle_kick)
   FUNC_3(&VAR_1->vqs[VAR_4].poll,
     VAR_1->vqs[VAR_4].handle_kick, VAR_0, VAR_1);
 }

 return 0;
}
