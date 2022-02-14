
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_lflag; int p_transholder; int p_mlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int *,int ,char*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(proc_t VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_5 == 0)
  FUNC_2(VAR_4);
 while ((VAR_4->p_lflag & VAR_1) == VAR_1) {
  if (((VAR_4->p_lflag & VAR_2) == VAR_2) || VAR_6) {
   if (VAR_5 == 0)
    FUNC_3(VAR_4);
   return VAR_0;
  }
  VAR_4->p_lflag |= VAR_3;
  FUNC_1(&VAR_4->p_lflag, &VAR_4->p_mlock, 0, "proc_signstart", ((void*)0));
 }
 VAR_4->p_lflag |= VAR_1;
 VAR_4->p_transholder = FUNC_0();
 if (VAR_5 == 0)
  FUNC_3(VAR_4);
 return 0;
}
