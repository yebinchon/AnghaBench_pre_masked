
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input_bits_t ;
typedef int cocoa_input_data_t ;


 scalar_t__ FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_1(cocoa_input_data_t *VAR_0,
   input_bits_t * VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;

   if (VAR_1)
      for (VAR_3 = 0; VAR_3 < 256; VAR_3++)
         if (FUNC_0(VAR_1,VAR_3))
            return VAR_3;
   return -1;
}
