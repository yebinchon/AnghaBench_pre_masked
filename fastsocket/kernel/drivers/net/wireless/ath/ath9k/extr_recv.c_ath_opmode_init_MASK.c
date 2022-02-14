
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_common*) ;

__attribute__((used)) static void FUNC_6(struct ath_softc *VAR_0)
{
 struct ath_hw *VAR_1 = VAR_0->sc_ah;
 struct ath_common *VAR_2 = FUNC_0(VAR_1);

 u32 VAR_3, VAR_4[2];


 VAR_3 = FUNC_4(VAR_0);
 FUNC_3(VAR_1, VAR_3);


 FUNC_5(VAR_2);


 FUNC_2(VAR_1);


 VAR_4[0] = VAR_4[1] = ~0;
 FUNC_1(VAR_1, VAR_4[0], VAR_4[1]);
}
