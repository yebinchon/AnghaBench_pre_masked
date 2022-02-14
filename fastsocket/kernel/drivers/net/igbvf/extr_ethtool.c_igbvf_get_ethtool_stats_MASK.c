
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct igbvf_adapter {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_2__ {int stat_offset; int base_stat_offset; int sizeof_stat; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct igbvf_adapter*) ;
 struct igbvf_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
                                    struct ethtool_stats *VAR_3,
                                    u64 *VAR_4)
{
 struct igbvf_adapter *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 FUNC_0(VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  char *VAR_7 = (char *)VAR_5 +
            VAR_1[VAR_6].stat_offset;
  char *VAR_8 = (char *)VAR_5 +
            VAR_1[VAR_6].base_stat_offset;
  VAR_4[VAR_6] = ((VAR_1[VAR_6].sizeof_stat ==
              sizeof(u64)) ? (*(u64 *)VAR_7 - *(u64 *)VAR_8) :
              (*(u32 *)VAR_7 - *(u32 *)VAR_8));
 }

}
