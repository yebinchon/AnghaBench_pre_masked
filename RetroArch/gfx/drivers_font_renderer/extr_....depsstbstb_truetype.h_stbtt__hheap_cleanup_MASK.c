
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ stbtt__hheap_chunk ;
struct TYPE_6__ {TYPE_1__* head; } ;
typedef TYPE_2__ stbtt__hheap ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(stbtt__hheap *VAR_0, void *VAR_1)
{
   stbtt__hheap_chunk *VAR_2 = VAR_0->head;
   while (VAR_2) {
      stbtt__hheap_chunk *VAR_3 = VAR_2->next;
      FUNC_0(VAR_2);
      VAR_2 = VAR_3;
   }
}
