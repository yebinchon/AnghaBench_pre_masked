
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong_t ;



__attribute__((used)) static int
FUNC_0(ulong_t VAR_0)
{
 int VAR_1 = 1;

 if (VAR_0 == 0)
  return (0);

 if (VAR_0 & 0xffffffff00000000ul) {
  VAR_1 += 32; VAR_0 >>= 32;
 }

 if (VAR_0 & 0xffff0000) {
  VAR_1 += 16; VAR_0 >>= 16;
 }
 if (VAR_0 & 0xff00) {
  VAR_1 += 8; VAR_0 >>= 8;
 }
 if (VAR_0 & 0xf0) {
  VAR_1 += 4; VAR_0 >>= 4;
 }
 if (VAR_0 & 0xc) {
  VAR_1 += 2; VAR_0 >>= 2;
 }
 if (VAR_0 & 0x2) {
  VAR_1 += 1;
 }
 return (VAR_1);
}
