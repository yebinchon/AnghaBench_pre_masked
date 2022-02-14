
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int inited; } ;
struct TYPE_6__ {int error; } ;
typedef scalar_t__ EGLDisplay ;
typedef scalar_t__ EGLBoolean ;
typedef TYPE_1__ CLIENT_THREAD_STATE_T ;
typedef TYPE_2__ CLIENT_PROCESS_STATE_T ;


 TYPE_2__* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;

CLIENT_PROCESS_STATE_T *FUNC_1(CLIENT_THREAD_STATE_T *VAR_2, EGLDisplay VAR_3, EGLBoolean VAR_4)
{
   if ((size_t)VAR_3 == 1) {
      CLIENT_PROCESS_STATE_T *VAR_5 = FUNC_0();

      if (VAR_4 && !VAR_5->inited) {
         VAR_2->error = VAR_1;
         return ((void*)0);
      } else
         return VAR_5;
   } else {
      VAR_2->error = VAR_0;
      return ((void*)0);
   }
}
