
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mask; int addr; } ;
struct TYPE_6__ {TYPE_2__ a4; } ;
struct qeth_ipaddr {int type; TYPE_3__ u; } ;
struct qeth_card {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct in_ifaddr {int ifa_mask; int ifa_address; TYPE_1__* ifa_dev; } ;
struct TYPE_4__ {scalar_t__ dev; } ;




 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_2 (struct qeth_ipaddr*) ;
 int FUNC_3 (struct qeth_card*,struct qeth_ipaddr*) ;
 int FUNC_4 (struct qeth_card*,struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_5 (int ) ;
 struct qeth_card* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_8(struct notifier_block *VAR_5,
       unsigned long VAR_6, void *VAR_7)
{
 struct in_ifaddr *VAR_8 = (struct in_ifaddr *)VAR_7;
 struct net_device *VAR_9 = (struct net_device *)VAR_8->ifa_dev->dev;
 struct qeth_ipaddr *VAR_10;
 struct qeth_card *VAR_11;

 if (FUNC_1(VAR_9) != &VAR_4)
  return VAR_0;

 FUNC_0(VAR_3, 3, "ipevent");
 VAR_11 = FUNC_6(VAR_9);
 if (!VAR_11)
  return VAR_0;

 VAR_10 = FUNC_5(VAR_2);
 if (VAR_10 != ((void*)0)) {
  VAR_10->u.a4.addr = VAR_8->ifa_address;
  VAR_10->u.a4.mask = VAR_8->ifa_mask;
  VAR_10->type = VAR_1;
 } else
  goto out;

 switch (VAR_6) {
 case 128:
  if (!FUNC_3(VAR_11, VAR_10))
   FUNC_2(VAR_10);
  break;
 case 129:
  if (!FUNC_4(VAR_11, VAR_10))
   FUNC_2(VAR_10);
  break;
 default:
  break;
 }
 FUNC_7(VAR_11);
out:
 return VAR_0;
}
