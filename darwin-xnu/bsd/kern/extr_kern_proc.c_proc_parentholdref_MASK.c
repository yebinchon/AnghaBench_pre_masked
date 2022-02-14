
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {scalar_t__ p_stat; int p_listflag; int p_parentref; int p_childrencnt; struct TYPE_5__* p_pptr; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int ,char*,int ) ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 () ;

proc_t
FUNC_3(proc_t VAR_6)
{
 proc_t VAR_7 = VAR_0;
 proc_t VAR_8;
 int VAR_9 = 0;


 FUNC_1();
loop:
 VAR_8 = VAR_6->p_pptr;
 if ((VAR_8 == VAR_0) || (VAR_8->p_stat == VAR_4) || ((VAR_8->p_listflag & (VAR_2 | VAR_1)) == (VAR_2 | VAR_1))) {
  VAR_7 = VAR_0;
  goto out;
 }

 if ((VAR_8->p_listflag & (VAR_2 | VAR_1)) == VAR_2) {
  VAR_8->p_listflag |= VAR_3;
  FUNC_0(&VAR_8->p_childrencnt, VAR_5, 0, "proc_parent", 0);
  VAR_9++;
  if (VAR_9 == 5) {
   VAR_7 = VAR_0;
   goto out;
  }
  goto loop;
 }

 if ((VAR_8->p_listflag & (VAR_2 | VAR_1)) == 0) {
  VAR_8->p_parentref++;
  VAR_7 = VAR_8;
  goto out;
 }

out:
 FUNC_2();
 return(VAR_7);
}
