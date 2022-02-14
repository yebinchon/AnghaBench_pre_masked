
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_softc {int sc_ah; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*,int ) ;
 int FUNC_2 (struct ath_common*,int ,char*) ;

__attribute__((used)) static bool FUNC_3(struct ath_softc *VAR_2, u32 VAR_3)
{
 static int VAR_4;
 struct ath_common *VAR_5 = FUNC_0(VAR_2->sc_ah);

 if (VAR_3 >= 0x40000) {
  VAR_4++;
  if (VAR_4 == 3) {
   FUNC_2(VAR_5, VAR_0, "PLL WAR, resetting the chip\n");
   FUNC_1(VAR_2, VAR_1);
   VAR_4 = 0;
   return 1;
  }
 } else {
  VAR_4 = 0;
 }

 return 0;
}
