
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int sec_t ;
struct TYPE_7__ {unsigned int bytesPerSector; } ;
struct TYPE_6__ {unsigned int sector; scalar_t__ cache; } ;
typedef TYPE_1__ CACHE_ENTRY ;
typedef TYPE_2__ CACHE ;


 TYPE_1__* FUNC_0 (TYPE_2__*,unsigned int) ;
 int FUNC_1 (void*,scalar_t__,size_t) ;

bool FUNC_2 (CACHE* VAR_0, void* VAR_1, sec_t VAR_2, unsigned int VAR_3, size_t VAR_4)
{
 sec_t VAR_5;
 CACHE_ENTRY *VAR_6;

 if (VAR_3 + VAR_4 > VAR_0->bytesPerSector) return 0;

 VAR_6 = FUNC_0(VAR_0,VAR_2);
 if(VAR_6==((void*)0)) return 0;

 VAR_5 = VAR_2 - VAR_6->sector;
 FUNC_1(VAR_1,VAR_6->cache + ((VAR_5*VAR_0->bytesPerSector) + VAR_3),VAR_4);

 return 1;
}
