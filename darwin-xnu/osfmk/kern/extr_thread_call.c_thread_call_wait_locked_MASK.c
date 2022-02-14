
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_call_t ;
typedef int spl_t ;
struct TYPE_4__ {int tc_flags; scalar_t__ tc_submit_count; scalar_t__ tc_finish_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(thread_call_t VAR_6, spl_t VAR_7)
{
 uint64_t VAR_8;
 wait_result_t VAR_9;

 FUNC_0(VAR_6->tc_flags & VAR_1);

 VAR_8 = VAR_6->tc_submit_count;

 while (VAR_6->tc_finish_count < VAR_8) {
  VAR_6->tc_flags |= VAR_2;

  VAR_9 = FUNC_1(VAR_6, VAR_4);
  if (VAR_9 != VAR_5)
   FUNC_4("Unable to assert wait: %d", VAR_9);

  FUNC_3(VAR_7);

  VAR_9 = FUNC_5(VAR_3);
  if (VAR_9 != VAR_0)
   FUNC_4("Awoken with %d?", VAR_9);

  VAR_7 = FUNC_2();
 }

 FUNC_3(VAR_7);
}
