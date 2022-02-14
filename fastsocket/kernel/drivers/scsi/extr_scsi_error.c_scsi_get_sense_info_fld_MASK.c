
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int* FUNC_0 (int const*,int,int ) ;

int FUNC_1(const u8 * VAR_0, int VAR_1,
       u64 * VAR_2)
{
 int VAR_3;
 const u8 * VAR_4;
 u64 VAR_5;

 if (VAR_1 < 7)
  return 0;
 switch (VAR_0[0] & 0x7f) {
 case 0x70:
 case 0x71:
  if (VAR_0[0] & 0x80) {
   *VAR_2 = (VAR_0[3] << 24) +
        (VAR_0[4] << 16) +
        (VAR_0[5] << 8) + VAR_0[6];
   return 1;
  } else
   return 0;
 case 0x72:
 case 0x73:
  VAR_4 = FUNC_0(VAR_0, VAR_1,
        0 );
  if (VAR_4 && (0xa == VAR_4[1])) {
   VAR_5 = 0;
   for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
    if (VAR_3 > 0)
     VAR_5 <<= 8;
    VAR_5 |= VAR_4[4 + VAR_3];
   }
   *VAR_2 = VAR_5;
   return 1;
  } else
   return 0;
 default:
  return 0;
 }
}
