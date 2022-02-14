
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLVARIANTARRAYOBJECTATIPROC ;
typedef scalar_t__ PFNGLUPDATEOBJECTBUFFERATIPROC ;
typedef scalar_t__ PFNGLNEWOBJECTBUFFERATIPROC ;
typedef scalar_t__ PFNGLISOBJECTBUFFERATIPROC ;
typedef scalar_t__ PFNGLGETVARIANTARRAYOBJECTIVATIPROC ;
typedef scalar_t__ PFNGLGETVARIANTARRAYOBJECTFVATIPROC ;
typedef scalar_t__ PFNGLGETOBJECTBUFFERIVATIPROC ;
typedef scalar_t__ PFNGLGETOBJECTBUFFERFVATIPROC ;
typedef scalar_t__ PFNGLGETARRAYOBJECTIVATIPROC ;
typedef scalar_t__ PFNGLGETARRAYOBJECTFVATIPROC ;
typedef scalar_t__ PFNGLFREEOBJECTBUFFERATIPROC ;
typedef scalar_t__ PFNGLARRAYOBJECTATIPROC ;


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
 VAR_0 = (PFNGLARRAYOBJECTATIPROC)FUNC_0("glArrayObjectATI");
 if(!VAR_0) ++VAR_12;
 VAR_1 = (PFNGLFREEOBJECTBUFFERATIPROC)FUNC_0("glFreeObjectBufferATI");
 if(!VAR_1) ++VAR_12;
 VAR_2 = (PFNGLGETARRAYOBJECTFVATIPROC)FUNC_0("glGetArrayObjectfvATI");
 if(!VAR_2) ++VAR_12;
 VAR_3 = (PFNGLGETARRAYOBJECTIVATIPROC)FUNC_0("glGetArrayObjectivATI");
 if(!VAR_3) ++VAR_12;
 VAR_4 = (PFNGLGETOBJECTBUFFERFVATIPROC)FUNC_0("glGetObjectBufferfvATI");
 if(!VAR_4) ++VAR_12;
 VAR_5 = (PFNGLGETOBJECTBUFFERIVATIPROC)FUNC_0("glGetObjectBufferivATI");
 if(!VAR_5) ++VAR_12;
 VAR_6 = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC)FUNC_0("glGetVariantArrayObjectfvATI");
 if(!VAR_6) ++VAR_12;
 VAR_7 = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC)FUNC_0("glGetVariantArrayObjectivATI");
 if(!VAR_7) ++VAR_12;
 VAR_8 = (PFNGLISOBJECTBUFFERATIPROC)FUNC_0("glIsObjectBufferATI");
 if(!VAR_8) ++VAR_12;
 VAR_9 = (PFNGLNEWOBJECTBUFFERATIPROC)FUNC_0("glNewObjectBufferATI");
 if(!VAR_9) ++VAR_12;
 VAR_10 = (PFNGLUPDATEOBJECTBUFFERATIPROC)FUNC_0("glUpdateObjectBufferATI");
 if(!VAR_10) ++VAR_12;
 VAR_11 = (PFNGLVARIANTARRAYOBJECTATIPROC)FUNC_0("glVariantArrayObjectATI");
 if(!VAR_11) ++VAR_12;
 return VAR_12;
}
