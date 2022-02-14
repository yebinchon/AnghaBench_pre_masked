
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi108_prv_data {int txlock; int mii_if; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;


 int FUNC_0 (int *,struct ethtool_cmd*) ;
 struct tsi108_prv_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 struct tsi108_prv_data *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(&VAR_2->txlock, VAR_3);
 VAR_4 = FUNC_0(&VAR_2->mii_if, VAR_1);
 FUNC_3(&VAR_2->txlock, VAR_3);

 return VAR_4;
}
