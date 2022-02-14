
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLREPLACEMENTCODEUSVSUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEUSSUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEUIVSUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEUISUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEUBVSUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEUBSUNPROC ;
typedef scalar_t__ PFNGLREPLACEMENTCODEPOINTERSUNPROC ;


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
 VAR_0 = (PFNGLREPLACEMENTCODEPOINTERSUNPROC)FUNC_0("glReplacementCodePointerSUN");
 if(!VAR_0) ++VAR_7;
 VAR_1 = (PFNGLREPLACEMENTCODEUBSUNPROC)FUNC_0("glReplacementCodeubSUN");
 if(!VAR_1) ++VAR_7;
 VAR_2 = (PFNGLREPLACEMENTCODEUBVSUNPROC)FUNC_0("glReplacementCodeubvSUN");
 if(!VAR_2) ++VAR_7;
 VAR_3 = (PFNGLREPLACEMENTCODEUISUNPROC)FUNC_0("glReplacementCodeuiSUN");
 if(!VAR_3) ++VAR_7;
 VAR_4 = (PFNGLREPLACEMENTCODEUIVSUNPROC)FUNC_0("glReplacementCodeuivSUN");
 if(!VAR_4) ++VAR_7;
 VAR_5 = (PFNGLREPLACEMENTCODEUSSUNPROC)FUNC_0("glReplacementCodeusSUN");
 if(!VAR_5) ++VAR_7;
 VAR_6 = (PFNGLREPLACEMENTCODEUSVSUNPROC)FUNC_0("glReplacementCodeusvSUN");
 if(!VAR_6) ++VAR_7;
 return VAR_7;
}
