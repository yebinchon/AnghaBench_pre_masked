
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag; int size; int user; struct TYPE_3__* next; struct TYPE_3__* prev; } ;
typedef TYPE_1__ memblock_t ;
typedef int byte ;
struct TYPE_4__ {int size; TYPE_1__ blocklist; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1
( int VAR_1,
  int VAR_2 )
{
    memblock_t* VAR_3;

    FUNC_0 ("zone size: %i  location: %p\n",
     VAR_0->size,VAR_0);

    FUNC_0 ("tag range: %i to %i\n",
     VAR_1, VAR_2);

    for (VAR_3 = VAR_0->blocklist.next ; ; VAR_3 = VAR_3->next)
    {
 if (VAR_3->tag >= VAR_1 && VAR_3->tag <= VAR_2)
     FUNC_0 ("block:%p    size:%7i    user:%p    tag:%3i\n",
      VAR_3, VAR_3->size, VAR_3->user, VAR_3->tag);

 if (VAR_3->next == &VAR_0->blocklist)
 {

     break;
 }

 if ( (byte *)VAR_3 + VAR_3->size != (byte *)VAR_3->next)
     FUNC_0 ("ERROR: block size does not touch the next block\n");

 if ( VAR_3->next->prev != VAR_3)
     FUNC_0 ("ERROR: next block doesn't have proper back link\n");

 if (!VAR_3->user && !VAR_3->next->user)
     FUNC_0 ("ERROR: two consecutive free blocks\n");
    }
}
