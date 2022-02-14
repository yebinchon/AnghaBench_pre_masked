
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_8__ {int p_listflag; scalar_t__ p_stat; int p_refcount; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int*,int ,int ,char*,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 () ;

proc_t
FUNC_5(proc_t VAR_9)
{
 proc_t VAR_10 = VAR_9;
 int VAR_11 = FUNC_2(VAR_9);

retry:




 if ((VAR_9 == VAR_0) || (VAR_10 != VAR_9) || ((VAR_9->p_listflag & VAR_5) != 0))
   return (VAR_0);
 if ((VAR_9->p_stat != VAR_7) &&
     ((VAR_9->p_listflag & VAR_4) == 0) &&
     ((VAR_9->p_listflag & VAR_1) == 0) &&
     (((VAR_9->p_listflag & (VAR_2 | VAR_3)) == 0) ||
      ((VAR_9->p_listflag & VAR_6) != 0))) {
  if ((VAR_9->p_listflag & VAR_6) != 0 && FUNC_4()) {
   FUNC_0(&VAR_9->p_listflag, VAR_8, 0, "proc_refwait", 0) ;




   VAR_9 = FUNC_1(VAR_11);
   goto retry;
  }
  VAR_9->p_refcount++;
  FUNC_3(VAR_9, 1);
 }
 else
  VAR_10 = VAR_0;

 return(VAR_10);
}
