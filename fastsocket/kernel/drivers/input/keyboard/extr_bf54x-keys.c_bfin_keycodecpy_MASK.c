
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned short *VAR_0,
   const unsigned int *VAR_1,
   unsigned short VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_0[VAR_3] = VAR_1[VAR_3] & 0xffff;
  VAR_0[VAR_3 + VAR_2] = VAR_1[VAR_3] >> 16;
 }
}
