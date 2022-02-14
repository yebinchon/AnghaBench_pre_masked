
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct parport_joypad {int buttons; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_2, uint16_t VAR_3)
{
   const struct parport_joypad *VAR_4 = (const struct parport_joypad*)&VAR_1[VAR_2];
   return VAR_3 < VAR_0 && FUNC_0(VAR_4->buttons, VAR_3);
}
