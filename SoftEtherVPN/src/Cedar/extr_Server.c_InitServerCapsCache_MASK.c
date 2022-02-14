
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * CapsListCache; int CapsCacheLock; } ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 () ;

void FUNC_1(SERVER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_0->CapsCacheLock = FUNC_0();
 VAR_0->CapsListCache = ((void*)0);
}
