
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPRESENTFRAMEKEYEDNVPROC ;
typedef scalar_t__ PFNGLPRESENTFRAMEDUALFILLNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOUIVNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOUI64VNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOIVNVPROC ;
typedef scalar_t__ PFNGLGETVIDEOI64VNVPROC ;


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
 VAR_0 = (PFNGLGETVIDEOI64VNVPROC)FUNC_0("glGetVideoi64vNV");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLGETVIDEOIVNVPROC)FUNC_0("glGetVideoivNV");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLGETVIDEOUI64VNVPROC)FUNC_0("glGetVideoui64vNV");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLGETVIDEOUIVNVPROC)FUNC_0("glGetVideouivNV");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLPRESENTFRAMEDUALFILLNVPROC)FUNC_0("glPresentFrameDualFillNV");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLPRESENTFRAMEKEYEDNVPROC)FUNC_0("glPresentFrameKeyedNV");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
