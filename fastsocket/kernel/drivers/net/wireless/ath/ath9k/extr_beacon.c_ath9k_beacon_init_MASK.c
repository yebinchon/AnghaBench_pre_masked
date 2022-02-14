
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ bmisscnt; } ;
struct ath_softc {TYPE_1__ beacon; struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_6(struct ath_softc *VAR_0, u32 VAR_1,
         u32 VAR_2, bool VAR_3)
{
 struct ath_hw *VAR_4 = VAR_0->sc_ah;

 FUNC_2(VAR_4);
 if (VAR_3)
  FUNC_4(VAR_4);
 FUNC_0(VAR_0);
 FUNC_1(VAR_4, VAR_1, VAR_2);
 VAR_0->beacon.bmisscnt = 0;
 FUNC_5(VAR_4);
 FUNC_3(VAR_4);
}
