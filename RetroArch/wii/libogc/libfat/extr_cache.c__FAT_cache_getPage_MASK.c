
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int sec_t ;
struct TYPE_6__ {unsigned int numberOfPages; unsigned int sectorsPerPage; unsigned int endOfPartition; int disc; TYPE_1__* cacheEntries; } ;
struct TYPE_5__ {unsigned int sector; unsigned int count; unsigned int last_access; int dirty; int cache; } ;
typedef TYPE_1__ CACHE_ENTRY ;
typedef TYPE_2__ CACHE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int ,unsigned int,unsigned int,int ) ;
 void* FUNC_2 () ;

__attribute__((used)) static CACHE_ENTRY* FUNC_3(CACHE *VAR_2,sec_t VAR_3)
{
 unsigned int VAR_4;
 CACHE_ENTRY* VAR_5 = VAR_2->cacheEntries;
 unsigned int VAR_6 = VAR_2->numberOfPages;
 unsigned int VAR_7 = VAR_2->sectorsPerPage;

 bool VAR_8 = 0;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = VAR_1;

 for(VAR_4=0;VAR_4<VAR_6;VAR_4++) {
  if(VAR_3>=VAR_5[VAR_4].sector && VAR_3<(VAR_5[VAR_4].sector + VAR_5[VAR_4].count)) {
   VAR_5[VAR_4].last_access = FUNC_2();
   return &(VAR_5[VAR_4]);
  }

  if(VAR_8==0 && (VAR_5[VAR_4].sector==VAR_0 || VAR_5[VAR_4].last_access<VAR_10)) {
   if(VAR_5[VAR_4].sector==VAR_0) VAR_8 = 1;
   VAR_9 = VAR_4;
   VAR_10 = VAR_5[VAR_4].last_access;
  }
 }

 if(VAR_8==0 && VAR_5[VAR_9].dirty==1) {
  if(!FUNC_1(VAR_2->disc,VAR_5[VAR_9].sector,VAR_5[VAR_9].count,VAR_5[VAR_9].cache)) return ((void*)0);
  VAR_5[VAR_9].dirty = 0;
 }

 VAR_3 = (VAR_3/VAR_7)*VAR_7;
 sec_t VAR_11 = VAR_3 + VAR_7;
 if(VAR_11 > VAR_2->endOfPartition) VAR_11 = VAR_2->endOfPartition;

 if(!FUNC_0(VAR_2->disc,VAR_3,VAR_11-VAR_3,VAR_5[VAR_9].cache)) return ((void*)0);

 VAR_5[VAR_9].sector = VAR_3;
 VAR_5[VAR_9].count = VAR_11-VAR_3;
 VAR_5[VAR_9].last_access = FUNC_2();

 return &(VAR_5[VAR_9]);
}
