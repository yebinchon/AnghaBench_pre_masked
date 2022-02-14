
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef void* proc_t ;
typedef int pid_t ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

void
FUNC_5(void * VAR_1, thread_t VAR_2)
{
 FUNC_0(VAR_1 != VAR_0);

 pid_t VAR_3 = FUNC_3((proc_t)VAR_1);

 proc_t VAR_4 = FUNC_2(VAR_3);

 if (VAR_4 != VAR_0) {
  FUNC_0(VAR_4 == (proc_t)VAR_1);

  FUNC_1(VAR_4, VAR_2);
  FUNC_4(VAR_4);
 }
}
