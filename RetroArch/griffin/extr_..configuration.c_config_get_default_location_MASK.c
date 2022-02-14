
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum location_driver_enum { ____Placeholder_location_driver_enum } location_driver_enum ;




 int VAR_0 ;


const char *FUNC_0(void)
{
   enum location_driver_enum VAR_1 = VAR_0;

   switch (VAR_1)
   {
      case 130:
         return "android";
      case 129:
         return "corelocation";
      case 128:
         break;
   }

   return "null";
}
