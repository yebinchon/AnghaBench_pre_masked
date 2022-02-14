
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int used_flags; TYPE_1__* used; } ;
struct vhost_dev {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vhost_dev*,int ) ;
 int FUNC_1 (struct vhost_virtqueue*) ;
 int FUNC_2 (struct vhost_virtqueue*,char*,int *,int) ;

void FUNC_3(struct vhost_dev *VAR_2, struct vhost_virtqueue *VAR_3)
{
 int VAR_4;
 if (VAR_3->used_flags & VAR_1)
  return;
 VAR_3->used_flags |= VAR_1;
 if (!FUNC_0(VAR_2, VAR_0)) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   FUNC_2(VAR_3, "Failed to enable notification at %p: %d\n",
          &VAR_3->used->flags, VAR_4);
 }
}
