
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int thread_continue_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

void
FUNC_4(void)
{
 kern_return_t VAR_5;
 thread_t VAR_6;

 if(!(VAR_4 & VAR_2))
  return;

 FUNC_1("Serial keyboard started\n");
 VAR_5 = FUNC_0((thread_continue_t)VAR_3, ((void*)0), VAR_1, &VAR_6);
 if (VAR_5 != VAR_0)
  FUNC_2("serial_keyboard_init");

 FUNC_3(VAR_6);
}
