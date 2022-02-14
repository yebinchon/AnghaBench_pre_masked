
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned long irq; } ;
struct TYPE_7__ {TYPE_4__* avail; } ;
struct virtqueue {TYPE_2__ config; TYPE_3__ vring; TYPE_1__* dev; scalar_t__ pending_used; } ;
typedef int buf ;
struct TYPE_8__ {int flags; scalar_t__ idx; } ;
struct TYPE_5__ {int irq_on_empty; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,unsigned long) ;
 scalar_t__ FUNC_1 (struct virtqueue*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,unsigned long*,int) ;

__attribute__((used)) static void FUNC_3(struct virtqueue *VAR_3)
{
 unsigned long VAR_4[] = { VAR_0, VAR_3->config.irq };


 if (!VAR_3->pending_used)
  return;
 VAR_3->pending_used = 0;


 if (VAR_3->vring.avail->flags & VAR_1) {

  if (!VAR_3->dev->irq_on_empty
      || FUNC_1(VAR_3) != VAR_3->vring.avail->idx)
   return;
 }


 if (FUNC_2(VAR_2, VAR_4, sizeof(VAR_4)) != 0)
  FUNC_0(1, "Triggering irq %i", VAR_3->config.irq);
}
