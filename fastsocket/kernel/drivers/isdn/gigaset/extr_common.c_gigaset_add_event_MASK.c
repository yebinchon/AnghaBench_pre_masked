
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_t {int type; int cid; int parameter; void* arg; void* ptr; struct at_state_t* at_state; } ;
struct cardstate {unsigned int ev_tail; unsigned int ev_head; int ev_lock; struct event_t* events; int dev; } ;
struct at_state_t {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

struct event_t *FUNC_4(struct cardstate *VAR_1,
      struct at_state_t *VAR_2, int VAR_3,
      void *VAR_4, int VAR_5, void *VAR_6)
{
 unsigned long VAR_7;
 unsigned VAR_8, VAR_9;
 struct event_t *VAR_10 = ((void*)0);

 FUNC_1(&VAR_1->ev_lock, VAR_7);

 VAR_9 = VAR_1->ev_tail;
 VAR_8 = (VAR_9 + 1) % VAR_0;
 if (FUNC_3(VAR_8 == VAR_1->ev_head))
  FUNC_0(VAR_1->dev, "event queue full\n");
 else {
  VAR_10 = VAR_1->events + VAR_9;
  VAR_10->type = VAR_3;
  VAR_10->at_state = VAR_2;
  VAR_10->cid = -1;
  VAR_10->ptr = VAR_4;
  VAR_10->arg = VAR_6;
  VAR_10->parameter = VAR_5;
  VAR_1->ev_tail = VAR_8;
 }

 FUNC_2(&VAR_1->ev_lock, VAR_7);

 return VAR_10;
}
