
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmac_softc {int sbm_state; int sbm_rxdma; int sbm_txdma; scalar_t__ sbm_base; scalar_t__ sbm_mdio; scalar_t__ sbm_imr; scalar_t__ sbm_isr; scalar_t__ sbm_rxfilter; scalar_t__ sbm_framecfg; scalar_t__ sbm_fifocfg; scalar_t__ sbm_maccfg; scalar_t__ sbm_macenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,struct sbmac_softc*,int ,int ,int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_1(struct sbmac_softc *VAR_13)
{





 VAR_13->sbm_macenable = VAR_13->sbm_base + VAR_4;
 VAR_13->sbm_maccfg = VAR_13->sbm_base + VAR_3;
 VAR_13->sbm_fifocfg = VAR_13->sbm_base + VAR_9;
 VAR_13->sbm_framecfg = VAR_13->sbm_base + VAR_5;
 VAR_13->sbm_rxfilter = VAR_13->sbm_base + VAR_2;
 VAR_13->sbm_isr = VAR_13->sbm_base + VAR_8;
 VAR_13->sbm_imr = VAR_13->sbm_base + VAR_6;
 VAR_13->sbm_mdio = VAR_13->sbm_base + VAR_7;






 FUNC_0(&(VAR_13->sbm_txdma),VAR_13,0,VAR_1,VAR_11);
 FUNC_0(&(VAR_13->sbm_rxdma),VAR_13,0,VAR_0,VAR_10);





 VAR_13->sbm_state = VAR_12;

 return 0;
}
