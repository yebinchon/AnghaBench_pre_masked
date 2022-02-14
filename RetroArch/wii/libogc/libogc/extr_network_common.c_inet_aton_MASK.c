
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
struct in_addr {int s_addr; } ;
typedef int s8_t ;
typedef int s32_t ;
typedef int s16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;

s8_t
 FUNC_6(const char *VAR_0, struct in_addr *VAR_1)
 {
     u32_t VAR_2;
     s32_t VAR_3, VAR_4;
     char VAR_5;
     u32_t VAR_6[4];
     u32_t* VAR_7 = VAR_6;

     VAR_5 = *VAR_0;
     for (;;) {





         if (!FUNC_2(VAR_5))
             return (0);
         VAR_2 = 0; VAR_3 = 10;
         if (VAR_5 == '0') {
             VAR_5 = *++VAR_0;
             if (VAR_5 == 'x' || VAR_5 == 'X')
                 VAR_3 = 16, VAR_5 = *++VAR_0;
             else
                 VAR_3 = 8;
         }
         for (;;) {
             if (FUNC_2(VAR_5)) {
                 VAR_2 = (VAR_2 * VAR_3) + (s16_t)(VAR_5 - '0');
                 VAR_5 = *++VAR_0;
             } else if (VAR_3 == 16 && FUNC_5(VAR_5)) {
                 VAR_2 = (VAR_2 << 4) |
                     (s16_t)(VAR_5 + 10 - (FUNC_3(VAR_5) ? 'a' : 'A'));
                 VAR_5 = *++VAR_0;
             } else
             break;
         }
         if (VAR_5 == '.') {






             if (VAR_7 >= VAR_6 + 3)
                 return (0);
             *VAR_7++ = VAR_2;
             VAR_5 = *++VAR_0;
         } else
             break;
     }



     if (VAR_5 != '\0' && (!FUNC_1(VAR_5) || !FUNC_4(VAR_5)))
         return (0);




     VAR_4 = VAR_7 - VAR_6 + 1;
     switch (VAR_4) {

     case 0:
         return (0);

     case 1:
         break;

     case 2:
         if (VAR_2 > 0xffffff)
             return (0);
         VAR_2 |= VAR_6[0] << 24;
         break;

     case 3:
         if (VAR_2 > 0xffff)
             return (0);
         VAR_2 |= (VAR_6[0] << 24) | (VAR_6[1] << 16);
         break;

     case 4:
         if (VAR_2 > 0xff)
             return (0);
         VAR_2 |= (VAR_6[0] << 24) | (VAR_6[1] << 16) | (VAR_6[2] << 8);
         break;
     }
     if (VAR_1)
         VAR_1->s_addr = FUNC_0(VAR_2);
     return (1);
 }
