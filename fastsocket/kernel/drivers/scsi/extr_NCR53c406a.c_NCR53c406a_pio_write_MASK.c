
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned char*,int) ;

__attribute__((used)) static __inline__ int FUNC_3(unsigned char *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 VAR_2;
 while (VAR_5 && !(VAR_6 & 0x40)) {
  VAR_6 = FUNC_0(VAR_1);

  if (VAR_6 & 0x80)
   return 0;

  switch (VAR_6 & 0x1e) {
  case 0x10:
   VAR_7 = 128;
   break;
  case 0x0:
   VAR_7 = 84;
   break;
  case 0x8:
   VAR_7 = 42;
   break;
  case 0xc:
   VAR_7 = 1;
   break;
  default:
  case 0xe:
   VAR_7 = 0;
   break;
  }

  if (VAR_7) {
   if (VAR_7 > VAR_5)
    VAR_7 = VAR_5;

   if (VAR_3 && VAR_7 > 3) {
    FUNC_2(VAR_0, VAR_4, VAR_7 >> 2);
    VAR_4 += VAR_7 & 0xfc;
    VAR_5 -= VAR_7 & 0xfc;
   } else {
    while (VAR_7--) {
     FUNC_1(*VAR_4++, VAR_0);
     VAR_5--;
    }
   }
  }
 }
 return 0;
}
