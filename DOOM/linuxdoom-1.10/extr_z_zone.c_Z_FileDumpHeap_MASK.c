
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int tag; int user; struct TYPE_3__* next; struct TYPE_3__* prev; } ;
typedef TYPE_1__ memblock_t ;
typedef int byte ;
struct TYPE_4__ {int size; TYPE_1__ blocklist; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 TYPE_2__* VAR_0 ;

void FUNC_1 (FILE* VAR_1)
{
    memblock_t* VAR_2;

    FUNC_0 (VAR_1,"zone size: %i  location: %p\n",VAR_0->size,VAR_0);

    for (VAR_2 = VAR_0->blocklist.next ; ; VAR_2 = VAR_2->next)
    {
 FUNC_0 (VAR_1,"block:%p    size:%7i    user:%p    tag:%3i\n",
   VAR_2, VAR_2->size, VAR_2->user, VAR_2->tag);

 if (VAR_2->next == &VAR_0->blocklist)
 {

     break;
 }

 if ( (byte *)VAR_2 + VAR_2->size != (byte *)VAR_2->next)
     FUNC_0 (VAR_1,"ERROR: block size does not touch the next block\n");

 if ( VAR_2->next->prev != VAR_2)
     FUNC_0 (VAR_1,"ERROR: next block doesn't have proper back link\n");

 if (!VAR_2->user && !VAR_2->next->user)
     FUNC_0 (VAR_1,"ERROR: two consecutive free blocks\n");
    }
}
