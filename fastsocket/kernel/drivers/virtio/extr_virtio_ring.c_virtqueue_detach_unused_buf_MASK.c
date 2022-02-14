
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int num; TYPE_1__* avail; } ;
struct vring_virtqueue {unsigned int num_free; TYPE_2__ vring; void** data; } ;
struct virtqueue {int dummy; } ;
struct TYPE_3__ {int idx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vring_virtqueue*) ;
 int FUNC_2 (struct vring_virtqueue*) ;
 int FUNC_3 (struct vring_virtqueue*,unsigned int) ;
 struct vring_virtqueue* FUNC_4 (struct virtqueue*) ;

void *FUNC_5(struct virtqueue *VAR_0)
{
 struct vring_virtqueue *VAR_1 = FUNC_4(VAR_0);
 unsigned int VAR_2;
 void *VAR_3;

 FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->vring.num; VAR_2++) {
  if (!VAR_1->data[VAR_2])
   continue;

  VAR_3 = VAR_1->data[VAR_2];
  FUNC_3(VAR_1, VAR_2);
  VAR_1->vring.avail->idx--;
  FUNC_1(VAR_1);
  return VAR_3;
 }

 FUNC_0(VAR_1->num_free != VAR_1->vring.num);

 FUNC_1(VAR_1);
 return ((void*)0);
}
