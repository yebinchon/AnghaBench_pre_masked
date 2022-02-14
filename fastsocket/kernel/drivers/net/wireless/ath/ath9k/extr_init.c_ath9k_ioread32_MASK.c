
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct ath_softc {unsigned int mem; int sc_serial_rw; } ;
struct TYPE_2__ {scalar_t__ serialize_regmode; } ;
struct ath_hw {TYPE_1__ config; } ;
struct ath_common {scalar_t__ priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_4(void *VAR_2, u32 VAR_3)
{
 struct ath_hw *VAR_4 = (struct ath_hw *) VAR_2;
 struct ath_common *VAR_5 = FUNC_0(VAR_4);
 struct ath_softc *VAR_6 = (struct ath_softc *) VAR_5->priv;
 u32 VAR_7;

 if (VAR_0 > 1 && VAR_4->config.serialize_regmode == VAR_1) {
  unsigned long VAR_8;
  FUNC_2(&VAR_6->sc_serial_rw, VAR_8);
  VAR_7 = FUNC_1(VAR_6->mem + VAR_3);
  FUNC_3(&VAR_6->sc_serial_rw, VAR_8);
 } else
  VAR_7 = FUNC_1(VAR_6->mem + VAR_3);
 return VAR_7;
}
