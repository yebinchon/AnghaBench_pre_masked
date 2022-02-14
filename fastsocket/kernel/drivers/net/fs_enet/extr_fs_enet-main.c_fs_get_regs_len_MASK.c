
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fs_enet_private {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_regs_len ) (struct net_device*) ;} ;


 struct fs_enet_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct fs_enet_private *VAR_1 = FUNC_0(VAR_0);

 return (*VAR_1->ops->get_regs_len)(VAR_0);
}
