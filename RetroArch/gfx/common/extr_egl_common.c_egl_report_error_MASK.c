
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EGLint ;
 int FUNC_0 (char*,unsigned int,char const*) ;
 int FUNC_1 () ;

void FUNC_2(void)
{
   EGLint VAR_0 = FUNC_1();
   const char *VAR_1 = ((void*)0);
   switch (VAR_0)
   {
      case 128:
         VAR_1 = "EGL_SUCCESS";
         break;

      case 140:
         VAR_1 = "EGL_BAD_ACCESS";
         break;

      case 139:
         VAR_1 = "EGL_BAD_ALLOC";
         break;

      case 138:
         VAR_1 = "EGL_BAD_ATTRIBUTE";
         break;

      case 137:
         VAR_1 = "EGL_BAD_CONFIG";
         break;

      case 136:
         VAR_1 = "EGL_BAD_CONTEXT";
         break;

      case 135:
         VAR_1 = "EGL_BAD_CURRENT_SURFACE";
         break;

      case 134:
         VAR_1 = "EGL_BAD_DISPLAY";
         break;

      case 133:
         VAR_1 = "EGL_BAD_MATCH";
         break;

      case 132:
         VAR_1 = "EGL_BAD_NATIVE_PIXMAP";
         break;

      case 131:
         VAR_1 = "EGL_BAD_NATIVE_WINDOW";
         break;

      case 130:
         VAR_1 = "EGL_BAD_PARAMETER";
         break;

      case 129:
         VAR_1 = "EGL_BAD_SURFACE";
         break;

      default:
         VAR_1 = "Unknown";
         break;
   }

   FUNC_0("[EGL]: #0x%x, %s\n", (unsigned)VAR_0, VAR_1);
}
