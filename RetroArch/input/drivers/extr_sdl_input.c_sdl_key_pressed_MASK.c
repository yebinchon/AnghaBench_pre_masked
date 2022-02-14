
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;


 int* FUNC_0 (int*) ;
 int* FUNC_1 (int*) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static bool FUNC_3(int VAR_1)
{
   int VAR_2;




   const uint8_t *VAR_3 = FUNC_0(&VAR_2);
   unsigned VAR_4 = VAR_0[(enum retro_key)VAR_1];


   if (VAR_4 >= (unsigned)VAR_2)
      return 0;

   return VAR_3[VAR_4];
}
