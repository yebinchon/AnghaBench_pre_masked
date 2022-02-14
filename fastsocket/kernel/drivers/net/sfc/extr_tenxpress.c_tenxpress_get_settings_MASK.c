
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ethtool_cmd {int dummy; } ;
struct efx_nic {int mdio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct efx_nic*,int ,int ) ;
 int FUNC_2 (struct ethtool_cmd*,int ) ;
 int FUNC_3 (int *,struct ethtool_cmd*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct efx_nic *VAR_7, struct ethtool_cmd *VAR_8)
{
 u32 VAR_9 = 0, VAR_10 = 0;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_7, VAR_5, VAR_1);
 if (VAR_11 & VAR_2)
  VAR_9 |= VAR_0;
 VAR_11 = FUNC_1(VAR_7, VAR_5, VAR_3);
 if (VAR_11 & VAR_4)
  VAR_10 |= VAR_0;

 FUNC_3(&VAR_7->mdio, VAR_8, VAR_9, VAR_10);



 if (FUNC_0(VAR_7))
  FUNC_2(VAR_8, VAR_6);
}
