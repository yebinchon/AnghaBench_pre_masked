
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_joypad {int buttons; } ;
typedef int input_bits_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(unsigned VAR_1, input_bits_t *VAR_2)
{
 const struct parport_joypad *VAR_3 = (const struct parport_joypad*)
      &VAR_0[VAR_1];

 if (VAR_3)
   {
  FUNC_1(VAR_2, VAR_3->buttons);
 }
   else
  FUNC_0(VAR_2);
}
