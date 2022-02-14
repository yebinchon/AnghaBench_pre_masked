
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLWEIGHTUSVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTUIVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTUBVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTSVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTPOINTERARBPROC ;
typedef scalar_t__ PFNGLWEIGHTIVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTFVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTDVARBPROC ;
typedef scalar_t__ PFNGLWEIGHTBVARBPROC ;
typedef scalar_t__ PFNGLVERTEXBLENDARBPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_10 = 0;
 VAR_0 = (PFNGLVERTEXBLENDARBPROC)FUNC_0("glVertexBlendARB");
 if(!VAR_0) ++VAR_10;
 VAR_1 = (PFNGLWEIGHTPOINTERARBPROC)FUNC_0("glWeightPointerARB");
 if(!VAR_1) ++VAR_10;
 VAR_2 = (PFNGLWEIGHTBVARBPROC)FUNC_0("glWeightbvARB");
 if(!VAR_2) ++VAR_10;
 VAR_3 = (PFNGLWEIGHTDVARBPROC)FUNC_0("glWeightdvARB");
 if(!VAR_3) ++VAR_10;
 VAR_4 = (PFNGLWEIGHTFVARBPROC)FUNC_0("glWeightfvARB");
 if(!VAR_4) ++VAR_10;
 VAR_5 = (PFNGLWEIGHTIVARBPROC)FUNC_0("glWeightivARB");
 if(!VAR_5) ++VAR_10;
 VAR_6 = (PFNGLWEIGHTSVARBPROC)FUNC_0("glWeightsvARB");
 if(!VAR_6) ++VAR_10;
 VAR_7 = (PFNGLWEIGHTUBVARBPROC)FUNC_0("glWeightubvARB");
 if(!VAR_7) ++VAR_10;
 VAR_8 = (PFNGLWEIGHTUIVARBPROC)FUNC_0("glWeightuivARB");
 if(!VAR_8) ++VAR_10;
 VAR_9 = (PFNGLWEIGHTUSVARBPROC)FUNC_0("glWeightusvARB");
 if(!VAR_9) ++VAR_10;
 return VAR_10;
}
