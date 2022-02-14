
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int curvalue; } ;
struct TYPE_4__ {char** itemnames; size_t curvalue; } ;
struct TYPE_6__ {size_t selectedBotNum; int delay; int * botnames; TYPE_2__ skill; TYPE_1__ team; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ,int,char const*,int) ;

__attribute__((used)) static void FUNC_2( void* VAR_3, int VAR_4 ) {
 const char *VAR_5;
 int VAR_6;

 if (VAR_4 != VAR_1) {
  return;
 }

 VAR_5 = VAR_2.team.itemnames[VAR_2.team.curvalue];
 VAR_6 = VAR_2.skill.curvalue + 1;

 FUNC_0( VAR_0, FUNC_1("addbot %s %i %s %i\n",
  VAR_2.botnames[VAR_2.selectedBotNum], VAR_6, VAR_5, VAR_2.delay) );

 VAR_2.delay += 1500;
}
