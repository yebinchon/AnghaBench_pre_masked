
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(u64 VAR_5)
{
 u64 VAR_6, VAR_7;
 int VAR_8, VAR_9 = 0;





 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_6 = VAR_5 & (VAR_2
    << (VAR_0 - VAR_8)
    * VAR_1);
  VAR_6 = (VAR_6 >> ((VAR_0 - VAR_8)
     * VAR_1)) & ~1ULL;
  VAR_7 = VAR_5 & (VAR_3
    << (VAR_4
        - (VAR_8 * VAR_1)));
  VAR_7 = VAR_7 >> (VAR_4
    - (VAR_8 * VAR_1));

  switch (VAR_6 >> 4) {
  case 2:
   VAR_9 |= (VAR_8 == 1 || VAR_8 == 3) << VAR_8;
   break;
  case 3:
   if (VAR_6 == 0x3c) {
    VAR_9 |= (VAR_8 == 0) << VAR_8;
    break;
   }

   if (VAR_6 == 0x3e) {
    VAR_9 |= (VAR_8 != 1) << VAR_8;
    break;
   }

   VAR_9 |= 1 << VAR_8;
   break;
  case 4:
  case 5:
   VAR_9 |= (VAR_7 == 0xd) << VAR_8;
   break;
  case 6:
   if (VAR_6 == 0x64)
    VAR_9 |= (VAR_8 >= 2) << VAR_8;
   break;
  case 8:
   VAR_9 |= (VAR_7 == 0xd) << VAR_8;
   break;
  }
 }
 return VAR_9;
}
