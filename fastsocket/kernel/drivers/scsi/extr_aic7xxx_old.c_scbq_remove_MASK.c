
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct aic7xxx_scb {struct aic7xxx_scb* q_next; } ;
struct TYPE_4__ {struct aic7xxx_scb* tail; struct aic7xxx_scb* head; } ;
typedef TYPE_1__ scb_queue_type ;


 int FUNC_0 (TYPE_1__ volatile*) ;

__attribute__((used)) static inline void
FUNC_1(volatile scb_queue_type *VAR_0, struct aic7xxx_scb *VAR_1)
{
  if (VAR_0->head == VAR_1)
  {

    FUNC_0(VAR_0);
  }
  else
  {
    struct aic7xxx_scb *VAR_2 = VAR_0->head;





    while ((VAR_2 != ((void*)0)) && (VAR_2->q_next != VAR_1))
    {
      VAR_2 = VAR_2->q_next;
    }
    if (VAR_2 != ((void*)0))
    {

      VAR_2->q_next = VAR_1->q_next;
      if (VAR_1->q_next == ((void*)0))
      {

        VAR_0->tail = VAR_2;
      }
    }
  }
}
