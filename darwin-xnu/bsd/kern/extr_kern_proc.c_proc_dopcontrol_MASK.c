
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_9__ {int p_pid; char* p_comm; int task; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;



 int VAR_1 ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(proc_t VAR_2)
{
 int VAR_3;

 FUNC_4(VAR_2);

 VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_2) == 0) {
  switch(VAR_3) {
   case 128:
    FUNC_2(VAR_2);
    FUNC_5(VAR_2);
    FUNC_3("low swap: throttling pid %d (%s)\n", VAR_2->p_pid, VAR_2->p_comm);
    break;

   case 129:
    FUNC_2(VAR_2);
    FUNC_5(VAR_2);
    FUNC_3("low swap: suspending pid %d (%s)\n", VAR_2->p_pid, VAR_2->p_comm);
    FUNC_7(VAR_2->task);
    break;

   case 130:
    FUNC_2(VAR_2);
    FUNC_5(VAR_2);
    FUNC_3("low swap: killing pid %d (%s)\n", VAR_2->p_pid, VAR_2->p_comm);
    FUNC_6(VAR_2, VAR_1);
    break;

   default:
    FUNC_5(VAR_2);
  }

 } else
  FUNC_5(VAR_2);

 return(VAR_0);
}
