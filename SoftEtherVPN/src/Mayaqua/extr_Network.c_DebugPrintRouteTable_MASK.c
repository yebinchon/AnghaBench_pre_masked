
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t NumEntry; int * Entry; } ;
typedef TYPE_1__ ROUTE_TABLE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

void FUNC_3(ROUTE_TABLE *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (FUNC_2() == 0)
 {
  return;
 }

 FUNC_0("---- Routing Table (%u Entries) ----\n", VAR_0->NumEntry);

 for (VAR_1 = 0;VAR_1 < VAR_0->NumEntry;VAR_1++)
 {
  FUNC_0("   ");

  FUNC_1(VAR_0->Entry[VAR_1]);
 }

 FUNC_0("------------------------------------\n");
}
