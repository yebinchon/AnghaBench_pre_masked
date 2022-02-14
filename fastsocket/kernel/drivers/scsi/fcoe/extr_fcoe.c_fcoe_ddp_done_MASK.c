
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct fc_lport {int dummy; } ;
struct TYPE_2__ {int (* ndo_fcoe_ddp_done ) (struct net_device*,int ) ;} ;


 struct net_device* FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct fc_lport *VAR_0, u16 VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->netdev_ops->ndo_fcoe_ddp_done)
  return VAR_2->netdev_ops->ndo_fcoe_ddp_done(VAR_2, VAR_1);
 return 0;
}
