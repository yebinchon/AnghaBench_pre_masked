
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned char
FUNC_0(unsigned char VAR_0, int VAR_1)
{
 unsigned char VAR_2 = VAR_0;
 unsigned char VAR_3 = 128;
 int VAR_4;
 int VAR_5;
 int VAR_6 = (8 / VAR_1);

 VAR_0 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   if (VAR_2 & (VAR_3 >> VAR_5))
    VAR_0 |= VAR_3 >> (VAR_1 - VAR_5 - 1);
  }
  VAR_3 >>= VAR_1;
 }
 return VAR_0;
}
