
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct concap_proto {TYPE_2__* pops; } ;
struct TYPE_6__ {TYPE_1__* netdev; } ;
typedef TYPE_3__ isdn_net_local ;
struct TYPE_5__ {int (* close ) (struct concap_proto*) ;} ;
struct TYPE_4__ {struct concap_proto* cprot; } ;


 struct net_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct concap_proto*) ;
 int FUNC_6 (struct concap_proto*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_0)
{
 struct net_device *VAR_1;
 FUNC_4(VAR_0);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {

  while (VAR_1) {






   FUNC_1(VAR_1);
   VAR_1 = FUNC_0(VAR_1);
  }
 }
 FUNC_1(VAR_0);
 FUNC_2();
 return 0;
}
