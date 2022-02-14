
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct fe_priv {int estats; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct fe_priv *VAR_4 = FUNC_1(VAR_1);


 FUNC_2((unsigned long)VAR_1);

 FUNC_0(VAR_3, &VAR_4->estats, FUNC_3(VAR_1, VAR_0)*sizeof(u64));
}
