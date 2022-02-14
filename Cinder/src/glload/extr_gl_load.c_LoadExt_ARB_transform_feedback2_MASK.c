
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLRESUMETRANSFORMFEEDBACKPROC ;
typedef scalar_t__ PFNGLPAUSETRANSFORMFEEDBACKPROC ;
typedef scalar_t__ PFNGLISTRANSFORMFEEDBACKPROC ;
typedef scalar_t__ PFNGLGENTRANSFORMFEEDBACKSPROC ;
typedef scalar_t__ PFNGLDRAWTRANSFORMFEEDBACKPROC ;
typedef scalar_t__ PFNGLDELETETRANSFORMFEEDBACKSPROC ;
typedef scalar_t__ PFNGLBINDTRANSFORMFEEDBACKPROC ;


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
 VAR_0 = (PFNGLBINDTRANSFORMFEEDBACKPROC)FUNC_0("glBindTransformFeedback");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLDELETETRANSFORMFEEDBACKSPROC)FUNC_0("glDeleteTransformFeedbacks");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLDRAWTRANSFORMFEEDBACKPROC)FUNC_0("glDrawTransformFeedback");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLGENTRANSFORMFEEDBACKSPROC)FUNC_0("glGenTransformFeedbacks");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLISTRANSFORMFEEDBACKPROC)FUNC_0("glIsTransformFeedback");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLPAUSETRANSFORMFEEDBACKPROC)FUNC_0("glPauseTransformFeedback");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLRESUMETRANSFORMFEEDBACKPROC)FUNC_0("glResumeTransformFeedback");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
