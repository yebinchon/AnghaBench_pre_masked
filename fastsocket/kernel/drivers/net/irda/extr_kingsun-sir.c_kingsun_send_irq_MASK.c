
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ status; struct kingsun_cb* context; } ;
struct net_device {int dummy; } ;
struct kingsun_cb {struct net_device* netdev; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct kingsun_cb *VAR_1 = VAR_0->context;
 struct net_device *VAR_2 = VAR_1->netdev;


 if (!FUNC_1(VAR_1->netdev)) {
  FUNC_0("kingsun_send_irq: Network not running!");
  return;
 }


 if (VAR_0->status != 0) {
  FUNC_0("kingsun_send_irq: urb asynchronously failed - %d",
      VAR_0->status);
 }
 FUNC_2(VAR_2);
}
