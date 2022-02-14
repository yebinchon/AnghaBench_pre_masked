
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef enum frontend_powerstate { ____Placeholder_frontend_powerstate } frontend_powerstate ;
typedef int Result ;
typedef int ChargerType ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int*) ;
 int VAR_4 ;

__attribute__((used)) static enum frontend_powerstate
FUNC_3(int *VAR_5, int *VAR_6)
{
   uint32_t VAR_7;
   ChargerType VAR_8;
   Result VAR_9;
   if (!VAR_4)
      return VAR_2;

   VAR_9 = FUNC_1(&VAR_7);
   if (!FUNC_0(VAR_9))
      return VAR_2;

   VAR_9 = FUNC_2(&VAR_8);
   if (!FUNC_0(VAR_9))
      return VAR_2;

   *VAR_6 = (int)VAR_7;

   if (*VAR_6 >= 100)
      return VAR_0;

   switch (VAR_8)
   {
      case 129:
      case 128:
         return VAR_1;
      default:
         break;
   }

   return VAR_3;
}
