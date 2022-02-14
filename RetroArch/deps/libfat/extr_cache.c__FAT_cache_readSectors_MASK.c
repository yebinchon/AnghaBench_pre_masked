
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ sec_t ;
struct TYPE_7__ {scalar_t__ bytesPerSector; } ;
struct TYPE_6__ {scalar_t__ sector; scalar_t__ count; scalar_t__ cache; } ;
typedef TYPE_1__ CACHE_ENTRY ;
typedef TYPE_2__ CACHE ;


 TYPE_1__* FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;

bool FUNC_2(CACHE *VAR_0,sec_t VAR_1,sec_t VAR_2,void *VAR_3)
{
 sec_t VAR_4;
 sec_t VAR_5;
 CACHE_ENTRY *VAR_6;
 uint8_t *VAR_7 = (uint8_t *)VAR_3;

 while(VAR_2>0)
   {
  VAR_6 = FUNC_0(VAR_0,VAR_1);
  if(VAR_6==((void*)0)) return 0;

  VAR_4 = VAR_1 - VAR_6->sector;
  VAR_5 = VAR_6->count - VAR_4;
  if(VAR_5>VAR_2) VAR_5 = VAR_2;

  FUNC_1(VAR_7,VAR_6->cache + (VAR_4*VAR_0->bytesPerSector),(VAR_5*VAR_0->bytesPerSector));

  VAR_7 += (VAR_5*VAR_0->bytesPerSector);
  VAR_1 += VAR_5;
  VAR_2 -= VAR_5;
 }

 return 1;
}
