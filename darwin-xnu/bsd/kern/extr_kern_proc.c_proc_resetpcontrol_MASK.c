
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_12__ {int p_lflag; int p_pid; char* p_comm; int task; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;



 TYPE_1__* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,char*) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;

int
FUNC_13(int VAR_3)
{
 proc_t VAR_4;
 int VAR_5;
 int VAR_6;
 proc_t VAR_7 = FUNC_4();


 if (((VAR_7->p_lflag & VAR_2) == 0) && (VAR_6 = FUNC_11(FUNC_5(), 0)))
  return VAR_6;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4 == VAR_1)
  return(VAR_0);

 FUNC_8(VAR_4);

 VAR_5 = FUNC_1(VAR_4);

 if(FUNC_0(VAR_4) !=0) {
  switch(VAR_5) {
   case 128:
    FUNC_2(VAR_4);
    FUNC_10(VAR_4);
    FUNC_6("low swap: unthrottling pid %d (%s)\n", VAR_4->p_pid, VAR_4->p_comm);
    break;

   case 129:
    FUNC_2(VAR_4);
    FUNC_10(VAR_4);
    FUNC_6("low swap: resuming pid %d (%s)\n", VAR_4->p_pid, VAR_4->p_comm);
    FUNC_12(VAR_4->task);
    break;

   case 130:

    FUNC_3(VAR_4);
    FUNC_10(VAR_4);
    FUNC_6("low swap: attempt to unkill pid %d (%s) ignored\n", VAR_4->p_pid, VAR_4->p_comm);
    break;

   default:
    FUNC_10(VAR_4);
  }

 } else
  FUNC_10(VAR_4);

 FUNC_9(VAR_4);
 return(0);
}
