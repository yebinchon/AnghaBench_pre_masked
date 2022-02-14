
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC ;
typedef scalar_t__ PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC ;
typedef scalar_t__ PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_3 = 0;
 VAR_0 = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)FUNC_0("glDrawArraysInstancedBaseInstance");
 if(!VAR_0) ++VAR_3;
 VAR_1 = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)FUNC_0("glDrawElementsInstancedBaseInstance");
 if(!VAR_1) ++VAR_3;
 VAR_2 = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)FUNC_0("glDrawElementsInstancedBaseVertexBaseInstance");
 if(!VAR_2) ++VAR_3;
 return VAR_3;
}
