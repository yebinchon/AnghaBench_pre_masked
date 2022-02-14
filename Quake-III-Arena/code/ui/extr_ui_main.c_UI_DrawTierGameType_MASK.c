
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_8__ {int y; int x; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_9__ {int tierCount; TYPE_2__* tierList; TYPE_1__* gameTypes; } ;
struct TYPE_7__ {size_t* gameTypes; } ;
struct TYPE_6__ {int gameType; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,float,int ,int ,int ,int ,int) ;
 int FUNC_1 (char*) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void FUNC_2(rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, int VAR_5) {
  int VAR_6, VAR_7;
 VAR_6 = FUNC_1( "ui_currentTier" );
  if (VAR_6 < 0 || VAR_6 >= VAR_1.tierCount) {
    VAR_6 = 0;
  }
 VAR_7 = FUNC_1("ui_currentMap");
 if (VAR_7 < 0 || VAR_7 > VAR_0) {
  VAR_7 = 0;
 }

  FUNC_0(VAR_2->x, VAR_2->y, VAR_3, VAR_4, VAR_1.gameTypes[VAR_1.tierList[VAR_6].gameTypes[VAR_7]].gameType , 0, 0, VAR_5);
}
