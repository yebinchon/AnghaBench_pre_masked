
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum retro_key { ____Placeholder_retro_key } retro_key ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 unsigned int* VAR_1 ;

enum retro_key FUNC_1(unsigned VAR_2)
{
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
   {
      if (VAR_1[VAR_3] != VAR_2)
         continue;

      return (enum retro_key)VAR_3;
   }

   return VAR_0;
}
