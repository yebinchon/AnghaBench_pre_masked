
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLIMAGETRANSFORMPARAMETERIVHPPROC ;
typedef scalar_t__ PFNGLIMAGETRANSFORMPARAMETERIHPPROC ;
typedef scalar_t__ PFNGLIMAGETRANSFORMPARAMETERFVHPPROC ;
typedef scalar_t__ PFNGLIMAGETRANSFORMPARAMETERFHPPROC ;
typedef scalar_t__ PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC ;
typedef scalar_t__ PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC ;


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
 VAR_0 = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)FUNC_0("glGetImageTransformParameterfvHP");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)FUNC_0("glGetImageTransformParameterivHP");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC)FUNC_0("glImageTransformParameterfHP");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)FUNC_0("glImageTransformParameterfvHP");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC)FUNC_0("glImageTransformParameteriHP");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)FUNC_0("glImageTransformParameterivHP");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
