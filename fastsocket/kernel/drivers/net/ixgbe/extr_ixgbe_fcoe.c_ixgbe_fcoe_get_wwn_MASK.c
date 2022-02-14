
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct ixgbe_mac_info {int wwnn_prefix; int wwpn_prefix; scalar_t__* san_addr; } ;
struct TYPE_2__ {struct ixgbe_mac_info mac; } ;
struct ixgbe_adapter {TYPE_1__ hw; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_1, u64 *VAR_2, int VAR_3)
{
 int VAR_4 = -VAR_0;
 u16 VAR_5 = 0xffff;
 struct ixgbe_adapter *VAR_6 = FUNC_1(VAR_1);
 struct ixgbe_mac_info *VAR_7 = &VAR_6->hw.mac;

 switch (VAR_3) {
 case 129:
  VAR_5 = VAR_7->wwnn_prefix;
  break;
 case 128:
  VAR_5 = VAR_7->wwpn_prefix;
  break;
 default:
  break;
 }

 if ((VAR_5 != 0xffff) &&
     FUNC_0(VAR_7->san_addr)) {
  *VAR_2 = ((u64) VAR_5 << 48) |
         ((u64) VAR_7->san_addr[0] << 40) |
         ((u64) VAR_7->san_addr[1] << 32) |
         ((u64) VAR_7->san_addr[2] << 24) |
         ((u64) VAR_7->san_addr[3] << 16) |
         ((u64) VAR_7->san_addr[4] << 8) |
         ((u64) VAR_7->san_addr[5]);
  VAR_4 = 0;
 }
 return VAR_4;
}
