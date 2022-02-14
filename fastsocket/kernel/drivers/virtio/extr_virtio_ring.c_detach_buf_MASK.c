
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* desc; } ;
struct vring_virtqueue {unsigned int free_head; int num_free; TYPE_2__ vring; int ** data; } ;
struct TYPE_3__ {int flags; unsigned int next; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vring_virtqueue *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;


 VAR_2->data[VAR_3] = ((void*)0);


 VAR_4 = VAR_3;


 if (VAR_2->vring.desc[VAR_4].flags & VAR_0)
  FUNC_0(FUNC_1(VAR_2->vring.desc[VAR_4].addr));

 while (VAR_2->vring.desc[VAR_4].flags & VAR_1) {
  VAR_4 = VAR_2->vring.desc[VAR_4].next;
  VAR_2->num_free++;
 }

 VAR_2->vring.desc[VAR_4].next = VAR_2->free_head;
 VAR_2->free_head = VAR_3;

 VAR_2->num_free++;
}
