
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ethtool_eee {int eee_active; int eee_enabled; int tx_lpi_enabled; int tx_lpi_timer; void* advertised; void* lp_advertised; } ;
struct tg3 {int phy_flags; struct ethtool_eee eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tg3*,int ,int ,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_10, struct ethtool_eee *VAR_11)
{
 u32 VAR_12;
 struct ethtool_eee *VAR_13 = &VAR_10->eee;

 if (!(VAR_10->phy_flags & VAR_9))
  return;

 if (VAR_11)
  VAR_13 = VAR_11;

 if (FUNC_1(VAR_10, VAR_2, VAR_3, &VAR_12))
  return;


 if (VAR_12 == VAR_4 ||
     VAR_12 == VAR_5) {
  VAR_13->eee_active = 1;
 } else
  VAR_13->eee_active = 0;


 if (FUNC_1(VAR_10, VAR_2, VAR_1, &VAR_12))
  return;
 VAR_13->lp_advertised = FUNC_0(VAR_12);


 if (FUNC_1(VAR_10, VAR_2, VAR_0, &VAR_12))
  return;
 VAR_13->eee_enabled = !!VAR_12;
 VAR_13->advertised = FUNC_0(VAR_12);


 VAR_12 = FUNC_2(VAR_8);
 VAR_13->tx_lpi_enabled = !!(VAR_12 & VAR_6);


 VAR_13->tx_lpi_timer = FUNC_2(VAR_7) & 0xffff;
}
