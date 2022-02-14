
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct smc_private {int cfg; int mii_if; } ;
struct net_device {unsigned int base_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 struct smc_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct smc_private *VAR_4 = FUNC_3(VAR_3);
 if (VAR_4->cfg & VAR_1) {
  unsigned int VAR_5 = VAR_3->base_addr;
  u16 VAR_6 = FUNC_1(VAR_5 + VAR_0);
  int VAR_7;

  FUNC_0(3);
  VAR_7 = FUNC_2(&VAR_4->mii_if);
  FUNC_0(VAR_6);

  return VAR_7;
 } else
  return -VAR_2;
}
