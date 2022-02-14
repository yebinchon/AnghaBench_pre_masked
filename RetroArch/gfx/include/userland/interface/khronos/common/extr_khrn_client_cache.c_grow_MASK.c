
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {struct TYPE_6__* prev; struct TYPE_6__* next; } ;
struct TYPE_5__ {int server_depth; int client_depth; scalar_t__* tree; scalar_t__* data; TYPE_2__ end; TYPE_2__ start; int map; } ;
typedef TYPE_1__ KHRN_CACHE_T ;
typedef int CLIENT_THREAD_STATE_T ;
typedef TYPE_2__ CACHE_LINK_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int ,scalar_t__**) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__**) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int) ;

__attribute__((used)) static int FUNC_8(CLIENT_THREAD_STATE_T *VAR_3, KHRN_CACHE_T *VAR_4)
{




   uint8_t *VAR_5;
   uint8_t *VAR_6;
   int VAR_7;

   if (VAR_4->server_depth == VAR_4->client_depth) {
      if (VAR_4->server_depth < VAR_1 && FUNC_6(VAR_3))
         VAR_4->server_depth++;
      else
         return 0;
   }

   VAR_5 = (uint8_t *)FUNC_2(1 << (VAR_4->client_depth + 1), "KHRN_CACHE_T.tree");
   VAR_6 = (uint8_t *)FUNC_2(1 << (VAR_4->client_depth + VAR_0), "KHRN_CACHE_T.data");

   if (!VAR_5 || !VAR_6) {
      FUNC_1(VAR_5);
      FUNC_1(VAR_6);
      return 0;
   }





   FUNC_7(VAR_5, VAR_4->client_depth + 1);

   if (VAR_4->client_depth) {
      for (VAR_7 = 1; VAR_7 < 1 << VAR_4->client_depth; VAR_7++)
         VAR_5[VAR_7 ^ 3 << FUNC_0(VAR_7)] = VAR_4->tree[VAR_7];

      VAR_5[1] = VAR_5[3] + (VAR_5[2] == VAR_5[3]);
   }




   {
      uint8_t *VAR_8[2];
   VAR_8[0] = VAR_4->data;
   VAR_8[1] = VAR_6;

      FUNC_3(&VAR_4->map, VAR_2, VAR_8);

      VAR_4->start.next->prev = &VAR_4->start;
      if (VAR_4->start.next != &VAR_4->end)
         VAR_4->start.next = (CACHE_LINK_T *)FUNC_5(VAR_4->start.next, VAR_8);

      VAR_4->end.prev->next = &VAR_4->end;
      if (VAR_4->end.prev != &VAR_4->start)
         VAR_4->end.prev = (CACHE_LINK_T *)FUNC_5(VAR_4->end.prev, VAR_8);
   }





   if (VAR_4->data)
      FUNC_4(VAR_6, VAR_4->data, 1 << (VAR_4->client_depth + VAR_0 - 1));





   FUNC_1(VAR_4->tree);
   FUNC_1(VAR_4->data);

   VAR_4->tree = VAR_5;
   VAR_4->data = VAR_6;

   VAR_4->client_depth++;

   return 1;
}
