
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVERTEXPOINTERVINTELPROC ;
typedef scalar_t__ PFNGLTEXCOORDPOINTERVINTELPROC ;
typedef scalar_t__ PFNGLNORMALPOINTERVINTELPROC ;
typedef scalar_t__ PFNGLCOLORPOINTERVINTELPROC ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1()
{
 int VAR_4 = 0;
 VAR_0 = (PFNGLCOLORPOINTERVINTELPROC)FUNC_0("glColorPointervINTEL");
 if(!VAR_0) ++VAR_4;
 VAR_1 = (PFNGLNORMALPOINTERVINTELPROC)FUNC_0("glNormalPointervINTEL");
 if(!VAR_1) ++VAR_4;
 VAR_2 = (PFNGLTEXCOORDPOINTERVINTELPROC)FUNC_0("glTexCoordPointervINTEL");
 if(!VAR_2) ++VAR_4;
 VAR_3 = (PFNGLVERTEXPOINTERVINTELPROC)FUNC_0("glVertexPointervINTEL");
 if(!VAR_3) ++VAR_4;
 return VAR_4;
}
