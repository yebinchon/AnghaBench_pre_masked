
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct connect_wii_wiimote_t {int dummy; } ;






 int FUNC_0 (struct connect_wii_wiimote_t*,int*) ;
 int FUNC_1 (struct connect_wii_wiimote_t*,int const,int*,int) ;
 int FUNC_2 (struct connect_wii_wiimote_t*,int*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0,
      uint8_t *VAR_1, uint16_t VAR_2)
{
   struct connect_wii_wiimote_t* VAR_3 = (struct connect_wii_wiimote_t*)VAR_0;
   uint8_t *VAR_4 = VAR_1 + 2;

   if (!VAR_3)
      return;

   switch (VAR_1[1])
   {
      case 131:
         FUNC_2(VAR_3, VAR_4);
         break;
      case 128:
         FUNC_2(VAR_3, VAR_4);
         FUNC_1(VAR_3, 128, VAR_4 + 5,
               ((VAR_4[2] & 0xF0) >> 4) + 1);
         break;
      case 129:
         FUNC_2(VAR_3, VAR_4);
         FUNC_1(VAR_3,129,VAR_4,-1);
         break;
      case 130:
         FUNC_2(VAR_3, VAR_4);
         FUNC_0(VAR_3, VAR_4+2);
         break;
   }
}
