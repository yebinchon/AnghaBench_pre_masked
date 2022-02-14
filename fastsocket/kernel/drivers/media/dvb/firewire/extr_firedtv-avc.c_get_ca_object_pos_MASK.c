
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct avc_response_frame {int* operand; } ;



__attribute__((used)) static int FUNC_0(struct avc_response_frame *VAR_0)
{
 int VAR_1 = 1;


 if (VAR_0->operand[7] & 0x80)
  VAR_1 = (VAR_0->operand[7] & 0x7f) + 1;
 return VAR_1 + 7;
}
