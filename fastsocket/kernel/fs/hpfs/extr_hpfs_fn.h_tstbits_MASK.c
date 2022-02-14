
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned FUNC_0(unsigned *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 int VAR_3;
 if ((VAR_1 >= 0x4000) || (VAR_1 + VAR_2 - 1 >= 0x4000)) return VAR_2;
 if (!((VAR_0[(VAR_1 & 0x3fff) >> 5] >> (VAR_1 & 0x1f)) & 1)) return 1;
 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++)
  if ( !((VAR_0[((VAR_1+VAR_3) & 0x3fff) >> 5] >> ((VAR_1+VAR_3) & 0x1f)) & 1))
   return VAR_3 + 1;
 return 0;
}
