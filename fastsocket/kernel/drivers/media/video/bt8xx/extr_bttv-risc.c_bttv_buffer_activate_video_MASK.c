
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bttv_buffer_set {TYPE_2__* bottom; int frame_irq; TYPE_2__* top; int top_irq; } ;
struct bttv {int dummy; } ;
struct TYPE_6__ {scalar_t__ next; } ;
struct TYPE_4__ {TYPE_3__ queue; void* state; } ;
struct TYPE_5__ {int btformat; int btswap; int bottom; int geo; TYPE_1__ vb; int top; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct bttv*,int *,int) ;
 int FUNC_2 (struct bttv*,int ,int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;

int
FUNC_4(struct bttv *VAR_5,
      struct bttv_buffer_set *VAR_6)
{

 if (((void*)0) != VAR_6->top && ((void*)0) != VAR_6->bottom) {
  if (VAR_6->top == VAR_6->bottom) {
   VAR_6->top->vb.state = VAR_4;
   if (VAR_6->top->vb.queue.next)
    FUNC_3(&VAR_6->top->vb.queue);
  } else {
   VAR_6->top->vb.state = VAR_4;
   VAR_6->bottom->vb.state = VAR_4;
   if (VAR_6->top->vb.queue.next)
    FUNC_3(&VAR_6->top->vb.queue);
   if (VAR_6->bottom->vb.queue.next)
    FUNC_3(&VAR_6->bottom->vb.queue);
  }
  FUNC_1(VAR_5, &VAR_6->top->geo, 1);
  FUNC_1(VAR_5, &VAR_6->bottom->geo,0);
  FUNC_2(VAR_5, VAR_3, &VAR_6->top->top,
          VAR_6->top_irq);
  FUNC_2(VAR_5, VAR_2, &VAR_6->bottom->bottom,
          VAR_6->frame_irq);
  FUNC_0((VAR_6->top->btformat & 0xf0) | (VAR_6->bottom->btformat & 0x0f),
        ~0xff, VAR_1);
  FUNC_0((VAR_6->top->btswap & 0x0a) | (VAR_6->bottom->btswap & 0x05),
        ~0x0f, VAR_0);
 } else if (((void*)0) != VAR_6->top) {
  VAR_6->top->vb.state = VAR_4;
  if (VAR_6->top->vb.queue.next)
   FUNC_3(&VAR_6->top->vb.queue);
  FUNC_1(VAR_5, &VAR_6->top->geo,1);
  FUNC_1(VAR_5, &VAR_6->top->geo,0);
  FUNC_2(VAR_5, VAR_3, &VAR_6->top->top,
          VAR_6->frame_irq);
  FUNC_2(VAR_5, VAR_2, ((void*)0), 0);
  FUNC_0(VAR_6->top->btformat & 0xff, ~0xff, VAR_1);
  FUNC_0(VAR_6->top->btswap & 0x0f, ~0x0f, VAR_0);
 } else if (((void*)0) != VAR_6->bottom) {
  VAR_6->bottom->vb.state = VAR_4;
  if (VAR_6->bottom->vb.queue.next)
   FUNC_3(&VAR_6->bottom->vb.queue);
  FUNC_1(VAR_5, &VAR_6->bottom->geo,1);
  FUNC_1(VAR_5, &VAR_6->bottom->geo,0);
  FUNC_2(VAR_5, VAR_3, ((void*)0), 0);
  FUNC_2(VAR_5, VAR_2, &VAR_6->bottom->bottom,
          VAR_6->frame_irq);
  FUNC_0(VAR_6->bottom->btformat & 0xff, ~0xff, VAR_1);
  FUNC_0(VAR_6->bottom->btswap & 0x0f, ~0x0f, VAR_0);
 } else {
  FUNC_2(VAR_5, VAR_3, ((void*)0), 0);
  FUNC_2(VAR_5, VAR_2, ((void*)0), 0);
 }
 return 0;
}
