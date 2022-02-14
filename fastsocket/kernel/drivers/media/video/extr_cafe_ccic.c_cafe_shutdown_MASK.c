
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cafe_camera {scalar_t__ n_sbufs; int vdev; int regs; TYPE_1__* pdev; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct cafe_camera*) ;
 int FUNC_1 (struct cafe_camera*) ;
 int FUNC_2 (struct cafe_camera*) ;
 int FUNC_3 (struct cafe_camera*) ;
 int FUNC_4 (struct cafe_camera*) ;
 int FUNC_5 (int ,struct cafe_camera*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct cafe_camera *VAR_0)
{

 if (VAR_0->n_sbufs > 0)

  FUNC_3(VAR_0);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 FUNC_5(VAR_0->pdev->irq, VAR_0);
 FUNC_6(VAR_0->pdev, VAR_0->regs);
 FUNC_7(&VAR_0->vdev);
}
