
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLFOGCOORDPOINTEREXTPROC ;
typedef scalar_t__ PFNGLFOGCOORDFVEXTPROC ;
typedef scalar_t__ PFNGLFOGCOORDFEXTPROC ;
typedef scalar_t__ PFNGLFOGCOORDDVEXTPROC ;
typedef scalar_t__ PFNGLFOGCOORDDEXTPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_5 = 0;
 VAR_0 = (PFNGLFOGCOORDPOINTEREXTPROC)FUNC_0("glFogCoordPointerEXT");
 if(!VAR_0) ++VAR_5;
 VAR_1 = (PFNGLFOGCOORDDEXTPROC)FUNC_0("glFogCoorddEXT");
 if(!VAR_1) ++VAR_5;
 VAR_2 = (PFNGLFOGCOORDDVEXTPROC)FUNC_0("glFogCoorddvEXT");
 if(!VAR_2) ++VAR_5;
 VAR_3 = (PFNGLFOGCOORDFEXTPROC)FUNC_0("glFogCoordfEXT");
 if(!VAR_3) ++VAR_5;
 VAR_4 = (PFNGLFOGCOORDFVEXTPROC)FUNC_0("glFogCoordfvEXT");
 if(!VAR_4) ++VAR_5;
 return VAR_5;
}
