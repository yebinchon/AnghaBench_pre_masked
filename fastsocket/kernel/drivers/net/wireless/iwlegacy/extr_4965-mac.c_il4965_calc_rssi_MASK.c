
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct il_rx_phy_res {int phy_flags; scalar_t__ non_cfg_phy_buf; } ;
struct il_priv {int dummy; } ;
struct il4965_rx_non_cfg_phy {int * rssi_info; int agc_info; } ;


 int FUNC_0 (char*,int ,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct il_priv *VAR_5, struct il_rx_phy_res *VAR_6)
{


 struct il4965_rx_non_cfg_phy *VAR_7 =
     (struct il4965_rx_non_cfg_phy *)VAR_6->non_cfg_phy_buf;
 u32 VAR_8 =
     (FUNC_1(VAR_7->agc_info) & VAR_1) >>
     VAR_2;

 u32 VAR_9 =
     (FUNC_1(VAR_6->phy_flags) & VAR_3)
     >> VAR_4;
 u8 VAR_10 = 0;
 u32 VAR_11;






 for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
  if (VAR_9 & (1 << VAR_11))
   VAR_10 = FUNC_2(VAR_7->rssi_info[VAR_11 << 1], VAR_10);

 FUNC_0("Rssi In A %d B %d C %d Max %d AGC dB %d\n",
  VAR_7->rssi_info[0], VAR_7->rssi_info[2], VAR_7->rssi_info[4],
  VAR_10, VAR_8);



 return VAR_10 - VAR_8 - VAR_0;
}
