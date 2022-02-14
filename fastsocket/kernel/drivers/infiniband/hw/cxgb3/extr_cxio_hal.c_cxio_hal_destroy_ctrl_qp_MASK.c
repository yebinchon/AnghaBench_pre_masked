
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union t3_wr {int dummy; } t3_wr ;
struct TYPE_6__ {int workq; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct cxio_rdev {TYPE_3__ ctrl_qp; TYPE_2__ rnic_info; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct cxio_rdev*,int ) ;
 int FUNC_1 (int *,unsigned long,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_3(struct cxio_rdev *VAR_3)
{
 FUNC_1(&(VAR_3->rnic_info.pdev->dev),
     (1UL << VAR_1)
     * sizeof(union t3_wr), VAR_3->ctrl_qp.workq,
     FUNC_2(&VAR_3->ctrl_qp, VAR_2));
 return FUNC_0(VAR_3, VAR_0);
}
