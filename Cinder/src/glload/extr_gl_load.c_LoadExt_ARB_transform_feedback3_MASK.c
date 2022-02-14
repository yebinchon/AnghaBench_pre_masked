
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLGETQUERYINDEXEDIVPROC ;
typedef scalar_t__ PFNGLENDQUERYINDEXEDPROC ;
typedef scalar_t__ PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC ;
typedef scalar_t__ PFNGLBEGINQUERYINDEXEDPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLBEGINQUERYINDEXEDPROC)FUNC_0("glBeginQueryIndexed");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)FUNC_0("glDrawTransformFeedbackStream");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLENDQUERYINDEXEDPROC)FUNC_0("glEndQueryIndexed");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLGETQUERYINDEXEDIVPROC)FUNC_0("glGetQueryIndexediv");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
