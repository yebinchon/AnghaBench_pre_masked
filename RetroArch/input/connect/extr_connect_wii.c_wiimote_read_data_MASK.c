
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct connect_wii_wiimote_t {int dummy; } ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct connect_wii_wiimote_t*) ;
 int FUNC_4 (struct connect_wii_wiimote_t*,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct connect_wii_wiimote_t* VAR_1, uint32_t VAR_2,
      uint16_t VAR_3)
{
   uint8_t VAR_4[6] = {0};
   int32_t *VAR_5 = (int32_t*)VAR_4;
   int16_t *VAR_6 = (int16_t*)(VAR_4 + 4);



   if (!VAR_1 || !FUNC_3(VAR_1) || !VAR_3)
      return 0;


   *VAR_5 = FUNC_2(VAR_2);
   *VAR_6 = FUNC_1(VAR_3);




   FUNC_4(VAR_1, VAR_0, VAR_4, 6);

   return 1;
}
