
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int surfaces; } ;
struct TYPE_8__ {int error; } ;
struct TYPE_7__ {scalar_t__ is_locked; int is_destroyed; } ;
typedef TYPE_1__ EGL_SURFACE_T ;
typedef scalar_t__ EGLSurface ;
typedef TYPE_2__ CLIENT_THREAD_STATE_T ;
typedef TYPE_3__ CLIENT_PROCESS_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;

EGL_SURFACE_T *FUNC_2(CLIENT_THREAD_STATE_T *VAR_2, CLIENT_PROCESS_STATE_T *VAR_3, EGLSurface VAR_4)
{
   EGL_SURFACE_T *VAR_5 = (EGL_SURFACE_T *)FUNC_0(&VAR_3->surfaces, (uint32_t)(size_t)VAR_4);

   FUNC_1 (!VAR_5 || !VAR_5->is_destroyed);

   if (!VAR_5)
      VAR_2->error = VAR_1;
   return VAR_5;
}
