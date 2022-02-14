
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC ;
typedef scalar_t__ PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC ;
typedef scalar_t__ PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC ;
typedef scalar_t__ PFNGLGETVARYINGLOCATIONNVPROC ;
typedef scalar_t__ PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC ;
typedef scalar_t__ PFNGLGETACTIVEVARYINGNVPROC ;
typedef scalar_t__ PFNGLENDTRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLBINDBUFFERRANGENVPROC ;
typedef scalar_t__ PFNGLBINDBUFFEROFFSETNVPROC ;
typedef scalar_t__ PFNGLBINDBUFFERBASENVPROC ;
typedef scalar_t__ PFNGLBEGINTRANSFORMFEEDBACKNVPROC ;
typedef scalar_t__ PFNGLACTIVEVARYINGNVPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_12 = 0;
 VAR_0 = (PFNGLACTIVEVARYINGNVPROC)FUNC_0("glActiveVaryingNV");
 if(!VAR_0) ++VAR_12;
 VAR_1 = (PFNGLBEGINTRANSFORMFEEDBACKNVPROC)FUNC_0("glBeginTransformFeedbackNV");
 if(!VAR_1) ++VAR_12;
 VAR_2 = (PFNGLBINDBUFFERBASENVPROC)FUNC_0("glBindBufferBaseNV");
 if(!VAR_2) ++VAR_12;
 VAR_3 = (PFNGLBINDBUFFEROFFSETNVPROC)FUNC_0("glBindBufferOffsetNV");
 if(!VAR_3) ++VAR_12;
 VAR_4 = (PFNGLBINDBUFFERRANGENVPROC)FUNC_0("glBindBufferRangeNV");
 if(!VAR_4) ++VAR_12;
 VAR_5 = (PFNGLENDTRANSFORMFEEDBACKNVPROC)FUNC_0("glEndTransformFeedbackNV");
 if(!VAR_5) ++VAR_12;
 VAR_6 = (PFNGLGETACTIVEVARYINGNVPROC)FUNC_0("glGetActiveVaryingNV");
 if(!VAR_6) ++VAR_12;
 VAR_7 = (PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)FUNC_0("glGetTransformFeedbackVaryingNV");
 if(!VAR_7) ++VAR_12;
 VAR_8 = (PFNGLGETVARYINGLOCATIONNVPROC)FUNC_0("glGetVaryingLocationNV");
 if(!VAR_8) ++VAR_12;
 VAR_9 = (PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)FUNC_0("glTransformFeedbackAttribsNV");
 if(!VAR_9) ++VAR_12;
 VAR_10 = (PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC)FUNC_0("glTransformFeedbackStreamAttribsNV");
 if(!VAR_10) ++VAR_12;
 VAR_11 = (PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)FUNC_0("glTransformFeedbackVaryingsNV");
 if(!VAR_11) ++VAR_12;
 return VAR_12;
}
