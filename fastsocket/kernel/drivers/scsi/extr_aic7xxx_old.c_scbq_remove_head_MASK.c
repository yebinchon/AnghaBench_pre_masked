
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct aic7xxx_scb {struct aic7xxx_scb* q_next; } ;
struct TYPE_3__ {int * tail; struct aic7xxx_scb* head; } ;
typedef TYPE_1__ scb_queue_type ;



__attribute__((used)) static inline struct aic7xxx_scb *
FUNC_0(volatile scb_queue_type *VAR_0)
{
  struct aic7xxx_scb * VAR_1;

  VAR_1 = VAR_0->head;
  if (VAR_0->head != ((void*)0))
    VAR_0->head = VAR_0->head->q_next;
  if (VAR_0->head == ((void*)0))
    VAR_0->tail = ((void*)0);
  return(VAR_1);
}
