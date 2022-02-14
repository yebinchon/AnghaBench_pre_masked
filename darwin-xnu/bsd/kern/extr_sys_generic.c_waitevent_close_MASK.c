
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct eventqelt* tqh_first; } ;
struct socket {TYPE_2__ so_evlist; } ;
struct proc {int dummy; } ;
struct pipe {TYPE_2__ pipe_evlist; } ;
struct fileproc {scalar_t__ f_type; scalar_t__ f_data; int f_flags; } ;
struct TYPE_3__ {struct eventqelt* tqe_next; } ;
struct eventqelt {struct proc* ee_proc; TYPE_1__ ee_slist; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,struct eventqelt*) ;
 int VAR_3 ;
 int FUNC_1 (struct eventqelt*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct pipe*) ;
 int FUNC_3 (struct pipe*) ;
 int FUNC_4 (TYPE_2__*,struct eventqelt*,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct socket*,int) ;
 int FUNC_8 (struct socket*,int) ;

int
FUNC_9(struct proc *VAR_6, struct fileproc *VAR_7)
{
 struct eventqelt *VAR_8;


 VAR_7->f_flags &= ~VAR_3;







 if (VAR_7->f_type == VAR_0) {
         FUNC_2((struct pipe *)VAR_7->f_data);
  VAR_8 = ((struct pipe *)VAR_7->f_data)->pipe_evlist.tqh_first;
 }
 else {
  return(VAR_2);
 }
 FUNC_6(VAR_6);



 for ( ; VAR_8 != ((void*)0); VAR_8 = VAR_8->ee_slist.tqe_next) {
         if (VAR_8->ee_proc == VAR_6)
          break;
 }
 if (VAR_8 == ((void*)0)) {





          FUNC_3((struct pipe *)VAR_7->f_data);

  FUNC_5(VAR_6);

  return(VAR_2);
 }
 FUNC_0(VAR_6, VAR_8);







 {
  FUNC_4(&((struct pipe *)VAR_7->f_data)->pipe_evlist, VAR_8, VAR_5);
  FUNC_3((struct pipe *)VAR_7->f_data);
 }
 FUNC_1(VAR_8, VAR_4);

 FUNC_5(VAR_6);

 return(0);
}
