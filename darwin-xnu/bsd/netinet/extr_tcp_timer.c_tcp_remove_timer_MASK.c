
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tcptimerlist {int mtx; int entries; TYPE_3__* next_te; } ;
struct TYPE_7__ {int * le_prev; int * le_next; } ;
struct TYPE_8__ {TYPE_2__ le; } ;
struct tcpcb {TYPE_3__ tentry; int t_flags; TYPE_1__* t_inpcb; } ;
struct TYPE_6__ {int inp_socket; } ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 struct tcptimerlist VAR_2 ;

void
FUNC_6(struct tcpcb *VAR_3)
{
 struct tcptimerlist *VAR_4 = &VAR_2;

 FUNC_5(VAR_3->t_inpcb->inp_socket);
 if (!(FUNC_2(VAR_3))) {
  return;
 }
 FUNC_3(VAR_4->mtx);


 if (!(FUNC_2(VAR_3))) {
  FUNC_4(VAR_4->mtx);
  return;
 }

 if (VAR_4->next_te != ((void*)0) && VAR_4->next_te == &VAR_3->tentry)
  VAR_4->next_te = FUNC_0(&VAR_3->tentry, VAR_1);

 FUNC_1(&VAR_3->tentry, VAR_1);
 VAR_3->t_flags &= ~(VAR_0);

 VAR_4->entries--;

 VAR_3->tentry.le.le_next = ((void*)0);
 VAR_3->tentry.le.le_prev = ((void*)0);
 FUNC_4(VAR_4->mtx);
}
