
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct nes_vnic {int rx_checksum_disabled; } ;


 struct nes_vnic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct nes_vnic *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1)
  VAR_2->rx_checksum_disabled = 0;
 else
  VAR_2->rx_checksum_disabled = 1;
 return 0;
}
