
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag; int user; struct TYPE_3__* next; } ;
typedef TYPE_1__ memblock_t ;
typedef int byte ;
struct TYPE_4__ {TYPE_1__ blocklist; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* VAR_0 ;

void
FUNC_1
( int VAR_1,
  int VAR_2 )
{
    memblock_t* VAR_3;
    memblock_t* VAR_4;

    for (VAR_3 = VAR_0->blocklist.next ;
  VAR_3 != &VAR_0->blocklist ;
  VAR_3 = VAR_4)
    {

 VAR_4 = VAR_3->next;


 if (!VAR_3->user)
     continue;

 if (VAR_3->tag >= VAR_1 && VAR_3->tag <= VAR_2)
     FUNC_0 ( (byte *)VAR_3+sizeof(memblock_t));
    }
}
