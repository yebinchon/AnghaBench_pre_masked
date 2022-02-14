
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;



__attribute__((used)) static inline u32 FUNC_0(unsigned char *VAR_0, int VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = 0xffffffff;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_2 ^= VAR_0[VAR_4];

  for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
   VAR_3 = VAR_2 & 0x01;

   VAR_2 >>= 1;

   if (VAR_3)
    VAR_2 ^= 0xedb88320;
  }
 }

 return ~VAR_2;
}
