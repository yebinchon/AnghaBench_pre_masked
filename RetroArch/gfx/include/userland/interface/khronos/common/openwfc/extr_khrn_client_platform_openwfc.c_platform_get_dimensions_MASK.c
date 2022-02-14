
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_1__ EGL_DISPMANX_WINDOW_T ;
typedef int EGLNativeWindowType ;
typedef int EGLDisplay ;


 TYPE_1__* FUNC_0 (int ) ;

void FUNC_1(EGLDisplay VAR_0, EGLNativeWindowType VAR_1,
      uint32_t *VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
   EGL_DISPMANX_WINDOW_T *VAR_5 = FUNC_0(VAR_1);

   *VAR_2 = VAR_5->width;
   *VAR_3 = VAR_5->height;
   *VAR_4 = 0;
}
