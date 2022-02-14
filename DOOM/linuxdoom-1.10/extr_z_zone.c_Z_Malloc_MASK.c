
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int tag; int id; struct TYPE_3__* next; int * user; struct TYPE_3__* prev; } ;
typedef TYPE_1__ memblock_t ;
typedef int byte ;
struct TYPE_4__ {TYPE_1__* rover; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_3 ;

void*
FUNC_2
( int VAR_4,
  int VAR_5,
  void* VAR_6 )
{
    int VAR_7;
    memblock_t* VAR_8;
    memblock_t* VAR_9;
    memblock_t* VAR_10;
    memblock_t* VAR_11;

    VAR_4 = (VAR_4 + 3) & ~3;







    VAR_4 += sizeof(memblock_t);



    VAR_11 = VAR_3->rover;

    if (!VAR_11->prev->user)
 VAR_11 = VAR_11->prev;

    VAR_9 = VAR_11;
    VAR_8 = VAR_11->prev;

    do
    {
 if (VAR_9 == VAR_8)
 {

     FUNC_0 ("Z_Malloc: failed on allocation of %i bytes", VAR_4);
 }

 if (VAR_9->user)
 {
     if (VAR_9->tag < VAR_1)
     {


  VAR_11 = VAR_9 = VAR_9->next;
     }
     else
     {



  VAR_11 = VAR_11->prev;
  FUNC_1 ((byte *)VAR_9+sizeof(memblock_t));
  VAR_11 = VAR_11->next;
  VAR_9 = VAR_11->next;
     }
 }
 else
     VAR_9 = VAR_9->next;
    } while (VAR_11->user || VAR_11->size < VAR_4);



    VAR_7 = VAR_11->size - VAR_4;

    if (VAR_7 > VAR_0)
    {

 VAR_10 = (memblock_t *) ((byte *)VAR_11 + VAR_4 );
 VAR_10->size = VAR_7;


 VAR_10->user = ((void*)0);
 VAR_10->tag = 0;
 VAR_10->prev = VAR_11;
 VAR_10->next = VAR_11->next;
 VAR_10->next->prev = VAR_10;

 VAR_11->next = VAR_10;
 VAR_11->size = VAR_4;
    }

    if (VAR_6)
    {

 VAR_11->user = VAR_6;
 *(void **)VAR_6 = (void *) ((byte *)VAR_11 + sizeof(memblock_t));
    }
    else
    {
 if (VAR_5 >= VAR_1)
     FUNC_0 ("Z_Malloc: an owner is required for purgable blocks");


 VAR_11->user = (void *)2;
    }
    VAR_11->tag = VAR_5;


    VAR_3->rover = VAR_11->next;

    VAR_11->id = VAR_2;

    return (void *) ((byte *)VAR_11 + sizeof(memblock_t));
}
