
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct concap_proto {TYPE_2__* pops; } ;
struct concap_device_ops {int dummy; } ;
struct TYPE_6__ {TYPE_1__* netdev; struct concap_device_ops* dops; } ;
typedef TYPE_3__ isdn_net_local ;
struct TYPE_5__ {int (* restart ) (struct concap_proto*,struct net_device*,struct concap_device_ops*) ;} ;
struct TYPE_4__ {struct concap_proto* cprot; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct concap_proto*,struct net_device*,struct concap_device_ops*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_0)
{
}
