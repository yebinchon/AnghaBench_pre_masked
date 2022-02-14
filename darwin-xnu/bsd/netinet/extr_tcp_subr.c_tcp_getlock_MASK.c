
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ so_usecount; int so_flags; TYPE_2__* so_proto; scalar_t__ so_pcb; } ;
struct mptcb {int mpt_mpte; } ;
struct inpcb {int inpcb_mtx; } ;
typedef int lck_mtx_t ;
struct TYPE_4__ {TYPE_1__* pr_domain; } ;
struct TYPE_3__ {int * dom_mtx; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (char*,struct socket*,scalar_t__,...) ;
 int FUNC_2 (struct socket*) ;
 struct inpcb* FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;
 struct mptcb* FUNC_5 (int ) ;

lck_mtx_t *
FUNC_6(struct socket *VAR_1, int VAR_2)
{
 struct inpcb *VAR_3 = FUNC_3(VAR_1);

 if (VAR_1->so_pcb) {
  if (VAR_1->so_usecount < 0)
   FUNC_1("tcp_getlock: so=%p usecount=%x lrh= %s\n",
       VAR_1, VAR_1->so_usecount, FUNC_2(VAR_1));

  if (VAR_1->so_flags & VAR_0) {
   struct mptcb *VAR_4 = FUNC_5(FUNC_4(VAR_1));

   return (FUNC_0(VAR_4->mpt_mpte, VAR_2));
  } else {
   return (&VAR_3->inpcb_mtx);
  }
 } else {
  FUNC_1("tcp_getlock: so=%p NULL so_pcb %s\n",
      VAR_1, FUNC_2(VAR_1));
  return (VAR_1->so_proto->pr_domain->dom_mtx);
 }
}
