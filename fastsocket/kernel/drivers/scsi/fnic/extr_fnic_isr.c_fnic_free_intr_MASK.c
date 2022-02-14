
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fnic {TYPE_3__* msix; TYPE_2__* msix_entry; TYPE_1__* pdev; int vdev; } ;
struct TYPE_6__ {struct fnic* devid; int requested; } ;
struct TYPE_5__ {int vector; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (TYPE_3__*) ;



 int FUNC_1 (int ,struct fnic*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct fnic *VAR_0)
{
 int VAR_1;

 switch (FUNC_2(VAR_0->vdev)) {
 case 130:
 case 129:
  FUNC_1(VAR_0->pdev->irq, VAR_0);
  break;

 case 128:
  for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->msix); VAR_1++)
   if (VAR_0->msix[VAR_1].requested)
    FUNC_1(VAR_0->msix_entry[VAR_1].vector,
      VAR_0->msix[VAR_1].devid);
  break;

 default:
  break;
 }
}
