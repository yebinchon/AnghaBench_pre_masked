
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidpad_ps2adapter_data {int buttons; } ;
typedef int input_bits_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, input_bits_t *VAR_1)
{
 struct hidpad_ps2adapter_data *VAR_2 = (struct hidpad_ps2adapter_data*)
      VAR_0;

 if (VAR_2)
   {
  FUNC_1(VAR_1, VAR_2->buttons);
 }
   else
  FUNC_0(VAR_1);
}
