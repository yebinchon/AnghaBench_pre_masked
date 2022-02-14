
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int pid_t ;
struct TYPE_5__ {int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(pid_t VAR_4, uint32_t* VAR_5)
{
 proc_t VAR_6 = VAR_2;

 if (VAR_5 == ((void*)0))
  return(VAR_0);

 VAR_6 = FUNC_0(VAR_4);

 if (VAR_6 == VAR_2)
  return(VAR_1);

 if ( FUNC_1(VAR_6->task, VAR_3) ) {
  *VAR_5 = 1;
 } else {
  *VAR_5 = 0;
 }

 FUNC_2(VAR_6);
 return (0);
}
