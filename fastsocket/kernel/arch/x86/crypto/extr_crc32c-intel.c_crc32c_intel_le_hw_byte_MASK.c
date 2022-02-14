
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, unsigned char const *VAR_1, size_t VAR_2)
{
 while (VAR_2--) {
  __asm__ __volatile__(
   ".byte 0xf2, 0xf, 0x38, 0xf0, 0xf1"
   :"=S"(VAR_0)
   :"0"(VAR_0), "c"(*VAR_1)
  );
  VAR_1++;
 }

 return VAR_0;
}
