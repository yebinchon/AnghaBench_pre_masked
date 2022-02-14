
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct netplay_connection {int paused; scalar_t__ active; } ;
struct TYPE_4__ {int remote_paused; size_t connections_size; int local_paused; struct netplay_connection* connections; } ;
typedef TYPE_1__ netplay_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct netplay_connection*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(netplay_t *VAR_1, struct netplay_connection *VAR_2)
{
    size_t VAR_3;
    VAR_2->paused = 0;
    VAR_1->remote_paused = 0;
    for (VAR_3 = 0; VAR_3 < VAR_1->connections_size; VAR_3++)
    {
       struct netplay_connection *VAR_4 = &VAR_1->connections[VAR_3];
       if (VAR_4->active && VAR_4->paused)
       {
          VAR_1->remote_paused = 1;
          break;
       }
    }
    if (!VAR_1->remote_paused && !VAR_1->local_paused)
       FUNC_0(VAR_1, VAR_2, VAR_0, ((void*)0), 0);
}
