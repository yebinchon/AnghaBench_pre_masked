
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct eventqelt* tqh_first; } ;
struct socket {TYPE_2__ so_evlist; } ;
struct TYPE_3__ {struct eventqelt* tqe_next; } ;
struct eventqelt {int ee_flags; int ee_proc; TYPE_1__ ee_slist; } ;
typedef int proc_t ;


 int FUNC_0 (int ,struct eventqelt*) ;
 int VAR_0 ;
 int FUNC_1 (struct eventqelt*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,struct eventqelt*,int ) ;
 int VAR_2 ;

void
FUNC_3(struct socket *VAR_3)
{
        struct eventqelt *VAR_4, *VAR_5;
 proc_t VAR_6;

 if (VAR_3 == ((void*)0))
         return;

 for (VAR_4 = VAR_3->so_evlist.tqh_first; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
         VAR_5 = VAR_4->ee_slist.tqe_next;
  VAR_6 = VAR_4->ee_proc;

  if (VAR_4->ee_flags & VAR_0) {
          FUNC_0(VAR_6, VAR_4);
  }
  FUNC_2(&VAR_3->so_evlist, VAR_4, VAR_2);
  FUNC_1(VAR_4, VAR_1);
 }
}
