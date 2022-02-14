
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_6__ {int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
typedef scalar_t__ qboolean ;
struct TYPE_7__ {int teamCount; TYPE_1__* teamList; } ;
struct TYPE_5__ {int teamName; } ;


 int FUNC_0 (int ,int ,float,int ,int ,int ,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_4(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3, qboolean VAR_4, int VAR_5) {
  int VAR_6;
  VAR_6 = FUNC_2(FUNC_1((VAR_4) ? "ui_blueTeam" : "ui_redTeam"));
  if (VAR_6 >= 0 && VAR_6 < VAR_0.teamCount) {
    FUNC_0(VAR_1->x, VAR_1->y, VAR_2, VAR_3, FUNC_3("%s: %s", (VAR_4) ? "Blue" : "Red", VAR_0.teamList[VAR_6].teamName),0, 0, VAR_5);
  }
}
