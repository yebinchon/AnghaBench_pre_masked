
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct bcm_enet_stats {int stat_offset; int sizeof_stat; } ;
struct bcm_enet_priv {int mib_update_lock; } ;


 int VAR_0 ;
 struct bcm_enet_stats* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct bcm_enet_priv*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
           struct ethtool_stats *VAR_3,
           u64 *VAR_4)
{
 struct bcm_enet_priv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_2);

 FUNC_0(&VAR_5->mib_update_lock);
 FUNC_3(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  const struct bcm_enet_stats *VAR_7;
  char *VAR_8;

  VAR_7 = &VAR_1[VAR_6];
  VAR_8 = (char *)VAR_5 + VAR_7->stat_offset;
  VAR_4[VAR_6] = (VAR_7->sizeof_stat == sizeof(u64)) ?
   *(u64 *)VAR_8 : *(u32 *)VAR_8;
 }
 FUNC_1(&VAR_5->mib_update_lock);
}
