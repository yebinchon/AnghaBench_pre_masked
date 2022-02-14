
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qib_devdata {int rcvhdrcnt; int rcvhdrentsize; TYPE_2__* cspec; TYPE_1__* pcidev; } ;
struct TYPE_4__ {int * dummy_hdrq; int dummy_hdrq_phys; int portcntrs; int cntrs; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qib_devdata*) ;

__attribute__((used)) static void FUNC_4(struct qib_devdata *VAR_1)
{
 FUNC_3(VAR_1);
 FUNC_2(VAR_1->cspec->cntrs);
 FUNC_2(VAR_1->cspec->portcntrs);
 if (VAR_1->cspec->dummy_hdrq) {
  FUNC_1(&VAR_1->pcidev->dev,
      FUNC_0(VAR_1->rcvhdrcnt *
     VAR_1->rcvhdrentsize *
     sizeof(u32), VAR_0),
      VAR_1->cspec->dummy_hdrq,
      VAR_1->cspec->dummy_hdrq_phys);
  VAR_1->cspec->dummy_hdrq = ((void*)0);
 }
}
