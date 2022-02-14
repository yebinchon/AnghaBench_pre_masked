
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNWGLSETGAMMATABLEPARAMETERSI3DPROC ;
typedef scalar_t__ PFNWGLSETGAMMATABLEI3DPROC ;
typedef scalar_t__ PFNWGLGETGAMMATABLEPARAMETERSI3DPROC ;
typedef scalar_t__ PFNWGLGETGAMMATABLEI3DPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNWGLGETGAMMATABLEI3DPROC)FUNC_0("wglGetGammaTableI3D");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC)FUNC_0("wglGetGammaTableParametersI3D");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNWGLSETGAMMATABLEI3DPROC)FUNC_0("wglSetGammaTableI3D");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC)FUNC_0("wglSetGammaTableParametersI3D");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
