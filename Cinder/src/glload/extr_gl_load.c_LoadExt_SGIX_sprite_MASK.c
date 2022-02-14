
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSPRITEPARAMETERIVSGIXPROC ;
typedef scalar_t__ PFNGLSPRITEPARAMETERISGIXPROC ;
typedef scalar_t__ PFNGLSPRITEPARAMETERFVSGIXPROC ;
typedef scalar_t__ PFNGLSPRITEPARAMETERFSGIXPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLSPRITEPARAMETERFSGIXPROC)FUNC_0("glSpriteParameterfSGIX");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLSPRITEPARAMETERFVSGIXPROC)FUNC_0("glSpriteParameterfvSGIX");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLSPRITEPARAMETERISGIXPROC)FUNC_0("glSpriteParameteriSGIX");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLSPRITEPARAMETERIVSGIXPROC)FUNC_0("glSpriteParameterivSGIX");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
