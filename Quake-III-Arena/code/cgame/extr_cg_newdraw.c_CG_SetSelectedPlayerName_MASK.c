
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int teamTask; } ;
typedef TYPE_1__ clientInfo_t ;
struct TYPE_6__ {size_t integer; } ;
struct TYPE_5__ {int currentOrder; TYPE_1__* clientinfo; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2() {
  if (VAR_0.integer >= 0 && VAR_0.integer < VAR_2) {
  clientInfo_t *VAR_4 = VAR_1.clientinfo + VAR_3[VAR_0.integer];
   if (VAR_4) {
   FUNC_0("cg_selectedPlayerName", VAR_4->name);
   FUNC_0("cg_selectedPlayer", FUNC_1("%d", VAR_3[VAR_0.integer]));
   VAR_1.currentOrder = VAR_4->teamTask;
   }
 } else {
  FUNC_0("cg_selectedPlayerName", "Everyone");
 }
}
