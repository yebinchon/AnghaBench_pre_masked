
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ context_current_count; int connected; scalar_t__ inited; } ;
struct TYPE_5__ {int (* khrn_misc_try_unload_impl ) () ;} ;
typedef TYPE_1__ KHRONOS_FUNC_TABLE_T ;
typedef int CLIENT_THREAD_STATE_T ;
typedef TYPE_2__ CLIENT_PROCESS_STATE_T ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(CLIENT_PROCESS_STATE_T *VAR_2)
{
   if (
      (VAR_2->context_current_count != 0) ||

      VAR_2->inited) {
      return;
   }
   {
      CLIENT_THREAD_STATE_T *VAR_3 = FUNC_0();
      FUNC_2(FUNC_1(VAR_1, VAR_3, VAR_0));
   }

}
