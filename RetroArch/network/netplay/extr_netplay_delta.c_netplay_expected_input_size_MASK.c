
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* config_devices; } ;
typedef TYPE_1__ netplay_t ;


 int VAR_0 ;




 int VAR_1 ;


uint32_t FUNC_0(netplay_t *VAR_2, uint32_t VAR_3)
{
   uint32_t VAR_4 = 0, VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   {
      if (!(VAR_3 & (1<<VAR_5)))
         continue;

      switch (VAR_2->config_devices[VAR_5]&VAR_1)
      {


         case 131:
            VAR_4 += 1;
            break;
         case 128:
            VAR_4 += 2;
            break;
         case 130:
            VAR_4 += 5;
            break;
         case 129:
            VAR_4 += 2;
            break;
         case 132:
            VAR_4 += 3;
            break;
         default:
            break;
      }
   }

   return VAR_4;
}
