
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv643xx_eth_private {int phy; } ;
struct ethtool_cmd {int advertising; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ethtool_cmd*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct mv643xx_eth_private *VAR_2,
        struct ethtool_cmd *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->phy);
 if (VAR_4 == 0)
  VAR_4 = FUNC_0(VAR_2->phy, VAR_3);




 VAR_3->supported &= ~VAR_1;
 VAR_3->advertising &= ~VAR_0;

 return VAR_4;
}
