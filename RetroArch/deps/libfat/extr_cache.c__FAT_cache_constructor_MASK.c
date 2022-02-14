
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sec_t ;
struct TYPE_6__ {unsigned int numberOfPages; unsigned int sectorsPerPage; unsigned int bytesPerSector; TYPE_1__* cacheEntries; int endOfPartition; int const* disc; } ;
struct TYPE_5__ {int dirty; int * cache; scalar_t__ last_access; scalar_t__ count; int sector; } ;
typedef int DISC_INTERFACE ;
typedef TYPE_1__ CACHE_ENTRY ;
typedef TYPE_2__ CACHE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;

CACHE* FUNC_3 (unsigned int VAR_1, unsigned int VAR_2, const DISC_INTERFACE* VAR_3, sec_t VAR_4, unsigned int VAR_5)
{
   CACHE* VAR_6;
   unsigned int VAR_7;
   CACHE_ENTRY* VAR_8;

   if (VAR_1 < 2)
      VAR_1 = 2;

   if (VAR_2 < 8)
      VAR_2 = 8;

   VAR_6 = (CACHE*) FUNC_1 (sizeof(CACHE));
   if (VAR_6 == ((void*)0))
      return ((void*)0);

   VAR_6->disc = VAR_3;
   VAR_6->endOfPartition = VAR_4;
   VAR_6->numberOfPages = VAR_1;
   VAR_6->sectorsPerPage = VAR_2;
   VAR_6->bytesPerSector = VAR_5;


   VAR_8 = (CACHE_ENTRY*) FUNC_1 ( sizeof(CACHE_ENTRY) * VAR_1);
   if (VAR_8 == ((void*)0))
   {
      FUNC_2 (VAR_6);
      return ((void*)0);
   }

   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   {
      VAR_8[VAR_7].sector = VAR_0;
      VAR_8[VAR_7].count = 0;
      VAR_8[VAR_7].last_access = 0;
      VAR_8[VAR_7].dirty = 0;
      VAR_8[VAR_7].cache = (uint8_t*) FUNC_0 ( VAR_2 * VAR_5 );
   }

   VAR_6->cacheEntries = VAR_8;

   return VAR_6;
}
