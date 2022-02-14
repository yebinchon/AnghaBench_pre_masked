
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLSTOPINSTRUMENTSSGIXPROC ;
typedef scalar_t__ PFNGLSTARTINSTRUMENTSSGIXPROC ;
typedef scalar_t__ PFNGLREADINSTRUMENTSSGIXPROC ;
typedef scalar_t__ PFNGLPOLLINSTRUMENTSSGIXPROC ;
typedef scalar_t__ PFNGLINSTRUMENTSBUFFERSGIXPROC ;
typedef scalar_t__ PFNGLGETINSTRUMENTSSGIXPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_6 = 0;
 VAR_0 = (PFNGLGETINSTRUMENTSSGIXPROC)FUNC_0("glGetInstrumentsSGIX");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLINSTRUMENTSBUFFERSGIXPROC)FUNC_0("glInstrumentsBufferSGIX");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLPOLLINSTRUMENTSSGIXPROC)FUNC_0("glPollInstrumentsSGIX");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLREADINSTRUMENTSSGIXPROC)FUNC_0("glReadInstrumentsSGIX");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLSTARTINSTRUMENTSSGIXPROC)FUNC_0("glStartInstrumentsSGIX");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLSTOPINSTRUMENTSSGIXPROC)FUNC_0("glStopInstrumentsSGIX");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
