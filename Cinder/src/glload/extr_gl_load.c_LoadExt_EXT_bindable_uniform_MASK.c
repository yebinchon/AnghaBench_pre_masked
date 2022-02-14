
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLUNIFORMBUFFEREXTPROC ;
typedef scalar_t__ PFNGLGETUNIFORMOFFSETEXTPROC ;
typedef scalar_t__ PFNGLGETUNIFORMBUFFERSIZEEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_3 = 0;
 VAR_0 = (PFNGLGETUNIFORMBUFFERSIZEEXTPROC)FUNC_0("glGetUniformBufferSizeEXT");
 if(!VAR_0) ++VAR_3;
 VAR_1 = (PFNGLGETUNIFORMOFFSETEXTPROC)FUNC_0("glGetUniformOffsetEXT");
 if(!VAR_1) ++VAR_3;
 VAR_2 = (PFNGLUNIFORMBUFFEREXTPROC)FUNC_0("glUniformBufferEXT");
 if(!VAR_2) ++VAR_3;
 return VAR_3;
}
