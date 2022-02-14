
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {struct mcs_cb* context; } ;
struct net_device {int dummy; } ;
struct mcs_cb {int work; int new_speed; struct net_device* netdev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct mcs_cb *VAR_1 = VAR_0->context;
 struct net_device *VAR_2 = VAR_1->netdev;

 if (FUNC_2(VAR_1->new_speed))
  FUNC_1(&VAR_1->work);
 else
  FUNC_0(VAR_2);
}
