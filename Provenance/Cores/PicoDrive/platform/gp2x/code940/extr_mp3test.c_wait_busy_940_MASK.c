
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int loopc; int waitc; int* vstarts; scalar_t__ busy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;

void FUNC_2(void)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_1->busy && VAR_2 < 0x10000; VAR_2++)
  FUNC_1(8*1024);
 if (VAR_2 < 0x10000) return;


 FUNC_0("940 crashed (cnt: %i, ve: ", VAR_1->loopc);
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  FUNC_0("%i ", VAR_1->vstarts[VAR_2]);
 FUNC_0(")\n");
 VAR_0 = 1;

}
