
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WGLSHARELISTS_T ;
typedef scalar_t__ WGLMAKECURRENT_T ;
typedef scalar_t__ WGLGETPROCADDRESS_T ;
typedef scalar_t__ WGLDELETECONTEXT_T ;
typedef scalar_t__ WGLCREATECONTEXT_T ;
struct TYPE_4__ {scalar_t__ ShareLists; scalar_t__ MakeCurrent; scalar_t__ GetProcAddress; scalar_t__ DeleteContext; scalar_t__ CreateContext; int instance; } ;
struct TYPE_5__ {TYPE_1__ opengl32; } ;
struct TYPE_6__ {TYPE_2__ wgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(void)
{
    if (!FUNC_2())
        return VAR_1;

    VAR_3.wgl.opengl32.instance = FUNC_1(L"opengl32.dll");
    if (!VAR_3.wgl.opengl32.instance)
    {
        FUNC_3(VAR_0, "WGL: Failed to load opengl32.dll");
        return VAR_1;
    }

    VAR_3.wgl.opengl32.CreateContext = (WGLCREATECONTEXT_T)
        FUNC_0(VAR_3.wgl.opengl32.instance, "wglCreateContext");
    VAR_3.wgl.opengl32.DeleteContext = (WGLDELETECONTEXT_T)
        FUNC_0(VAR_3.wgl.opengl32.instance, "wglDeleteContext");
    VAR_3.wgl.opengl32.GetProcAddress = (WGLGETPROCADDRESS_T)
        FUNC_0(VAR_3.wgl.opengl32.instance, "wglGetProcAddress");
    VAR_3.wgl.opengl32.MakeCurrent = (WGLMAKECURRENT_T)
        FUNC_0(VAR_3.wgl.opengl32.instance, "wglMakeCurrent");
    VAR_3.wgl.opengl32.ShareLists = (WGLSHARELISTS_T)
        FUNC_0(VAR_3.wgl.opengl32.instance, "wglShareLists");

    if (!VAR_3.wgl.opengl32.CreateContext ||
        !VAR_3.wgl.opengl32.DeleteContext ||
        !VAR_3.wgl.opengl32.GetProcAddress ||
        !VAR_3.wgl.opengl32.MakeCurrent ||
        !VAR_3.wgl.opengl32.ShareLists)
    {
        FUNC_3(VAR_0,
                        "WGL: Failed to load opengl32 functions");
        return VAR_1;
    }

    return VAR_2;
}
