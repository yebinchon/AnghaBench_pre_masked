
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLLIGHTENVISGIXPROC ;
typedef scalar_t__ PFNGLGETFRAGMENTMATERIALIVSGIXPROC ;
typedef scalar_t__ PFNGLGETFRAGMENTMATERIALFVSGIXPROC ;
typedef scalar_t__ PFNGLGETFRAGMENTLIGHTIVSGIXPROC ;
typedef scalar_t__ PFNGLGETFRAGMENTLIGHTFVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTMATERIALIVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTMATERIALISGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTMATERIALFVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTMATERIALFSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTMODELIVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTMODELISGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTMODELFVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTMODELFSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTIVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTISGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTFVSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTLIGHTFSGIXPROC ;
typedef scalar_t__ PFNGLFRAGMENTCOLORMATERIALSGIXPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_18 = 0;
 VAR_0 = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC)FUNC_0("glFragmentColorMaterialSGIX");
 if(!VAR_0) ++VAR_18;
 VAR_1 = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC)FUNC_0("glFragmentLightModelfSGIX");
 if(!VAR_1) ++VAR_18;
 VAR_2 = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)FUNC_0("glFragmentLightModelfvSGIX");
 if(!VAR_2) ++VAR_18;
 VAR_3 = (PFNGLFRAGMENTLIGHTMODELISGIXPROC)FUNC_0("glFragmentLightModeliSGIX");
 if(!VAR_3) ++VAR_18;
 VAR_4 = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)FUNC_0("glFragmentLightModelivSGIX");
 if(!VAR_4) ++VAR_18;
 VAR_5 = (PFNGLFRAGMENTLIGHTFSGIXPROC)FUNC_0("glFragmentLightfSGIX");
 if(!VAR_5) ++VAR_18;
 VAR_6 = (PFNGLFRAGMENTLIGHTFVSGIXPROC)FUNC_0("glFragmentLightfvSGIX");
 if(!VAR_6) ++VAR_18;
 VAR_7 = (PFNGLFRAGMENTLIGHTISGIXPROC)FUNC_0("glFragmentLightiSGIX");
 if(!VAR_7) ++VAR_18;
 VAR_8 = (PFNGLFRAGMENTLIGHTIVSGIXPROC)FUNC_0("glFragmentLightivSGIX");
 if(!VAR_8) ++VAR_18;
 VAR_9 = (PFNGLFRAGMENTMATERIALFSGIXPROC)FUNC_0("glFragmentMaterialfSGIX");
 if(!VAR_9) ++VAR_18;
 VAR_10 = (PFNGLFRAGMENTMATERIALFVSGIXPROC)FUNC_0("glFragmentMaterialfvSGIX");
 if(!VAR_10) ++VAR_18;
 VAR_11 = (PFNGLFRAGMENTMATERIALISGIXPROC)FUNC_0("glFragmentMaterialiSGIX");
 if(!VAR_11) ++VAR_18;
 VAR_12 = (PFNGLFRAGMENTMATERIALIVSGIXPROC)FUNC_0("glFragmentMaterialivSGIX");
 if(!VAR_12) ++VAR_18;
 VAR_13 = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC)FUNC_0("glGetFragmentLightfvSGIX");
 if(!VAR_13) ++VAR_18;
 VAR_14 = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC)FUNC_0("glGetFragmentLightivSGIX");
 if(!VAR_14) ++VAR_18;
 VAR_15 = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC)FUNC_0("glGetFragmentMaterialfvSGIX");
 if(!VAR_15) ++VAR_18;
 VAR_16 = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC)FUNC_0("glGetFragmentMaterialivSGIX");
 if(!VAR_16) ++VAR_18;
 VAR_17 = (PFNGLLIGHTENVISGIXPROC)FUNC_0("glLightEnviSGIX");
 if(!VAR_17) ++VAR_18;
 return VAR_18;
}
