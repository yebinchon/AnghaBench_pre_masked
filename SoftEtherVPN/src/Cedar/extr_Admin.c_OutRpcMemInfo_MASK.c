
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FreePhys; int UsedPhys; int TotalPhys; int FreeMemory; int UsedMemory; int TotalMemory; } ;
typedef int PACK ;
typedef TYPE_1__ MEMINFO ;


 int FUNC_0 (int *,char*,int ) ;

void FUNC_1(PACK *VAR_0, MEMINFO *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "TotalMemory", VAR_1->TotalMemory);
 FUNC_0(VAR_0, "UsedMemory", VAR_1->UsedMemory);
 FUNC_0(VAR_0, "FreeMemory", VAR_1->FreeMemory);
 FUNC_0(VAR_0, "TotalPhys", VAR_1->TotalPhys);
 FUNC_0(VAR_0, "UsedPhys", VAR_1->UsedPhys);
 FUNC_0(VAR_0, "FreePhys", VAR_1->FreePhys);
}
