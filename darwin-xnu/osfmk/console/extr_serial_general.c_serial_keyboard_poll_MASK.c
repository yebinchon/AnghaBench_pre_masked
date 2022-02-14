
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int thread_continue_t ;
typedef int event_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int,int *) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(void)
{
 int VAR_1;
 uint64_t VAR_2;

 while(1) {
  VAR_1 = FUNC_0(0, 1, 0, 1);
  if(VAR_1 < 0)
   break;
  FUNC_3((char)VAR_1);
 }

 FUNC_2(16, 1000000, &VAR_2);

 FUNC_1((event_t)FUNC_6, VAR_0, VAR_2);
 FUNC_5((thread_continue_t)FUNC_6);
 FUNC_4("serial_keyboard_poll: Shouldn't never ever get here...\n");
}
