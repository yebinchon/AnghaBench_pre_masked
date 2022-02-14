
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct netplay_connection {scalar_t__ mode; scalar_t__ active; } ;
struct TYPE_5__ {size_t connections_size; struct netplay_connection* connections; } ;
typedef TYPE_1__ netplay_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct netplay_connection*) ;
 int FUNC_1 (TYPE_1__*,struct netplay_connection*,int ,void const*,size_t) ;

void FUNC_2(netplay_t *VAR_1,
   struct netplay_connection *VAR_2, uint32_t VAR_3, const void *VAR_4,
   size_t VAR_5)
{
   size_t VAR_6;
   for (VAR_6 = 0; VAR_6 < VAR_1->connections_size; VAR_6++)
   {
      struct netplay_connection *VAR_7 = &VAR_1->connections[VAR_6];
      if (VAR_7 == VAR_2)
         continue;
      if (VAR_7->active && VAR_7->mode >= VAR_0)
      {
         if (!FUNC_1(VAR_1, VAR_7, VAR_3, VAR_4, VAR_5))
            FUNC_0(VAR_1, VAR_7);
      }
   }
}
