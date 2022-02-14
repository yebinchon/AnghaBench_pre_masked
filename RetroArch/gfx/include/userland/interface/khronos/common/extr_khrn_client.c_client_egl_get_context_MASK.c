
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int contexts; } ;
struct TYPE_8__ {int error; } ;
struct TYPE_7__ {int is_destroyed; } ;
typedef TYPE_1__ EGL_CONTEXT_T ;
typedef scalar_t__ EGLContext ;
typedef TYPE_2__ CLIENT_THREAD_STATE_T ;
typedef TYPE_3__ CLIENT_PROCESS_STATE_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;

EGL_CONTEXT_T *FUNC_2(CLIENT_THREAD_STATE_T *VAR_1, CLIENT_PROCESS_STATE_T *VAR_2, EGLContext VAR_3)
{
   EGL_CONTEXT_T *VAR_4 = (EGL_CONTEXT_T *)FUNC_0(&VAR_2->contexts, (uint32_t)(size_t)VAR_3);

   FUNC_1(!VAR_4 || !VAR_4->is_destroyed);

   if (!VAR_4)
      VAR_1->error = VAR_0;

   return VAR_4;
}
