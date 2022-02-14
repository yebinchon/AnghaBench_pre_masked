
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSEPARABLEFILTER2DPROC ;
typedef scalar_t__ PFNGLRESETMINMAXPROC ;
typedef scalar_t__ PFNGLRESETHISTOGRAMPROC ;
typedef scalar_t__ PFNGLMINMAXPROC ;
typedef scalar_t__ PFNGLHISTOGRAMPROC ;
typedef scalar_t__ PFNGLGETSEPARABLEFILTERPROC ;
typedef scalar_t__ PFNGLGETMINMAXPROC ;
typedef scalar_t__ PFNGLGETMINMAXPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETMINMAXPARAMETERFVPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETHISTOGRAMPARAMETERFVPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONPARAMETERFVPROC ;
typedef scalar_t__ PFNGLGETCONVOLUTIONFILTERPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERIVPROC ;
typedef scalar_t__ PFNGLGETCOLORTABLEPARAMETERFVPROC ;
typedef scalar_t__ PFNGLCOPYCONVOLUTIONFILTER2DPROC ;
typedef scalar_t__ PFNGLCOPYCONVOLUTIONFILTER1DPROC ;
typedef scalar_t__ PFNGLCOPYCOLORTABLEPROC ;
typedef scalar_t__ PFNGLCOPYCOLORSUBTABLEPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERIVPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERIPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERFVPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONPARAMETERFPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONFILTER2DPROC ;
typedef scalar_t__ PFNGLCONVOLUTIONFILTER1DPROC ;
typedef scalar_t__ PFNGLCOLORTABLEPROC ;
typedef scalar_t__ PFNGLCOLORTABLEPARAMETERIVPROC ;
typedef scalar_t__ PFNGLCOLORTABLEPARAMETERFVPROC ;
typedef scalar_t__ PFNGLCOLORSUBTABLEPROC ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_32 = 0;
 VAR_0 = (PFNGLCOLORSUBTABLEPROC)FUNC_0("glColorSubTable");
 if(!VAR_0) ++VAR_32;
 VAR_1 = (PFNGLCOLORTABLEPROC)FUNC_0("glColorTable");
 if(!VAR_1) ++VAR_32;
 VAR_2 = (PFNGLCOLORTABLEPARAMETERFVPROC)FUNC_0("glColorTableParameterfv");
 if(!VAR_2) ++VAR_32;
 VAR_3 = (PFNGLCOLORTABLEPARAMETERIVPROC)FUNC_0("glColorTableParameteriv");
 if(!VAR_3) ++VAR_32;
 VAR_4 = (PFNGLCONVOLUTIONFILTER1DPROC)FUNC_0("glConvolutionFilter1D");
 if(!VAR_4) ++VAR_32;
 VAR_5 = (PFNGLCONVOLUTIONFILTER2DPROC)FUNC_0("glConvolutionFilter2D");
 if(!VAR_5) ++VAR_32;
 VAR_6 = (PFNGLCONVOLUTIONPARAMETERFPROC)FUNC_0("glConvolutionParameterf");
 if(!VAR_6) ++VAR_32;
 VAR_7 = (PFNGLCONVOLUTIONPARAMETERFVPROC)FUNC_0("glConvolutionParameterfv");
 if(!VAR_7) ++VAR_32;
 VAR_8 = (PFNGLCONVOLUTIONPARAMETERIPROC)FUNC_0("glConvolutionParameteri");
 if(!VAR_8) ++VAR_32;
 VAR_9 = (PFNGLCONVOLUTIONPARAMETERIVPROC)FUNC_0("glConvolutionParameteriv");
 if(!VAR_9) ++VAR_32;
 VAR_10 = (PFNGLCOPYCOLORSUBTABLEPROC)FUNC_0("glCopyColorSubTable");
 if(!VAR_10) ++VAR_32;
 VAR_11 = (PFNGLCOPYCOLORTABLEPROC)FUNC_0("glCopyColorTable");
 if(!VAR_11) ++VAR_32;
 VAR_12 = (PFNGLCOPYCONVOLUTIONFILTER1DPROC)FUNC_0("glCopyConvolutionFilter1D");
 if(!VAR_12) ++VAR_32;
 VAR_13 = (PFNGLCOPYCONVOLUTIONFILTER2DPROC)FUNC_0("glCopyConvolutionFilter2D");
 if(!VAR_13) ++VAR_32;
 VAR_14 = (PFNGLGETCOLORTABLEPROC)FUNC_0("glGetColorTable");
 if(!VAR_14) ++VAR_32;
 VAR_15 = (PFNGLGETCOLORTABLEPARAMETERFVPROC)FUNC_0("glGetColorTableParameterfv");
 if(!VAR_15) ++VAR_32;
 VAR_16 = (PFNGLGETCOLORTABLEPARAMETERIVPROC)FUNC_0("glGetColorTableParameteriv");
 if(!VAR_16) ++VAR_32;
 VAR_17 = (PFNGLGETCONVOLUTIONFILTERPROC)FUNC_0("glGetConvolutionFilter");
 if(!VAR_17) ++VAR_32;
 VAR_18 = (PFNGLGETCONVOLUTIONPARAMETERFVPROC)FUNC_0("glGetConvolutionParameterfv");
 if(!VAR_18) ++VAR_32;
 VAR_19 = (PFNGLGETCONVOLUTIONPARAMETERIVPROC)FUNC_0("glGetConvolutionParameteriv");
 if(!VAR_19) ++VAR_32;
 VAR_20 = (PFNGLGETHISTOGRAMPROC)FUNC_0("glGetHistogram");
 if(!VAR_20) ++VAR_32;
 VAR_21 = (PFNGLGETHISTOGRAMPARAMETERFVPROC)FUNC_0("glGetHistogramParameterfv");
 if(!VAR_21) ++VAR_32;
 VAR_22 = (PFNGLGETHISTOGRAMPARAMETERIVPROC)FUNC_0("glGetHistogramParameteriv");
 if(!VAR_22) ++VAR_32;
 VAR_23 = (PFNGLGETMINMAXPROC)FUNC_0("glGetMinmax");
 if(!VAR_23) ++VAR_32;
 VAR_24 = (PFNGLGETMINMAXPARAMETERFVPROC)FUNC_0("glGetMinmaxParameterfv");
 if(!VAR_24) ++VAR_32;
 VAR_25 = (PFNGLGETMINMAXPARAMETERIVPROC)FUNC_0("glGetMinmaxParameteriv");
 if(!VAR_25) ++VAR_32;
 VAR_26 = (PFNGLGETSEPARABLEFILTERPROC)FUNC_0("glGetSeparableFilter");
 if(!VAR_26) ++VAR_32;
 VAR_27 = (PFNGLHISTOGRAMPROC)FUNC_0("glHistogram");
 if(!VAR_27) ++VAR_32;
 VAR_28 = (PFNGLMINMAXPROC)FUNC_0("glMinmax");
 if(!VAR_28) ++VAR_32;
 VAR_29 = (PFNGLRESETHISTOGRAMPROC)FUNC_0("glResetHistogram");
 if(!VAR_29) ++VAR_32;
 VAR_30 = (PFNGLRESETMINMAXPROC)FUNC_0("glResetMinmax");
 if(!VAR_30) ++VAR_32;
 VAR_31 = (PFNGLSEPARABLEFILTER2DPROC)FUNC_0("glSeparableFilter2D");
 if(!VAR_31) ++VAR_32;
 return VAR_32;
}
