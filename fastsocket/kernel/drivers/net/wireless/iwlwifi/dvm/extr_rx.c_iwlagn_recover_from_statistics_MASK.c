
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statistics_tx {int dummy; } ;
struct statistics_rx_phy {int dummy; } ;
struct statistics_rx_ht_phy {int dummy; } ;
struct iwl_priv {scalar_t__ rx_statistics_jiffies; int status; } ;
struct TYPE_2__ {scalar_t__ plcp_check; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,int) ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*,struct statistics_rx_phy*,struct statistics_rx_ht_phy*,unsigned int) ;
 TYPE_1__ VAR_1 ;
 unsigned int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_priv *VAR_2,
    struct statistics_rx_phy *VAR_3,
    struct statistics_rx_ht_phy *VAR_4,
    struct statistics_tx *VAR_5,
    unsigned long VAR_6)
{
 unsigned int VAR_7;

 if (FUNC_4(VAR_0, &VAR_2->status))
  return;

 VAR_7 = FUNC_3(VAR_6 - VAR_2->rx_statistics_jiffies);


 if (!FUNC_1(VAR_2))
  return;


 if (VAR_7 < 99)
  return;

 if (VAR_1.plcp_check &&
     !FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7))
  FUNC_0(VAR_2, 0);
}
