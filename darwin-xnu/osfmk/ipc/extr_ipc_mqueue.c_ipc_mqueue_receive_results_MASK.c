
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_result_t ;
typedef TYPE_1__* thread_t ;
typedef int mach_msg_option_t ;
struct TYPE_3__ {int ith_option; int ith_state; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;





 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*) ;

void
FUNC_2(wait_result_t VAR_4)
{
 thread_t VAR_5 = FUNC_0();
 mach_msg_option_t VAR_6 = VAR_5->ith_option;




 switch (VAR_4) {
 case 128:
  VAR_5->ith_state = VAR_3;
  return;

 case 130:
  VAR_5->ith_state = VAR_0;
  return;

 case 129:

  VAR_5->ith_state = VAR_2;
  return;

 case 131:




  switch (VAR_5->ith_state) {
  case 133:
  case 132:







   if (VAR_6 & VAR_1) {
    return;
   }

  case 135:
  case 134:
   return;

  default:
   FUNC_1("ipc_mqueue_receive_results: strange ith_state");
  }

 default:
  FUNC_1("ipc_mqueue_receive_results: strange wait_result");
 }
}
