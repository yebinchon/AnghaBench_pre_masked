
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmac_softc {int sbm_rxdma; int sbm_txdma; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sbmac_softc *VAR_0)
{
 FUNC_0(&(VAR_0->sbm_txdma));
 FUNC_0(&(VAR_0->sbm_rxdma));
}
