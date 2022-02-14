
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_virtqueue {int log_base; int dev; int used; int avail; int desc; int num; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,struct vhost_virtqueue*,int ) ;

int FUNC_2(struct vhost_virtqueue *VAR_0)
{
 return FUNC_0(VAR_0->dev, VAR_0->num, VAR_0->desc, VAR_0->avail, VAR_0->used) &&
  FUNC_1(VAR_0->dev, VAR_0, VAR_0->log_base);
}
