
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum image_type_enum { ____Placeholder_image_type_enum } image_type_enum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,void*,unsigned int,int,int *,int *) ;

bool FUNC_1(
        char* VAR_5, unsigned VAR_6, enum image_type_enum VAR_7)
{
   if (VAR_2 == 0)
   {
      bool VAR_8;
      VAR_8 = FUNC_0(
               &VAR_3,
               VAR_0,
               (void *) VAR_5, VAR_6, VAR_7,
               &VAR_4, &VAR_1);
      if (VAR_8)
         VAR_2 = 1;
      return VAR_8;
   }
   return 1;
}
