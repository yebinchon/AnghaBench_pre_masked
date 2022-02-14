
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_virtqueue {int signalled_used_valid; TYPE_1__* used; int last_used_idx; int private_data; } ;
struct TYPE_2__ {int idx; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct vhost_virtqueue*) ;

int FUNC_2(struct vhost_virtqueue *VAR_0)
{
 int VAR_1;
 if (!VAR_0->private_data)
  return 0;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;
 VAR_0->signalled_used_valid = 0;
 return FUNC_0(VAR_0->last_used_idx, &VAR_0->used->idx);
}
