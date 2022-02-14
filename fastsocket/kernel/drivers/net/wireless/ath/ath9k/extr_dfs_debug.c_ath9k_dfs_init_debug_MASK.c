
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int debugfs_phy; } ;
struct ath_softc {TYPE_1__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,struct ath_softc*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(struct ath_softc *VAR_4)
{
 FUNC_0("dfs_stats", VAR_0,
       VAR_4->debug.debugfs_phy, VAR_4, &VAR_2);
 FUNC_0("dfs_simulate_radar", VAR_1,
       VAR_4->debug.debugfs_phy, VAR_4, &VAR_3);
}
