
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLRESETMINMAXEXTPROC ;
typedef scalar_t__ PFNGLRESETHISTOGRAMEXTPROC ;
typedef scalar_t__ PFNGLMINMAXEXTPROC ;
typedef scalar_t__ PFNGLHISTOGRAMEXTPROC ;
typedef scalar_t__ PFNGLGETMINMAXPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETMINMAXPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLGETMINMAXEXTPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMEXTPROC ;


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
 VAR_0 = (PFNGLGETHISTOGRAMEXTPROC)FUNC_0("glGetHistogramEXT");
 if(!VAR_0) ++VAR_10;
 VAR_1 = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)FUNC_0("glGetHistogramParameterfvEXT");
 if(!VAR_1) ++VAR_10;
 VAR_2 = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)FUNC_0("glGetHistogramParameterivEXT");
 if(!VAR_2) ++VAR_10;
 VAR_3 = (PFNGLGETMINMAXEXTPROC)FUNC_0("glGetMinmaxEXT");
 if(!VAR_3) ++VAR_10;
 VAR_4 = (PFNGLGETMINMAXPARAMETERFVEXTPROC)FUNC_0("glGetMinmaxParameterfvEXT");
 if(!VAR_4) ++VAR_10;
 VAR_5 = (PFNGLGETMINMAXPARAMETERIVEXTPROC)FUNC_0("glGetMinmaxParameterivEXT");
 if(!VAR_5) ++VAR_10;
 VAR_6 = (PFNGLHISTOGRAMEXTPROC)FUNC_0("glHistogramEXT");
 if(!VAR_6) ++VAR_10;
 VAR_7 = (PFNGLMINMAXEXTPROC)FUNC_0("glMinmaxEXT");
 if(!VAR_7) ++VAR_10;
 VAR_8 = (PFNGLRESETHISTOGRAMEXTPROC)FUNC_0("glResetHistogramEXT");
 if(!VAR_8) ++VAR_10;
 VAR_9 = (PFNGLRESETMINMAXEXTPROC)FUNC_0("glResetMinmaxEXT");
 if(!VAR_9) ++VAR_10;
 return VAR_10;
}
