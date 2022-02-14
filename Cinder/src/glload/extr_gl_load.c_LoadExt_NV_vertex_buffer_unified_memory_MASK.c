
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXFORMATNVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBIFORMATNVPROC ;
typedef scalar_t__ PFNGLVERTEXATTRIBFORMATNVPROC ;
typedef scalar_t__ PFNGLTEXCOORDFORMATNVPROC ;
typedef scalar_t__ PFNGLSECONDARYCOLORFORMATNVPROC ;
typedef scalar_t__ PFNGLNORMALFORMATNVPROC ;
typedef scalar_t__ PFNGLINDEXFORMATNVPROC ;
typedef scalar_t__ PFNGLGETINTEGERUI64I_VNVPROC ;
typedef scalar_t__ PFNGLFOGCOORDFORMATNVPROC ;
typedef scalar_t__ PFNGLEDGEFLAGFORMATNVPROC ;
typedef scalar_t__ PFNGLCOLORFORMATNVPROC ;
typedef scalar_t__ PFNGLBUFFERADDRESSRANGENVPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_12 = 0;
 VAR_0 = (PFNGLBUFFERADDRESSRANGENVPROC)FUNC_0("glBufferAddressRangeNV");
 if(!VAR_0) ++VAR_12;
 VAR_1 = (PFNGLCOLORFORMATNVPROC)FUNC_0("glColorFormatNV");
 if(!VAR_1) ++VAR_12;
 VAR_2 = (PFNGLEDGEFLAGFORMATNVPROC)FUNC_0("glEdgeFlagFormatNV");
 if(!VAR_2) ++VAR_12;
 VAR_3 = (PFNGLFOGCOORDFORMATNVPROC)FUNC_0("glFogCoordFormatNV");
 if(!VAR_3) ++VAR_12;
 VAR_4 = (PFNGLGETINTEGERUI64I_VNVPROC)FUNC_0("glGetIntegerui64i_vNV");
 if(!VAR_4) ++VAR_12;
 VAR_5 = (PFNGLINDEXFORMATNVPROC)FUNC_0("glIndexFormatNV");
 if(!VAR_5) ++VAR_12;
 VAR_6 = (PFNGLNORMALFORMATNVPROC)FUNC_0("glNormalFormatNV");
 if(!VAR_6) ++VAR_12;
 VAR_7 = (PFNGLSECONDARYCOLORFORMATNVPROC)FUNC_0("glSecondaryColorFormatNV");
 if(!VAR_7) ++VAR_12;
 VAR_8 = (PFNGLTEXCOORDFORMATNVPROC)FUNC_0("glTexCoordFormatNV");
 if(!VAR_8) ++VAR_12;
 VAR_9 = (PFNGLVERTEXATTRIBFORMATNVPROC)FUNC_0("glVertexAttribFormatNV");
 if(!VAR_9) ++VAR_12;
 VAR_10 = (PFNGLVERTEXATTRIBIFORMATNVPROC)FUNC_0("glVertexAttribIFormatNV");
 if(!VAR_10) ++VAR_12;
 VAR_11 = (PFNGLVERTEXFORMATNVPROC)FUNC_0("glVertexFormatNV");
 if(!VAR_11) ++VAR_12;
 return VAR_12;
}
