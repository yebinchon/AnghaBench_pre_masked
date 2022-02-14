
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct stmmac_priv {int xstats; TYPE_2__* mac_type; } ;
struct net_device {unsigned long base_addr; int stats; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_6__ {int stat_offset; int sizeof_stat; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* dma_diagnostic_fr ) (int *,int *,unsigned long) ;} ;


 int VAR_0 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int *,int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
     struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct stmmac_priv *VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6 = VAR_2->base_addr;
 int VAR_7;


 VAR_5->mac_type->ops->dma_diagnostic_fr(&VAR_2->stats, &VAR_5->xstats,
            VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  char *VAR_8 = (char *)VAR_5 + VAR_1[VAR_7].stat_offset;
  VAR_4[VAR_7] = (VAR_1[VAR_7].sizeof_stat ==
  sizeof(u64)) ? (*(u64 *)VAR_8) : (*(u32 *)VAR_8);
 }

 return;
}
