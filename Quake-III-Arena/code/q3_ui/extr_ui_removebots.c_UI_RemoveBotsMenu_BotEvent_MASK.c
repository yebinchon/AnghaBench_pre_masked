
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t id; } ;
typedef TYPE_2__ menucommon_s ;
struct TYPE_6__ {size_t selectedBotNum; TYPE_1__* bots; } ;
struct TYPE_4__ {int color; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void FUNC_0( void* VAR_5, int VAR_6 ) {
 if (VAR_6 != VAR_1) {
  return;
 }

 VAR_4.bots[VAR_4.selectedBotNum].color = VAR_2;
 VAR_4.selectedBotNum = ((menucommon_s*)VAR_5)->id - VAR_0;
 VAR_4.bots[VAR_4.selectedBotNum].color = VAR_3;
}
