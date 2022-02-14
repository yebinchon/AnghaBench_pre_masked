
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXSUBIMAGE3DPROC ;
typedef scalar_t__ PFNGLTEXIMAGE3DPROC ;
typedef scalar_t__ PFNGLDRAWRANGEELEMENTSPROC ;
typedef scalar_t__ PFNGLCOPYTEXSUBIMAGE3DPROC ;
typedef scalar_t__ PFNGLBLENDEQUATIONPROC ;
typedef scalar_t__ PFNGLBLENDCOLORPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_6 = 0;
 VAR_0 = (PFNGLBLENDCOLORPROC)FUNC_0("glBlendColor");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLBLENDEQUATIONPROC)FUNC_0("glBlendEquation");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLCOPYTEXSUBIMAGE3DPROC)FUNC_0("glCopyTexSubImage3D");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLDRAWRANGEELEMENTSPROC)FUNC_0("glDrawRangeElements");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLTEXIMAGE3DPROC)FUNC_0("glTexImage3D");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLTEXSUBIMAGE3DPROC)FUNC_0("glTexSubImage3D");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
