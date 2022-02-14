
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct netplay_connection {scalar_t__ mode; scalar_t__ delay_frame; int nick; scalar_t__ active; } ;
typedef int payload ;
struct TYPE_4__ {unsigned int connections_size; scalar_t__ self_frame_count; int device_share_modes; struct netplay_connection* connections; } ;
typedef TYPE_1__ netplay_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,struct netplay_connection*,int ,scalar_t__*,int) ;
 int FUNC_3 (char*,int ,int ) ;

void FUNC_4(netplay_t *VAR_4)
{
   unsigned VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_4->connections_size; VAR_5++)
   {
      uint32_t VAR_6 = (uint32_t)(VAR_5 + 1);
      struct netplay_connection *VAR_7 = &VAR_4->connections[VAR_5];

      if ((VAR_7->active || VAR_7->mode == VAR_1) &&
          VAR_7->delay_frame &&
          VAR_7->delay_frame <= VAR_4->self_frame_count)
      {

         uint32_t VAR_8[15] = {0};
         VAR_8[0] = FUNC_0(VAR_7->delay_frame);
         VAR_8[1] = FUNC_0(VAR_6);
         VAR_8[2] = FUNC_0(0);

         FUNC_1(VAR_8 + 3, VAR_4->device_share_modes, sizeof(VAR_4->device_share_modes));
         FUNC_3((char *) (VAR_8 + 7), VAR_7->nick, VAR_3);


         if (VAR_7->mode == VAR_1)
            VAR_7->mode = VAR_2;


         FUNC_2(VAR_4, VAR_7, VAR_0, VAR_8, sizeof(VAR_8));


         VAR_7->delay_frame = 0;
      }
   }
}
