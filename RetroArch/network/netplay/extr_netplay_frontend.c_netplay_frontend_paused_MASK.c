
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct netplay_connection {scalar_t__ mode; int fd; int send_packet_buffer; scalar_t__ active; scalar_t__ paused; } ;
struct TYPE_4__ {int local_paused; size_t connections_size; int * nick; struct netplay_connection* connections; } ;
typedef TYPE_1__ netplay_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_1__*,struct netplay_connection*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(netplay_t *VAR_4, bool VAR_5)
{
   size_t VAR_6;
   uint32_t VAR_7;


   if (VAR_4->local_paused == VAR_5)
      return;

   VAR_4->local_paused = VAR_5;





   VAR_7 = 0;
   for (VAR_6 = 0; VAR_6 < VAR_4->connections_size; VAR_6++)
   {
      struct netplay_connection *VAR_8 = &VAR_4->connections[VAR_6];
      if (VAR_8->active && VAR_8->paused)
         VAR_7++;
   }
   if (VAR_7 > 1)
      return;



   for (VAR_6 = 0; VAR_6 < VAR_4->connections_size; VAR_6++)
   {
      struct netplay_connection *VAR_9 = &VAR_4->connections[VAR_6];
      if (VAR_9->active && VAR_9->mode >= VAR_2)
      {
         if (VAR_5)
            FUNC_1(VAR_4, VAR_9, VAR_0,
               VAR_4->nick, VAR_3);
         else
            FUNC_1(VAR_4, VAR_9, VAR_1,
               ((void*)0), 0);


         FUNC_0(&VAR_9->send_packet_buffer, VAR_9->fd, 1);
      }
   }
}
