
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSELECTPERFMONITORCOUNTERSAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORGROUPSTRINGAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORGROUPSAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORCOUNTERSAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORCOUNTERINFOAMDPROC ;
typedef scalar_t__ PFNGLGETPERFMONITORCOUNTERDATAAMDPROC ;
typedef scalar_t__ PFNGLGENPERFMONITORSAMDPROC ;
typedef scalar_t__ PFNGLENDPERFMONITORAMDPROC ;
typedef scalar_t__ PFNGLDELETEPERFMONITORSAMDPROC ;
typedef scalar_t__ PFNGLBEGINPERFMONITORAMDPROC ;


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

__attribute__((used)) static int FUNC_1()
{
 int VAR_11 = 0;
 VAR_0 = (PFNGLBEGINPERFMONITORAMDPROC)FUNC_0("glBeginPerfMonitorAMD");
 if(!VAR_0) ++VAR_11;
 VAR_1 = (PFNGLDELETEPERFMONITORSAMDPROC)FUNC_0("glDeletePerfMonitorsAMD");
 if(!VAR_1) ++VAR_11;
 VAR_2 = (PFNGLENDPERFMONITORAMDPROC)FUNC_0("glEndPerfMonitorAMD");
 if(!VAR_2) ++VAR_11;
 VAR_3 = (PFNGLGENPERFMONITORSAMDPROC)FUNC_0("glGenPerfMonitorsAMD");
 if(!VAR_3) ++VAR_11;
 VAR_4 = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)FUNC_0("glGetPerfMonitorCounterDataAMD");
 if(!VAR_4) ++VAR_11;
 VAR_5 = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)FUNC_0("glGetPerfMonitorCounterInfoAMD");
 if(!VAR_5) ++VAR_11;
 VAR_6 = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)FUNC_0("glGetPerfMonitorCounterStringAMD");
 if(!VAR_6) ++VAR_11;
 VAR_7 = (PFNGLGETPERFMONITORCOUNTERSAMDPROC)FUNC_0("glGetPerfMonitorCountersAMD");
 if(!VAR_7) ++VAR_11;
 VAR_8 = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)FUNC_0("glGetPerfMonitorGroupStringAMD");
 if(!VAR_8) ++VAR_11;
 VAR_9 = (PFNGLGETPERFMONITORGROUPSAMDPROC)FUNC_0("glGetPerfMonitorGroupsAMD");
 if(!VAR_9) ++VAR_11;
 VAR_10 = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)FUNC_0("glSelectPerfMonitorCountersAMD");
 if(!VAR_10) ++VAR_11;
 return VAR_11;
}
