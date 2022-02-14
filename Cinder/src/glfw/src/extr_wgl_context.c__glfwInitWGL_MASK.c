
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WGLSHARELISTS_T ;
typedef scalar_t__ WGLMAKECURRENT_T ;
typedef scalar_t__ WGLGETPROCADDRESS_T ;
typedef scalar_t__ WGLGETCURRENTDC_T ;
typedef scalar_t__ WGLDELETECONTEXT_T ;
typedef scalar_t__ WGLCREATECONTEXT_T ;
struct TYPE_3__ {scalar_t__ instance; scalar_t__ ShareLists; scalar_t__ MakeCurrent; scalar_t__ GetCurrentDC; scalar_t__ GetProcAddress; scalar_t__ DeleteContext; scalar_t__ CreateContext; } ;
struct TYPE_4__ {TYPE_1__ wgl; } ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ,char*) ;

GLFWbool FUNC_3(void)
{
    if (VAR_3.wgl.instance)
        return VAR_2;

    VAR_3.wgl.instance = FUNC_1("opengl32.dll");
    if (!VAR_3.wgl.instance)
    {
        FUNC_2(VAR_1, "WGL: Failed to load opengl32.dll");
        return VAR_0;
    }

    VAR_3.wgl.CreateContext = (WGLCREATECONTEXT_T)
        FUNC_0(VAR_3.wgl.instance, "wglCreateContext");
    VAR_3.wgl.DeleteContext = (WGLDELETECONTEXT_T)
        FUNC_0(VAR_3.wgl.instance, "wglDeleteContext");
    VAR_3.wgl.GetProcAddress = (WGLGETPROCADDRESS_T)
        FUNC_0(VAR_3.wgl.instance, "wglGetProcAddress");
    VAR_3.wgl.GetCurrentDC = (WGLGETCURRENTDC_T)
        FUNC_0(VAR_3.wgl.instance, "wglGetCurrentDC");
    VAR_3.wgl.MakeCurrent = (WGLMAKECURRENT_T)
        FUNC_0(VAR_3.wgl.instance, "wglMakeCurrent");
    VAR_3.wgl.ShareLists = (WGLSHARELISTS_T)
        FUNC_0(VAR_3.wgl.instance, "wglShareLists");

    return VAR_2;
}
