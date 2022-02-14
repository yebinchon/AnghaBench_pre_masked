
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int thread_t ;
typedef TYPE_1__* task_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_3__ {scalar_t__ task_debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,scalar_t__,int ) ;

kern_return_t
FUNC_1(
    thread_t VAR_3,
    task_t VAR_4)
{
 if (VAR_4->task_debug) {
  int VAR_5;
  mach_msg_type_number_t VAR_6;

  VAR_5 = VAR_0;
  VAR_6 = VAR_1;

  return FUNC_0(VAR_3, VAR_5, VAR_4->task_debug, VAR_6);
 }

 return VAR_2;
}
