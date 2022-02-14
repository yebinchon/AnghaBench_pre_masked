
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int numberOfPages; TYPE_1__* cacheEntries; int disc; } ;
struct TYPE_4__ {int dirty; int cache; int count; int sector; } ;
typedef TYPE_2__ CACHE ;


 int FUNC_0 (int ,int ,int ,int ) ;

bool FUNC_1 (CACHE* VAR_0)
{
   unsigned int VAR_1;

   for (VAR_1 = 0; VAR_1 < VAR_0->numberOfPages; VAR_1++)
   {
      if (VAR_0->cacheEntries[VAR_1].dirty)
      {
         if (!FUNC_0 (VAR_0->disc, VAR_0->cacheEntries[VAR_1].sector, VAR_0->cacheEntries[VAR_1].count, VAR_0->cacheEntries[VAR_1].cache))
            return 0;
      }
      VAR_0->cacheEntries[VAR_1].dirty = 0;
   }

   return 1;
}
