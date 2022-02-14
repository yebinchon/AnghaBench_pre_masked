
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC ;
typedef scalar_t__ PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC ;
typedef scalar_t__ PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC ;
typedef scalar_t__ PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC ;
typedef scalar_t__ PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC ;
typedef scalar_t__ PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC ;


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
 VAR_0 = (PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC)FUNC_0("glTexImage2DMultisampleCoverageNV");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC)FUNC_0("glTexImage3DMultisampleCoverageNV");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC)FUNC_0("glTextureImage2DMultisampleCoverageNV");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC)FUNC_0("glTextureImage2DMultisampleNV");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC)FUNC_0("glTextureImage3DMultisampleCoverageNV");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC)FUNC_0("glTextureImage3DMultisampleNV");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
