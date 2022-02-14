
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLLOADDISPLAYCOLORTABLEEXTPROC ;
typedef scalar_t__ PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC ;
typedef scalar_t__ PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC ;
typedef scalar_t__ PFNWGLBINDDISPLAYCOLORTABLEEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)FUNC_0("wglBindDisplayColorTableEXT");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC)FUNC_0("wglCreateDisplayColorTableEXT");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)FUNC_0("wglDestroyDisplayColorTableEXT");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)FUNC_0("wglLoadDisplayColorTableEXT");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
