
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
struct TYPE_5__ {scalar_t__ realTime; } ;
struct TYPE_7__ {scalar_t__ playerRefresh; scalar_t__ teamLeader; TYPE_1__ uiDC; } ;


 int FUNC_0 (int ,int ,float,int ,int ,int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_3(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3, int VAR_4) {
 if (VAR_0.uiDC.realTime > VAR_0.playerRefresh) {
  VAR_0.playerRefresh = VAR_0.uiDC.realTime + 3000;
  FUNC_1();
 }
  FUNC_0(VAR_1->x, VAR_1->y, VAR_2, VAR_3, (VAR_0.teamLeader) ? FUNC_2("cg_selectedPlayerName") : FUNC_2("name") , 0, 0, VAR_4);
}
