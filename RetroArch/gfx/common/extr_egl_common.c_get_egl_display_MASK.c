
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* pfn_eglGetPlatformDisplay ) (scalar_t__,void*,int *) ;
typedef scalar_t__ (* PFNEGLGETPLATFORMDISPLAYEXTPROC ) (scalar_t__,void*,int *) ;
typedef scalar_t__ EGLenum ;
typedef int EGLNativeDisplayType ;
typedef scalar_t__ EGLDisplay ;
typedef int EGLAttrib ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static EGLDisplay FUNC_5(EGLenum VAR_2, void *VAR_3)
{
   if (VAR_2 != VAR_0)
   {
   }




   FUNC_0("[EGL] Falling back to eglGetDisplay\n");
   return FUNC_3((EGLNativeDisplayType) VAR_3);
}
