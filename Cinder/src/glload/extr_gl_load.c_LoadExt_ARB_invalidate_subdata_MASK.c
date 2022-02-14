
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFNGLINVALIDATETEXSUBIMAGEPROC ;
typedef scalar_t__ PFNGLINVALIDATETEXIMAGEPROC ;
typedef scalar_t__ PFNGLINVALIDATESUBFRAMEBUFFERPROC ;
typedef scalar_t__ PFNGLINVALIDATEFRAMEBUFFERPROC ;
typedef scalar_t__ PFNGLINVALIDATEBUFFERSUBDATAPROC ;
typedef scalar_t__ PFNGLINVALIDATEBUFFERDATAPROC ;


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
 VAR_0 = (PFNGLINVALIDATEBUFFERDATAPROC)FUNC_0("glInvalidateBufferData");
 if(!VAR_0) ++VAR_6;
 VAR_1 = (PFNGLINVALIDATEBUFFERSUBDATAPROC)FUNC_0("glInvalidateBufferSubData");
 if(!VAR_1) ++VAR_6;
 VAR_2 = (PFNGLINVALIDATEFRAMEBUFFERPROC)FUNC_0("glInvalidateFramebuffer");
 if(!VAR_2) ++VAR_6;
 VAR_3 = (PFNGLINVALIDATESUBFRAMEBUFFERPROC)FUNC_0("glInvalidateSubFramebuffer");
 if(!VAR_3) ++VAR_6;
 VAR_4 = (PFNGLINVALIDATETEXIMAGEPROC)FUNC_0("glInvalidateTexImage");
 if(!VAR_4) ++VAR_6;
 VAR_5 = (PFNGLINVALIDATETEXSUBIMAGEPROC)FUNC_0("glInvalidateTexSubImage");
 if(!VAR_5) ++VAR_6;
 return VAR_6;
}
