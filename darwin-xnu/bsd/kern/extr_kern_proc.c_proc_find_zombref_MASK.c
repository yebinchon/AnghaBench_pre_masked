
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_listflag; int p_stat; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,char*,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 () ;

proc_t
FUNC_4(int VAR_6)
{
 proc_t VAR_7;

 FUNC_2();

 again:
 VAR_7 = FUNC_1(VAR_6);


 if ((VAR_7 == VAR_0)
     || ((VAR_7->p_listflag & VAR_3) != 0)
     || ((VAR_7->p_listflag & VAR_2) == 0)) {

  FUNC_3();
  return (VAR_0);
 }


 if ((VAR_7->p_listflag & VAR_4) != 0) {
  (void)FUNC_0(&VAR_7->p_stat, VAR_5, VAR_1, "waitcoll", 0);
  goto again;
 }
 VAR_7->p_listflag |= VAR_4;

 FUNC_3();

 return(VAR_7);
}
