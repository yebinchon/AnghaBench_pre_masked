
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct connect_wii_wiimote_t {int btns; } ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct connect_wii_wiimote_t* VAR_1, uint8_t* VAR_2)
{

   int16_t *VAR_3 = (int16_t*)VAR_2;
   int16_t VAR_4 = FUNC_0(*VAR_3) & VAR_0;

   VAR_1->btns = VAR_4;
}
