
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct nes_vnic {int nesibdev; scalar_t__ of_device_registered; int list; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct nes_vnic* FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct nes_vnic *VAR_1 = FUNC_3(VAR_0);




 FUNC_1(&VAR_1->list);

 if (VAR_1->of_device_registered) {
  FUNC_2(VAR_1->nesibdev);
 }

 FUNC_0(VAR_0);
}
