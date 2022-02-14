
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int name; } ;
typedef TYPE_1__ me_bind_action ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,char*,...) ;

__attribute__((used)) static void FUNC_5(const me_bind_action *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 16+20, VAR_7;

 FUNC_1();
 if (VAR_2 >= 0) {
  FUNC_4(80+80, 16, "Player %i controls", VAR_2 + 1);
  VAR_4 = 80+80;
 } else {
  FUNC_4(80+80, 16, "Emulator controls");
  VAR_4 = 80+40;
 }

 FUNC_3(VAR_4 - 16, VAR_6 + VAR_3*10, (VAR_2 >= 0) ? 66 : 130);

 VAR_5 = VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++, VAR_5+=10)
  FUNC_4(VAR_4, VAR_5, "%s : %s", VAR_0[VAR_7].name, FUNC_0(VAR_2, VAR_0[VAR_7].mask));

 FUNC_4(VAR_4, VAR_5, "Done");

 if (VAR_3 < VAR_1) {
  FUNC_4(80+30, 220, "Press a button to bind/unbind");
  FUNC_4(80+30, 230, "Use SELECT to clear");
  FUNC_4(80+30, 240, "To bind UP/DOWN, hold SELECT");
  FUNC_4(80+30, 250, "Select \"Done\" to exit");
 } else {
  FUNC_4(80+30, 230, "Use Options -> Save cfg");
  FUNC_4(80+30, 240, "to save controls");
  FUNC_4(80+30, 250, "Press X or O to exit");
 }
 FUNC_2();
}
