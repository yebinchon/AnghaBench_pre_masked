
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {TYPE_1__* used; } ;
struct vring_virtqueue {TYPE_2__ vring; } ;
struct virtqueue {int dummy; } ;
struct TYPE_3__ {scalar_t__ idx; } ;


 struct vring_virtqueue* FUNC_0 (struct virtqueue*) ;
 int FUNC_1 () ;

bool FUNC_2(struct virtqueue *VAR_0, unsigned VAR_1)
{
 struct vring_virtqueue *VAR_2 = FUNC_0(VAR_0);

 FUNC_1();
 return (u16)VAR_1 != VAR_2->vring.used->idx;
}
