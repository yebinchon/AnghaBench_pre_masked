
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct uthread* uthread_t ;
typedef int thread_t ;
struct waitid_nocancel_args {int dummy; } ;
struct _waitid_data {int* retval; struct waitid_nocancel_args* args; } ;
struct TYPE_2__ {struct _waitid_data uus_waitid_data; } ;
struct uthread {TYPE_1__ uu_save; } ;
typedef int proc_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct waitid_nocancel_args*,int*) ;

int
FUNC_4(int VAR_0)
{
 proc_t VAR_1;
 thread_t VAR_2;
 uthread_t VAR_3;
 struct _waitid_data *VAR_4;
 struct waitid_nocancel_args *VAR_5;
 int *VAR_6;

 if (VAR_0)
  return (VAR_0);

 VAR_1 = FUNC_0();
 VAR_2 = FUNC_1();
 VAR_3 = (struct uthread *)FUNC_2(VAR_2);

 VAR_4 = &VAR_3->uu_save.uus_waitid_data;
 VAR_5 = VAR_4->args;
 VAR_6 = VAR_4->retval;
 return(FUNC_3(VAR_1, VAR_5, VAR_6));
}
