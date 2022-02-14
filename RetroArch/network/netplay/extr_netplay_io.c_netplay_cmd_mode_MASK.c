
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct netplay_connection {int dummy; } ;
struct TYPE_8__ {int * netplay_request_devices; } ;
struct TYPE_9__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_10__ {scalar_t__ is_server; struct netplay_connection one_connection; } ;
typedef TYPE_3__ netplay_t ;
typedef enum rarch_netplay_connection_mode { ____Placeholder_rarch_netplay_connection_mode } rarch_netplay_connection_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int ,int *,int,int,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,struct netplay_connection*,int,int*,int) ;
 int FUNC_4 () ;

bool FUNC_5(netplay_t *VAR_4,
   enum rarch_netplay_connection_mode VAR_5)
{
   uint32_t VAR_6, VAR_7;
   uint32_t VAR_8 = 0, *VAR_9 = ((void*)0);
   uint8_t VAR_10;
   settings_t *VAR_11 = FUNC_0();
   struct netplay_connection *VAR_12 = ((void*)0);

   if (!VAR_4->is_server)
      VAR_12 = &VAR_4->one_connection;

   switch (VAR_5)
   {
      case 128:
         VAR_6 = VAR_3;
         break;

      case 129:
         VAR_8 = VAR_2;


      case 130:
         VAR_9 = &VAR_8;


         VAR_10 = FUNC_4();
         VAR_8 |= ((uint32_t) VAR_10) << 16;


         for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
         {
            if (VAR_11->bools.netplay_request_devices[VAR_7])
               VAR_8 |= 1<<VAR_7;
         }

         VAR_8 = FUNC_2(VAR_8);
         VAR_6 = VAR_1;
         break;

      default:
         return 0;
   }

   if (VAR_4->is_server)
   {
      FUNC_1(VAR_4, 0, ((void*)0), VAR_6, VAR_9 ? sizeof(uint32_t) : 0, VAR_9);
      return 1;

   }
   else
   {
      return FUNC_3(VAR_4, VAR_12, VAR_6, VAR_9,
            VAR_9 ? sizeof(uint32_t) : 0);
   }
}
