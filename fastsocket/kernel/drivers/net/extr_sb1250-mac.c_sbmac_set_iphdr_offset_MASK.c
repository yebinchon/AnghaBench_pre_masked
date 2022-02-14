
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sbmac_softc {int rx_hw_checksum; int sbm_rxfilter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_3(struct sbmac_softc *VAR_6)
{
 uint64_t VAR_7;


 VAR_7 = FUNC_1(VAR_6->sbm_rxfilter);
 VAR_7 &= ~VAR_3 | FUNC_0(15);
 FUNC_2(VAR_7, VAR_6->sbm_rxfilter);



 if (VAR_5 == VAR_2 && VAR_4 < 2) {
  VAR_6->rx_hw_checksum = VAR_0;
 } else {
  VAR_6->rx_hw_checksum = VAR_1;
 }
}
