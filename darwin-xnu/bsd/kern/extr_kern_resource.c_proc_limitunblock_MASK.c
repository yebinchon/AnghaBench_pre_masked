
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_lflag; int p_olimit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(proc_t VAR_2)
{
 FUNC_0(VAR_2);
 VAR_2->p_lflag &= ~VAR_0;
 if (VAR_2->p_lflag & VAR_1) {
  VAR_2->p_lflag &= ~VAR_1;
  FUNC_2(&VAR_2->p_olimit);
 }
 FUNC_1(VAR_2);
}
