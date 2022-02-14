
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef TYPE_1__* thread_t ;
typedef int mach_msg_timeout_t ;
typedef int mach_msg_size_t ;
typedef int mach_msg_option_t ;
typedef int ipc_mqueue_t ;
struct TYPE_4__ {scalar_t__ ith_continuation; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int,TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

void
FUNC_6(
 ipc_mqueue_t VAR_7,
 mach_msg_option_t VAR_8,
 mach_msg_size_t VAR_9,
 mach_msg_timeout_t VAR_10,
 int VAR_11)
{
 wait_result_t VAR_12;
 thread_t VAR_13 = FUNC_1();

 FUNC_2(VAR_7);
 VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_9,
                                        VAR_10, VAR_11,
                                        VAR_13);

 if (VAR_12 == VAR_2)
  return;

 if (VAR_12 == VAR_3) {
  FUNC_0((VAR_11 == VAR_0) ?
   VAR_5++ :
   VAR_4++);

  if (VAR_13->ith_continuation)
   FUNC_5(VAR_6);


  VAR_12 = FUNC_5(VAR_1);
 }
 FUNC_4(VAR_12);
}
