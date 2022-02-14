
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



__attribute__((used)) static inline void FUNC_0(int VAR_1,
         unsigned int *VAR_2,
         unsigned int *VAR_3,
         unsigned int *VAR_4,
         int VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8;

 for (VAR_6 = 2; VAR_6 <= (1 << 16); VAR_6 <<= 1) {
  VAR_8 = VAR_1 * VAR_6;
  VAR_5 &= VAR_0;
  switch (VAR_5) {
  case 129:
  default:
   VAR_7 = (*VAR_4 + VAR_8 / 2) / VAR_8;
   break;
  case 130:
   VAR_7 = (*VAR_4) / VAR_8;
   break;
  case 128:
   VAR_7 = (*VAR_4 + VAR_8 - 1) / VAR_8;
   break;
  }
  if (VAR_7 < 2)
   VAR_7 = 2;
  if (VAR_7 <= 65536) {
   *VAR_4 = VAR_7 * VAR_8;
   *VAR_2 = VAR_6 & 0xffff;
   *VAR_3 = VAR_7 & 0xffff;
   return;
  }
 }


 VAR_6 = 0x10000;
 VAR_7 = 0x10000;
 *VAR_4 = VAR_6 * VAR_7 * VAR_1;
 *VAR_2 = VAR_6 & 0xffff;
 *VAR_3 = VAR_7 & 0xffff;
}
