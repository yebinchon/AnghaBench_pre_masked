
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ath_softc {scalar_t__ mem; int sc_serial_rw; } ;
struct TYPE_2__ {scalar_t__ serialize_regmode; } ;
struct ath_hw {TYPE_1__ config; } ;
struct ath_common {scalar_t__ priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct ath_hw *VAR_5 = (struct ath_hw *) VAR_2;
 struct ath_common *VAR_6 = FUNC_0(VAR_5);
 struct ath_softc *VAR_7 = (struct ath_softc *) VAR_6->priv;

 if (VAR_0 > 1 && VAR_5->config.serialize_regmode == VAR_1) {
  unsigned long VAR_8;
  FUNC_2(&VAR_7->sc_serial_rw, VAR_8);
  FUNC_1(VAR_3, VAR_7->mem + VAR_4);
  FUNC_3(&VAR_7->sc_serial_rw, VAR_8);
 } else
  FUNC_1(VAR_3, VAR_7->mem + VAR_4);
}
