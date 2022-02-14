
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* FreePhys; void* UsedPhys; void* TotalPhys; void* FreeMemory; void* UsedMemory; void* TotalMemory; } ;
typedef int PACK ;
typedef TYPE_1__ MEMINFO ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(MEMINFO *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, sizeof(MEMINFO));
 VAR_0->TotalMemory = FUNC_0(VAR_1, "TotalMemory");
 VAR_0->UsedMemory = FUNC_0(VAR_1, "UsedMemory");
 VAR_0->FreeMemory = FUNC_0(VAR_1, "FreeMemory");
 VAR_0->TotalPhys = FUNC_0(VAR_1, "TotalPhys");
 VAR_0->UsedPhys = FUNC_0(VAR_1, "UsedPhys");
 VAR_0->FreePhys = FUNC_0(VAR_1, "FreePhys");
}
