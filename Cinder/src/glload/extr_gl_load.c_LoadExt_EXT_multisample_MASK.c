
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSAMPLEPATTERNEXTPROC ;
typedef scalar_t__ PFNGLSAMPLEMASKEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_2 = 0;
 VAR_0 = (PFNGLSAMPLEMASKEXTPROC)FUNC_0("glSampleMaskEXT");
 if(!VAR_0) ++VAR_2;
 VAR_1 = (PFNGLSAMPLEPATTERNEXTPROC)FUNC_0("glSamplePatternEXT");
 if(!VAR_1) ++VAR_2;
 return VAR_2;
}
