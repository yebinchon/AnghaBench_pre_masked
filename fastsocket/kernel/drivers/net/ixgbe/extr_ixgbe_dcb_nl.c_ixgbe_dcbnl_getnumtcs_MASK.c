
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int pfc_tcs; int pg_tcs; } ;
struct TYPE_4__ {TYPE_1__ num_tcs; } ;
struct ixgbe_adapter {int flags; TYPE_2__ dcb_cfg; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_1(struct net_device *VAR_2, int VAR_3, u8 *VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->flags & VAR_1) {
  switch (VAR_3) {
  case 128:
   *VAR_4 = VAR_5->dcb_cfg.num_tcs.pg_tcs;
   break;
  case 129:
   *VAR_4 = VAR_5->dcb_cfg.num_tcs.pfc_tcs;
   break;
  default:
   return -VAR_0;
   break;
  }
 } else {
  return -VAR_0;
 }

 return 0;
}
