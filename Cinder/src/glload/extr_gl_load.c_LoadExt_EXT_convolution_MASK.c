
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSEPARABLEFILTER2DEXTPROC ;
typedef scalar_t__ PFNGLGETSEPARABLEFILTEREXTPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONFILTEREXTPROC ;
typedef scalar_t__ PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC ;
typedef scalar_t__ PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERIVEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERIEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERFVEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERFEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONFILTER2DEXTPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONFILTER1DEXTPROC ;


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
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_13 = 0;
 VAR_0 = (PFNGLCONVOLUTIONFILTER1DEXTPROC)FUNC_0("glConvolutionFilter1DEXT");
 if(!VAR_0) ++VAR_13;
 VAR_1 = (PFNGLCONVOLUTIONFILTER2DEXTPROC)FUNC_0("glConvolutionFilter2DEXT");
 if(!VAR_1) ++VAR_13;
 VAR_2 = (PFNGLCONVOLUTIONPARAMETERFEXTPROC)FUNC_0("glConvolutionParameterfEXT");
 if(!VAR_2) ++VAR_13;
 VAR_3 = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC)FUNC_0("glConvolutionParameterfvEXT");
 if(!VAR_3) ++VAR_13;
 VAR_4 = (PFNGLCONVOLUTIONPARAMETERIEXTPROC)FUNC_0("glConvolutionParameteriEXT");
 if(!VAR_4) ++VAR_13;
 VAR_5 = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC)FUNC_0("glConvolutionParameterivEXT");
 if(!VAR_5) ++VAR_13;
 VAR_6 = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)FUNC_0("glCopyConvolutionFilter1DEXT");
 if(!VAR_6) ++VAR_13;
 VAR_7 = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)FUNC_0("glCopyConvolutionFilter2DEXT");
 if(!VAR_7) ++VAR_13;
 VAR_8 = (PFNGLGETCONVOLUTIONFILTEREXTPROC)FUNC_0("glGetConvolutionFilterEXT");
 if(!VAR_8) ++VAR_13;
 VAR_9 = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)FUNC_0("glGetConvolutionParameterfvEXT");
 if(!VAR_9) ++VAR_13;
 VAR_10 = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)FUNC_0("glGetConvolutionParameterivEXT");
 if(!VAR_10) ++VAR_13;
 VAR_11 = (PFNGLGETSEPARABLEFILTEREXTPROC)FUNC_0("glGetSeparableFilterEXT");
 if(!VAR_11) ++VAR_13;
 VAR_12 = (PFNGLSEPARABLEFILTER2DEXTPROC)FUNC_0("glSeparableFilter2DEXT");
 if(!VAR_12) ++VAR_13;
 return VAR_13;
}
