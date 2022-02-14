
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vring_used_elem {unsigned int id; int len; } ;
struct TYPE_4__ {size_t num; TYPE_1__* used; } ;
struct virtqueue {int pending_used; TYPE_2__ vring; } ;
struct TYPE_3__ {size_t idx; struct vring_used_elem* ring; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct virtqueue *VAR_0, unsigned int VAR_1, int VAR_2)
{
 struct vring_used_elem *VAR_3;





 VAR_3 = &VAR_0->vring.used->ring[VAR_0->vring.used->idx % VAR_0->vring.num];
 VAR_3->id = VAR_1;
 VAR_3->len = VAR_2;

 FUNC_0();
 VAR_0->vring.used->idx++;
 VAR_0->pending_used++;
}
