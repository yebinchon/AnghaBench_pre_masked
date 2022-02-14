
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * next; TYPE_1__* prev; } ;
struct TYPE_5__ {TYPE_2__* next; int * prev; } ;
struct TYPE_7__ {int map; TYPE_2__ end; TYPE_1__ start; scalar_t__ server_depth; scalar_t__ client_depth; int * data; int * tree; } ;
typedef TYPE_3__ KHRN_CACHE_T ;


 int FUNC_0 (int *,int) ;

int FUNC_1(KHRN_CACHE_T *VAR_0)
{
   VAR_0->tree = ((void*)0);
   VAR_0->data = ((void*)0);

   VAR_0->client_depth = 0;
   VAR_0->server_depth = 0;

   VAR_0->start.prev = ((void*)0);
   VAR_0->start.next = &VAR_0->end;
   VAR_0->end.prev = &VAR_0->start;
   VAR_0->end.next = ((void*)0);

   return FUNC_0(&VAR_0->map, 64);
}
