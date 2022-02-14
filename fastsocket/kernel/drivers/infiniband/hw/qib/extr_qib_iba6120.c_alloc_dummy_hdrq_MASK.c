
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qib_devdata {TYPE_1__* cspec; TYPE_3__* pcidev; TYPE_2__** rcd; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int rcvhdrq_size; } ;
struct TYPE_4__ {unsigned long dummy_hdrq_phys; int dummy_hdrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned long*,int) ;
 int FUNC_1 (TYPE_3__*,char*) ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_2)
{
 VAR_2->cspec->dummy_hdrq = FUNC_0(&VAR_2->pcidev->dev,
     VAR_2->rcd[0]->rcvhdrq_size,
     &VAR_2->cspec->dummy_hdrq_phys,
     VAR_0 | VAR_1);
 if (!VAR_2->cspec->dummy_hdrq) {
  FUNC_1(VAR_2->pcidev, "Couldn't allocate dummy hdrq\n");

  VAR_2->cspec->dummy_hdrq_phys = 0UL;
 }
}
