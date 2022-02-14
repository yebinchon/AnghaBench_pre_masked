
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; int tag; scalar_t__ user; } ;
typedef TYPE_1__ memblock_t ;
typedef int byte ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_1
( void* VAR_2,
  int VAR_3 )
{
    memblock_t* VAR_4;

    VAR_4 = (memblock_t *) ( (byte *)VAR_2 - sizeof(memblock_t));

    if (VAR_4->id != VAR_1)
 FUNC_0 ("Z_ChangeTag: freed a pointer without ZONEID");

    if (VAR_3 >= VAR_0 && (unsigned)VAR_4->user < 0x100)
 FUNC_0 ("Z_ChangeTag: an owner is required for purgable blocks");

    VAR_4->tag = VAR_3;
}
