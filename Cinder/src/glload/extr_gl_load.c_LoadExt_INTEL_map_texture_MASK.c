
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNMAPTEXTURE2DINTELPROC ;
typedef scalar_t__ PFNGLSYNCTEXTUREINTELPROC ;
typedef scalar_t__ PFNGLMAPTEXTURE2DINTELPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_3 = 0;
 VAR_0 = (PFNGLMAPTEXTURE2DINTELPROC)FUNC_0("glMapTexture2DINTEL");
 if(!VAR_0) ++VAR_3;
 VAR_1 = (PFNGLSYNCTEXTUREINTELPROC)FUNC_0("glSyncTextureINTEL");
 if(!VAR_1) ++VAR_3;
 VAR_2 = (PFNGLUNMAPTEXTURE2DINTELPROC)FUNC_0("glUnmapTexture2DINTEL");
 if(!VAR_2) ++VAR_3;
 return VAR_3;
}
