
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_lflag; int p_mlock; int p_olimit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,char*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(proc_t VAR_2)
{
 FUNC_1(VAR_2);
 while (VAR_2->p_lflag & VAR_0) {
  VAR_2->p_lflag |= VAR_1;
  FUNC_0(&VAR_2->p_olimit, &VAR_2->p_mlock, 0, "proc_limitblock", ((void*)0));
 }
 VAR_2->p_lflag |= VAR_0;
 FUNC_2(VAR_2);

}
