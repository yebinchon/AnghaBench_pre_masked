
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv643xx_eth_private {int phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mv643xx_eth_private *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->phy, VAR_1);
 if (VAR_3 < 0)
  return;

 VAR_3 |= VAR_0;
 if (FUNC_1(VAR_2->phy, VAR_1, VAR_3) < 0)
  return;

 do {
  VAR_3 = FUNC_0(VAR_2->phy, VAR_1);
 } while (VAR_3 >= 0 && VAR_3 & VAR_0);
}
