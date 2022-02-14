
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int name; } ;
typedef TYPE_1__ me_bind_action ;
typedef int buff2 ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int,int ,int) ;
 char* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,char*,char*,...) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int,int,char const*,...) ;

__attribute__((used)) static void FUNC_10(const me_bind_action *VAR_6, int VAR_7, int VAR_8,
  int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 char VAR_13[64], VAR_14[32];
 const char *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_18 = ((VAR_8 >= 0) ? 20 : 30) * VAR_5;
 VAR_16 = VAR_3 / 2 - VAR_18 / 2;
 VAR_17 = (VAR_2 - 4 * VAR_4) / 2 - (2 + VAR_7) * VAR_4 / 2;
 if (VAR_16 < VAR_5 * 2)
  VAR_16 = VAR_5 * 2;

 FUNC_3(1, 0);
 if (VAR_8 >= 0)
  FUNC_9(VAR_16, VAR_17, "Player %i controls", VAR_8 + 1);
 else
  FUNC_9(VAR_16, VAR_17, "Emulator controls");

 VAR_17 += 2 * VAR_4;
 FUNC_5(VAR_16 - VAR_5 * 2, VAR_17 + VAR_9 * VAR_4, VAR_18 + 2 * VAR_5);

 for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++, VAR_17 += VAR_4)
  FUNC_9(VAR_16, VAR_17, "%s : %s", VAR_6[VAR_19].name,
   FUNC_0(VAR_8, VAR_6[VAR_19].mask, VAR_10));

 FUNC_6();

 if (VAR_10 < 0)
  VAR_15 = "(all devices)";
 else
  VAR_15 = FUNC_1(VAR_10, 0, 1);
 VAR_18 = FUNC_8(VAR_15) * VAR_5;
 if (VAR_18 < 30 * VAR_5)
  VAR_18 = 30 * VAR_5;
 if (VAR_18 > VAR_3)
  VAR_18 = VAR_3;

 VAR_16 = VAR_3 / 2 - VAR_18 / 2;

 if (!VAR_12) {
  FUNC_7(VAR_14, sizeof(VAR_14), "%s", FUNC_2(-1, -VAR_1));
  FUNC_7(VAR_13, sizeof(VAR_13), "%s - bind, %s - clear", VAR_14,
    FUNC_2(-1, -VAR_0));
  FUNC_9(VAR_16, VAR_2 - 4 * VAR_4, VAR_13);
 }
 else
  FUNC_9(VAR_16, VAR_2 - 4 * VAR_4, "Press a button to bind/unbind");

 if (VAR_11 > 1) {
  FUNC_9(VAR_16, VAR_2 - 3 * VAR_4, VAR_15);
  FUNC_9(VAR_16, VAR_2 - 2 * VAR_4, "Press left/right for other devs");
 }

 FUNC_4();
}
