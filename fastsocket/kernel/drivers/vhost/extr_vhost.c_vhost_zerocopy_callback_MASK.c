
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {TYPE_1__* heads; int poll; } ;
struct vhost_ubuf_ref {int kref; struct vhost_virtqueue* vq; } ;
struct ubuf_info {size_t desc; struct vhost_ubuf_ref* arg; } ;
struct TYPE_2__ {int len; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

void FUNC_2(void *VAR_2)
{
 struct ubuf_info *VAR_3 = VAR_2;
 struct vhost_ubuf_ref *VAR_4 = VAR_3->arg;
 struct vhost_virtqueue *VAR_5 = VAR_4->vq;

 FUNC_1(&VAR_5->poll);

 VAR_5->heads[VAR_3->desc].len = VAR_0;
 FUNC_0(&VAR_4->kref, VAR_1);
}
