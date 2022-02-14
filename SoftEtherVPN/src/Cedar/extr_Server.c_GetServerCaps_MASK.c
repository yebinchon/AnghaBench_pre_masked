
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int CapsCacheLock; int * CapsListCache; } ;
typedef TYPE_1__ SERVER ;
typedef int CAPSLIST ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int) ;

void FUNC_5(SERVER *VAR_0, CAPSLIST *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0->CapsCacheLock);
 {

  if (VAR_0->CapsListCache == ((void*)0))
  {
   VAR_0->CapsListCache = FUNC_4(sizeof(CAPSLIST));
   FUNC_1(VAR_0, VAR_0->CapsListCache);
  }

  FUNC_0(VAR_1, VAR_0->CapsListCache, sizeof(CAPSLIST));
 }
 FUNC_3(VAR_0->CapsCacheLock);
}
