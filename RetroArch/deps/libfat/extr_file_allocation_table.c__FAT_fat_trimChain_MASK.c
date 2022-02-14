
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int PARTITION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;

uint32_t FUNC_3 (PARTITION* VAR_2, uint32_t VAR_3, unsigned int VAR_4)
{
   uint32_t VAR_5;

   if (VAR_4 == 0)
   {

      FUNC_0 (VAR_2, VAR_3);
      return VAR_1;
   }


   VAR_4--;
   VAR_5 = FUNC_1 (VAR_2, VAR_3);
   while ((VAR_4 > 0) && (VAR_5 != VAR_1) && (VAR_5 != VAR_0))
   {
      VAR_4--;
      VAR_3 = VAR_5;
      VAR_5 = FUNC_1 (VAR_2, VAR_3);
   }


   if (VAR_5 != VAR_1 && VAR_5 != VAR_0)
      FUNC_0 (VAR_2, VAR_5);


   FUNC_2 (VAR_2, VAR_3, VAR_0);

   return VAR_3;
}
