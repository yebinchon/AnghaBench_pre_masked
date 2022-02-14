
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLPOLLASYNCSGIXPROC ;
typedef scalar_t__ PFNGLISASYNCMARKERSGIXPROC ;
typedef scalar_t__ PFNGLGENASYNCMARKERSSGIXPROC ;
typedef scalar_t__ PFNGLFINISHASYNCSGIXPROC ;
typedef scalar_t__ PFNGLDELETEASYNCMARKERSSGIXPROC ;
typedef scalar_t__ PFNGLASYNCMARKERSGIXPROC ;


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
 VAR_0 = (PFNGLASYNCMARKERSGIXPROC)FUNC_0("glAsyncMarkerSGIX");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLDELETEASYNCMARKERSSGIXPROC)FUNC_0("glDeleteAsyncMarkersSGIX");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLFINISHASYNCSGIXPROC)FUNC_0("glFinishAsyncSGIX");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLGENASYNCMARKERSSGIXPROC)FUNC_0("glGenAsyncMarkersSGIX");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLISASYNCMARKERSGIXPROC)FUNC_0("glIsAsyncMarkerSGIX");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLPOLLASYNCSGIXPROC)FUNC_0("glPollAsyncSGIX");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
