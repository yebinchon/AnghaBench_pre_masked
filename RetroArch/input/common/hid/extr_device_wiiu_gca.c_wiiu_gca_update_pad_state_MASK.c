
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int data; TYPE_1__* iface; } ;
typedef TYPE_2__ joypad_connection_t ;
struct TYPE_10__ {unsigned char* device_state; TYPE_2__** pads; int online; } ;
typedef TYPE_3__ hid_wiiu_gca_instance_t ;
struct TYPE_8__ {int (* packet_handler ) (int ,unsigned char*,int) ;} ;


 unsigned char VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_5(hid_wiiu_gca_instance_t *VAR_2)
{
   int VAR_3, VAR_4;
   unsigned char VAR_5;

   if(!VAR_2 || !VAR_2->online)
      return;

   joypad_connection_t *VAR_6;


   for (VAR_3 = 1; VAR_3 < 37; VAR_3 += 9)
   {
      VAR_4 = VAR_3 / 9;
      VAR_6 = VAR_2->pads[VAR_4];

      VAR_5 = VAR_2->device_state[VAR_3];

      if(VAR_5 > VAR_0)
      {
         if(VAR_6 == ((void*)0))
         {
            FUNC_1("[gca]: Gamepad at port %d connected.\n", VAR_4+1);
            VAR_2->pads[VAR_4] = FUNC_2(VAR_2, &VAR_1);
            VAR_6 = VAR_2->pads[VAR_4];
            if(VAR_6 == ((void*)0))
            {
               FUNC_0("[gca]: Failed to register pad.\n");
               break;
            }
         }

         VAR_6->iface->packet_handler(VAR_6->data, &VAR_2->device_state[VAR_3], 9);
      } else {
         if(VAR_6 != ((void*)0)) {
            FUNC_1("[gca]: Gamepad at port %d disconnected.\n", VAR_4+1);
            FUNC_4(VAR_2, VAR_4);
         }
      }
   }
}
