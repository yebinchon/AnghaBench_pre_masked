
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ intr_type; } ;
struct vxgedev {TYPE_2__* pdev; TYPE_1__ config; } ;
struct __vxge_hw_device {int dummy; } ;
struct TYPE_4__ {int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct vxgedev*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vxgedev*) ;

__attribute__((used)) static void FUNC_4(struct vxgedev *VAR_2)
{
 struct __vxge_hw_device *VAR_3;
 VAR_3 = (struct __vxge_hw_device *) FUNC_1(VAR_2->pdev);






 if (VAR_2->config.intr_type == VAR_0) {
   FUNC_2(VAR_2->pdev->irq);
   FUNC_0(VAR_2->pdev->irq, VAR_2);
 }
}
