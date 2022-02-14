
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC ;
typedef scalar_t__ PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC ;
typedef scalar_t__ PFNGLENDTRANSFORMFEEDBACKEXTPROC ;
typedef scalar_t__ PFNGLBINDBUFFERRANGEEXTPROC ;
typedef scalar_t__ PFNGLBINDBUFFEROFFSETEXTPROC ;
typedef scalar_t__ PFNGLBINDBUFFERBASEEXTPROC ;
typedef scalar_t__ PFNGLBEGINTRANSFORMFEEDBACKEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_7 = 0;
 VAR_0 = (PFNGLBEGINTRANSFORMFEEDBACKEXTPROC)FUNC_0("glBeginTransformFeedbackEXT");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLBINDBUFFERBASEEXTPROC)FUNC_0("glBindBufferBaseEXT");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLBINDBUFFEROFFSETEXTPROC)FUNC_0("glBindBufferOffsetEXT");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLBINDBUFFERRANGEEXTPROC)FUNC_0("glBindBufferRangeEXT");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLENDTRANSFORMFEEDBACKEXTPROC)FUNC_0("glEndTransformFeedbackEXT");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC)FUNC_0("glGetTransformFeedbackVaryingEXT");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC)FUNC_0("glTransformFeedbackVaryingsEXT");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
