
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
struct TYPE_7__ {int tierCount; TYPE_1__* tierList; } ;
struct TYPE_5__ {int tierName; } ;


 int FUNC_0 (int ,int ,float,int ,int ,int ,int ,int) ;
 int FUNC_1 (char*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3, int VAR_4) {
  int VAR_5;
 VAR_5 = FUNC_1( "ui_currentTier" );
  if (VAR_5 < 0 || VAR_5 >= VAR_0.tierCount) {
    VAR_5 = 0;
  }
  FUNC_0(VAR_1->x, VAR_1->y, VAR_2, VAR_3, FUNC_2("Tier: %s", VAR_0.tierList[VAR_5].tierName),0, 0, VAR_4);
}
