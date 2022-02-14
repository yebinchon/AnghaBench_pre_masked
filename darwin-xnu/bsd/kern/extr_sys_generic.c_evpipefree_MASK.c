
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct eventqelt* tqh_first; } ;
struct pipe {TYPE_2__ pipe_evlist; } ;
struct TYPE_3__ {struct eventqelt* tqe_next; } ;
struct eventqelt {int ee_proc; TYPE_1__ ee_slist; } ;
typedef int proc_t ;


 int FUNC_0 (int ,struct eventqelt*) ;
 int FUNC_1 (struct eventqelt*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,struct eventqelt*,int ) ;
 int VAR_1 ;

void
FUNC_3(struct pipe *VAR_2)
{
        struct eventqelt *VAR_3, *VAR_4;
 proc_t VAR_5;

 for (VAR_3 = VAR_2->pipe_evlist.tqh_first; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
         VAR_4 = VAR_3->ee_slist.tqe_next;
  VAR_5 = VAR_3->ee_proc;

  FUNC_0(VAR_5, VAR_3);

  FUNC_2(&VAR_2->pipe_evlist, VAR_3, VAR_1);
  FUNC_1(VAR_3, VAR_0);
 }
}
