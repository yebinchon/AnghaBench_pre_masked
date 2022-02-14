
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CapsCacheLock; int * CapsListCache; } ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(SERVER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->CapsCacheLock);
 {
  if (VAR_0->CapsListCache != ((void*)0))
  {
   FUNC_0(VAR_0->CapsListCache);
   VAR_0->CapsListCache = ((void*)0);
  }
 }
 FUNC_2(VAR_0->CapsCacheLock);
}
