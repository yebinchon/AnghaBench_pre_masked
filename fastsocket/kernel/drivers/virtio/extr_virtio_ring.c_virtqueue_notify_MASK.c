
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_virtqueue {int (* notify ) (struct virtqueue*) ;} ;
struct virtqueue {int dummy; } ;


 int FUNC_0 (struct virtqueue*) ;
 struct vring_virtqueue* FUNC_1 (struct virtqueue*) ;

void FUNC_2(struct virtqueue *VAR_0)
{
 struct vring_virtqueue *VAR_1 = FUNC_1(VAR_0);


 VAR_1->notify(VAR_0);
}
