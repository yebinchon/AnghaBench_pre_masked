
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int user; struct TYPE_3__* next; struct TYPE_3__* prev; } ;
typedef TYPE_1__ memblock_t ;
typedef int byte ;
struct TYPE_4__ {TYPE_1__ blocklist; } ;


 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;

void FUNC_1 (void)
{
    memblock_t* VAR_1;

    for (VAR_1 = VAR_0->blocklist.next ; ; VAR_1 = VAR_1->next)
    {
 if (VAR_1->next == &VAR_0->blocklist)
 {

     break;
 }

 if ( (byte *)VAR_1 + VAR_1->size != (byte *)VAR_1->next)
     FUNC_0 ("Z_CheckHeap: block size does not touch the next block\n");

 if ( VAR_1->next->prev != VAR_1)
     FUNC_0 ("Z_CheckHeap: next block doesn't have proper back link\n");

 if (!VAR_1->user && !VAR_1->next->user)
     FUNC_0 ("Z_CheckHeap: two consecutive free blocks\n");
    }
}
