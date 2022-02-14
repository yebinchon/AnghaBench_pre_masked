
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(void *VAR_0, unsigned short *VAR_1,
      unsigned short *VAR_2)
{
 *VAR_1 = (unsigned short)((((unsigned long)VAR_0) >> 16) & 0xffff);
 *VAR_2 = (unsigned short)((unsigned long)VAR_0 & 0xffff);
}
