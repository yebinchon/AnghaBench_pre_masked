
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {scalar_t__ p_pid; scalar_t__ p_stat; scalar_t__ p_slptime; int p_estcpu; } ;



 int FUNC_0 (TYPE_1__*) ;


 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(proc_t VAR_1, proc_t VAR_2)
{


 if (VAR_1 == ((void*)0))
  return (1);



 switch (FUNC_1(FUNC_0(VAR_1), FUNC_0(VAR_2))) {
 case 129:
  return (0);
 case 128:
  return (1);
 case 130:
  return (VAR_2->p_pid > VAR_1->p_pid);
 }



 switch (FUNC_1(VAR_1->p_stat == VAR_0, VAR_2->p_stat == VAR_0)) {
 case 129:
  return (1);
 case 128:
  return (0);
 case 130:
  return (VAR_2->p_pid > VAR_1->p_pid);
 }
 return (VAR_2->p_pid > VAR_1->p_pid);
}
