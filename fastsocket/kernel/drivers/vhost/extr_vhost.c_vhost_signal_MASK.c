
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {scalar_t__ call_ctx; } ;
struct vhost_dev {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct vhost_dev*,struct vhost_virtqueue*) ;

void FUNC_2(struct vhost_dev *VAR_0, struct vhost_virtqueue *VAR_1)
{

 if (VAR_1->call_ctx && FUNC_1(VAR_0, VAR_1))
  FUNC_0(VAR_1->call_ctx, 1);
}
