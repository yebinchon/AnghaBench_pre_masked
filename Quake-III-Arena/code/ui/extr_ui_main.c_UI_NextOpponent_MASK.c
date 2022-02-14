
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int teamCount; TYPE_1__* teamList; } ;
struct TYPE_3__ {int teamName; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_3() {
  int VAR_1 = FUNC_1(FUNC_0("ui_opponentName"));
  int VAR_2 = FUNC_1(FUNC_0("ui_teamName"));
 VAR_1++;
 if (VAR_1 >= VAR_0.teamCount) {
  VAR_1 = 0;
 }
 if (VAR_1 == VAR_2) {
  VAR_1++;
  if ( VAR_1 >= VAR_0.teamCount) {
   VAR_1 = 0;
  }
 }
  FUNC_2( "ui_opponentName", VAR_0.teamList[VAR_1].teamName );
}
