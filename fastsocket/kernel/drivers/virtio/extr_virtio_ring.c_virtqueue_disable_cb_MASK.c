
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* avail; } ;
struct vring_virtqueue {TYPE_2__ vring; } ;
struct virtqueue {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 struct vring_virtqueue* FUNC_0 (struct virtqueue*) ;

void FUNC_1(struct virtqueue *VAR_1)
{
 struct vring_virtqueue *VAR_2 = FUNC_0(VAR_1);

 VAR_2->vring.avail->flags |= VAR_0;
}
