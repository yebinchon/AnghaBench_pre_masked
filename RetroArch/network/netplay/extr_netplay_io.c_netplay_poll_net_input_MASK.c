
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int tv_usec; int member_0; } ;
struct netplay_connection {int fd; scalar_t__ active; } ;
struct TYPE_6__ {size_t connections_size; scalar_t__ timeout_cnt; scalar_t__ unread_frame_count; scalar_t__ run_frame_count; int remote_paused; struct netplay_connection* connections; } ;
typedef TYPE_1__ netplay_t ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,struct netplay_connection*,int*) ;
 int FUNC_4 (TYPE_1__*,struct netplay_connection*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int,int *,int *,int *,struct timeval*) ;

int FUNC_7(netplay_t *VAR_2, bool VAR_3)
{
   bool VAR_4 = 0;
   int VAR_5 = 0;
   size_t VAR_6;

   for (VAR_6 = 0; VAR_6 < VAR_2->connections_size; VAR_6++)
   {
      struct netplay_connection *VAR_7 = &VAR_2->connections[VAR_6];
      if (VAR_7->active && VAR_7->fd >= VAR_5)
         VAR_5 = VAR_7->fd + 1;
   }

   if (VAR_5 == 0)
      return 0;

   VAR_2->timeout_cnt = 0;

   do
   {
      VAR_4 = 0;

      VAR_2->timeout_cnt++;


      for (VAR_6 = 0; VAR_6 < VAR_2->connections_size; VAR_6++)
      {
         struct netplay_connection *VAR_8 = &VAR_2->connections[VAR_6];
         if (VAR_8->active && !FUNC_3(VAR_2, VAR_8, &VAR_4))
            FUNC_4(VAR_2, VAR_8);
      }

      if (VAR_3)
      {
         FUNC_5(VAR_2);


         if (VAR_2->unread_frame_count > VAR_2->run_frame_count)
            break;


         if (!VAR_4)
         {
            fd_set VAR_9;
            struct timeval VAR_10 = {0};
            VAR_10.tv_usec = VAR_1 * 1000;

            FUNC_1(&VAR_9);
            for (VAR_6 = 0; VAR_6 < VAR_2->connections_size; VAR_6++)
            {
               struct netplay_connection *VAR_11 = &VAR_2->connections[VAR_6];
               if (VAR_11->active)
                  FUNC_0(VAR_11->fd, &VAR_9);
            }

            if (FUNC_6(VAR_5, &VAR_9, ((void*)0), ((void*)0), &VAR_10) < 0)
               return -1;

            FUNC_2("[netplay] Network is stalling at frame %u, count %u of %d ...\n",
                  VAR_2->run_frame_count, VAR_2->timeout_cnt, VAR_0);

            if (VAR_2->timeout_cnt >= VAR_0 && !VAR_2->remote_paused)
               return -1;
         }
      }
   } while (VAR_4 || VAR_3);

   return 0;
}
