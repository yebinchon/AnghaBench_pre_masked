
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct s2io_nic {scalar_t__ bar0; TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int len; int version; } ;
struct TYPE_2__ {int subsystem_device; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 struct s2io_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
          struct ethtool_regs *VAR_2, void *VAR_3)
{
 int VAR_4;
 u64 VAR_5;
 u8 *VAR_6 = (u8 *)VAR_3;
 struct s2io_nic *VAR_7 = FUNC_1(VAR_1);

 VAR_2->len = VAR_0;
 VAR_2->version = VAR_7->pdev->subsystem_device;

 for (VAR_4 = 0; VAR_4 < VAR_2->len; VAR_4 += 8) {
  VAR_5 = FUNC_2(VAR_7->bar0 + VAR_4);
  FUNC_0((VAR_6 + VAR_4), &VAR_5, 8);
 }
}
