
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLRESUMETRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLPAUSETRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLISTRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLGENTRANSFORMFEEDBACKSNVPROC ;
typedef scalar_t__ PFNGLDRAWTRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLDELETETRANSFORMFEEDBACKSNVPROC ;
typedef scalar_t__ PFNGLBINDTRANSFORMFEEDBACKNVPROC ;


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
 VAR_0 = (PFNGLBINDTRANSFORMFEEDBACKNVPROC)FUNC_0("glBindTransformFeedbackNV");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLDELETETRANSFORMFEEDBACKSNVPROC)FUNC_0("glDeleteTransformFeedbacksNV");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLDRAWTRANSFORMFEEDBACKNVPROC)FUNC_0("glDrawTransformFeedbackNV");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLGENTRANSFORMFEEDBACKSNVPROC)FUNC_0("glGenTransformFeedbacksNV");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLISTRANSFORMFEEDBACKNVPROC)FUNC_0("glIsTransformFeedbackNV");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLPAUSETRANSFORMFEEDBACKNVPROC)FUNC_0("glPauseTransformFeedbackNV");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLRESUMETRANSFORMFEEDBACKNVPROC)FUNC_0("glResumeTransformFeedbackNV");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
