
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct nes_vnic {scalar_t__ rx_checksum_disabled; } ;


 struct nes_vnic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1 (struct net_device *VAR_0)
{
 struct nes_vnic *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->rx_checksum_disabled)
  return 0;
 else
  return 1;
}
