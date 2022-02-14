
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLOBJECTUNPURGEABLEAPPLEPROC ;
typedef scalar_t__ PFNGLOBJECTPURGEABLEAPPLEPROC ;
typedef scalar_t__ PFNGLGETOBJECTPARAMETERIVAPPLEPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_3 = 0;
 VAR_0 = (PFNGLGETOBJECTPARAMETERIVAPPLEPROC)FUNC_0("glGetObjectParameterivAPPLE");
 if(!VAR_0) ++VAR_3;
 VAR_1 = (PFNGLOBJECTPURGEABLEAPPLEPROC)FUNC_0("glObjectPurgeableAPPLE");
 if(!VAR_1) ++VAR_3;
 VAR_2 = (PFNGLOBJECTUNPURGEABLEAPPLEPROC)FUNC_0("glObjectUnpurgeableAPPLE");
 if(!VAR_2) ++VAR_3;
 return VAR_3;
}
