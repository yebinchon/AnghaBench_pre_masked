
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int numberOfPages; struct TYPE_5__* cacheEntries; struct TYPE_5__* cache; } ;
typedef TYPE_1__ CACHE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (CACHE* VAR_0)
{
 unsigned int VAR_1;

 FUNC_0(VAR_0);


 for (VAR_1 = 0; VAR_1 < VAR_0->numberOfPages; VAR_1++)
  FUNC_1 (VAR_0->cacheEntries[VAR_1].cache);
 FUNC_1 (VAR_0->cacheEntries);
 FUNC_1 (VAR_0);
}
