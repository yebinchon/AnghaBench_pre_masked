
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_t ;
typedef TYPE_1__* task_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_4__ {scalar_t__ task_debug; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

kern_return_t
FUNC_2(
    thread_t VAR_5,
    task_t VAR_6)
{
 if (VAR_6->task_debug) {
  int VAR_7;
  mach_msg_type_number_t VAR_8;

  if (FUNC_1(VAR_6)) {
   VAR_7 = VAR_3;
   VAR_8 = VAR_4;
  } else {
   VAR_7 = VAR_1;
   VAR_8 = VAR_2;
  }

  return FUNC_0(VAR_5, VAR_7, VAR_6->task_debug, VAR_8);
 }

 return VAR_0;
}
