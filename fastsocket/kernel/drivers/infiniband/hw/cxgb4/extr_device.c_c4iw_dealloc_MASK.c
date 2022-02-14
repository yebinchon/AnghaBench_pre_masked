
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uld_ctx {TYPE_1__* dev; } ;
struct TYPE_4__ {int oc_mw_kva; } ;
struct TYPE_3__ {int ibdev; TYPE_2__ rdev; int mmidr; int qpidr; int cqidr; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct uld_ctx *VAR_0)
{
 FUNC_0(&VAR_0->dev->rdev);
 FUNC_2(&VAR_0->dev->cqidr);
 FUNC_2(&VAR_0->dev->qpidr);
 FUNC_2(&VAR_0->dev->mmidr);
 FUNC_3(VAR_0->dev->rdev.oc_mw_kva);
 FUNC_1(&VAR_0->dev->ibdev);
 VAR_0->dev = ((void*)0);
}
