
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct vnic_stats {int rx; int tx; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct enic {int dummy; } ;
struct TYPE_4__ {size_t offset; } ;
struct TYPE_3__ {size_t offset; } ;


 int FUNC_0 (struct enic*,struct vnic_stats**) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct enic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4,
 struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 struct enic *VAR_7 = FUNC_1(VAR_4);
 struct vnic_stats *VAR_8;
 unsigned int VAR_9;

 FUNC_0(VAR_7, &VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  *(VAR_6++) = ((u64 *)&VAR_8->tx)[VAR_3[VAR_9].offset];
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  *(VAR_6++) = ((u64 *)&VAR_8->rx)[VAR_2[VAR_9].offset];
}
