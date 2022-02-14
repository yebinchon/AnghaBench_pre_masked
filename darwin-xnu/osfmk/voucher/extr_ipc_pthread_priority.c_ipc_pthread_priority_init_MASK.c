
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

void
FUNC_3()
{
 kern_return_t VAR_4 = VAR_0;


 VAR_4 = FUNC_0(
                 &VAR_2,
                 0,
                 VAR_1,
                 &VAR_3);
 if (VAR_4 != VAR_0 )
  FUNC_2("IPC_PTHREAD_PRIORITY subsystem initialization failed");

 FUNC_1("IPC_PTHREAD_PRIORITY subsystem is initialized\n");
 return ;
}
