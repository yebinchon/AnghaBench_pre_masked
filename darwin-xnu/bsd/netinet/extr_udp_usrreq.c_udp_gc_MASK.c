
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {scalar_t__ so_usecount; } ;
struct TYPE_5__ {int intimer_fast; } ;
struct inpcbinfo {int ipi_lock; TYPE_2__ ipi_gc_req; } ;
struct TYPE_4__ {struct inpcb* le_next; } ;
struct inpcb {scalar_t__ inp_wantcnt; scalar_t__ inp_state; struct socket* inp_socket; TYPE_1__ inp_list; } ;
struct TYPE_6__ {struct inpcb* lh_first; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct socket*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*,int ) ;
 TYPE_3__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_10(struct inpcbinfo *VAR_7)
{
 struct inpcb *VAR_8, *VAR_9;
 struct socket *VAR_10;

 if (FUNC_7(VAR_7->ipi_lock) == VAR_0) {
  if (VAR_6 == VAR_3) {
   VAR_6 = VAR_0;

   FUNC_1(&VAR_7->ipi_gc_req.intimer_fast, 1);
   return;
  }
  FUNC_6(VAR_7->ipi_lock);
 }

 VAR_6 = VAR_3;

 for (VAR_8 = VAR_5.lh_first; VAR_8 != ((void*)0); VAR_8 = VAR_9) {
  VAR_9 = VAR_8->inp_list.le_next;







  if (VAR_8->inp_wantcnt != VAR_4)
   continue;





  if (!FUNC_8(VAR_8->inp_socket)) {
   FUNC_1(&VAR_7->ipi_gc_req.intimer_fast, 1);
   continue;
  }




  VAR_10 = VAR_8->inp_socket;
  if (VAR_10->so_usecount == 0) {
   if (VAR_8->inp_state != VAR_1) {





     FUNC_3(VAR_8);
   }
   FUNC_4(VAR_8);
  } else {
   FUNC_9(VAR_10, 0);
   FUNC_1(&VAR_7->ipi_gc_req.intimer_fast, 1);
  }
 }
 FUNC_5(VAR_7->ipi_lock);
}
