
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ rectDef_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,float,int ,char*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(rectDef_t *VAR_0, float VAR_1, vec4_t VAR_2, int VAR_3) {

 if (FUNC_0()) {
  FUNC_1(VAR_0->x, VAR_0->y, VAR_1, VAR_2, "Waiting for new key... Press ESCAPE to cancel", 0, 0, VAR_3);
 } else {
  FUNC_1(VAR_0->x, VAR_0->y, VAR_1, VAR_2, "Press ENTER or CLICK to change, Press BACKSPACE to clear", 0, 0, VAR_3);
 }
}
