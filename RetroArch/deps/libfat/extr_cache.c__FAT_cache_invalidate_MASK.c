
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int numberOfPages; TYPE_1__* cacheEntries; } ;
struct TYPE_5__ {int dirty; scalar_t__ count; scalar_t__ last_access; int sector; } ;
typedef TYPE_2__ CACHE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1 (CACHE* VAR_1)
{
 unsigned int VAR_2;
 FUNC_0(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1->numberOfPages; VAR_2++)
   {
  VAR_1->cacheEntries[VAR_2].sector = VAR_0;
  VAR_1->cacheEntries[VAR_2].last_access = 0;
  VAR_1->cacheEntries[VAR_2].count = 0;
  VAR_1->cacheEntries[VAR_2].dirty = 0;
 }
}
