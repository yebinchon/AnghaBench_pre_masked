
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nes_vnic {scalar_t__ of_device_registered; } ;
struct TYPE_2__ {int dev; } ;
struct nes_ib_device {TYPE_1__ ibdev; struct nes_vnic* nesvnic; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_3(struct nes_ib_device *VAR_1)
{
 struct nes_vnic *VAR_2 = VAR_1->nesvnic;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  FUNC_1(&VAR_1->ibdev.dev, VAR_0[VAR_3]);
 }

 if (VAR_2->of_device_registered) {
  FUNC_2(&VAR_1->ibdev);
 }

 VAR_2->of_device_registered = 0;
}
