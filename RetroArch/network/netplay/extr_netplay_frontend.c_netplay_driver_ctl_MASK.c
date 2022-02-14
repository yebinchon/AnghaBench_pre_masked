
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int retro_ctx_serialize_info_t ;
struct TYPE_13__ {int is_replay; int is_connected; int nat_traversal_task_oustanding; int desync; } ;
typedef TYPE_1__ netplay_t ;
typedef enum rarch_netplay_ctl_state { ____Placeholder_rarch_netplay_ctl_state } rarch_netplay_ctl_state ;
struct TYPE_14__ {int status; } ;
typedef TYPE_2__ discord_userdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

bool FUNC_9(enum rarch_netplay_ctl_state VAR_7, void *VAR_8)
{
   netplay_t *VAR_9 = VAR_4;
   bool VAR_10 = 1;

   if (VAR_3)
      return 1;
   VAR_3 = 1;

   if (!VAR_9)
   {
      switch (VAR_7)
      {
         case 142:
            VAR_5 = 1;
            VAR_6 = 0;
            goto done;

         case 143:
            VAR_5 = 1;
            VAR_6 = 1;
            break;

         case 145:
            VAR_5 = 0;
            goto done;

         case 137:
            VAR_10 = VAR_5;
            goto done;

         case 136:
         case 138:
            VAR_10 = 0;
            goto done;

         case 135:
            VAR_10 = VAR_5 && !VAR_6;
            goto done;

         case 139:
            VAR_10 = 0;
            goto done;

         default:
            goto done;
      }
   }

   switch (VAR_7)
   {
      case 142:
      case 143:
      case 138:
         goto done;
      case 145:
         VAR_10 = 0;
         goto done;
      case 137:
         goto done;
      case 136:
         VAR_10 = VAR_9->is_replay;
         goto done;
      case 135:
         VAR_10 = VAR_5 && !VAR_6;
         goto done;
      case 139:
         VAR_10 = VAR_9->is_connected;
         goto done;
      case 131:
         FUNC_6(VAR_9);
         break;
      case 130:
         VAR_10 = FUNC_7(VAR_9);
         goto done;
      case 140:
         FUNC_8(VAR_9);
         break;
      case 132:
         FUNC_4(VAR_9, 1);
         break;
      case 128:
         FUNC_4(VAR_9, 0);
         break;
      case 134:
         FUNC_5(VAR_9, (retro_ctx_serialize_info_t*)VAR_8, 1);
         break;
      case 129:
         FUNC_2(VAR_9);
         break;
      case 144:
         VAR_10 = FUNC_3(VAR_9);
         goto done;
      case 141:
         VAR_9->nat_traversal_task_oustanding = 0;

         FUNC_1(VAR_9);

         goto done;
      case 146:
         VAR_9->desync++;
         break;
      case 147:
         if (VAR_9->desync)
         {
            VAR_9->desync--;
            if (!VAR_9->desync)
               FUNC_5(VAR_9, ((void*)0), 1);
         }
         break;
      default:
      case 133:
         VAR_10 = 0;
   }

done:
   VAR_3 = 0;
   return VAR_10;
}
