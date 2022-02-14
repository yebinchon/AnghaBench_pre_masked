
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ internal_req; int internal_req_phy; } ;
struct TYPE_6__ {TYPE_2__ mv; } ;
struct hptiop_hba {TYPE_3__ u; TYPE_1__* pcidev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct hptiop_hba *VAR_1)
{
 VAR_1->u.mv.internal_req = FUNC_0(&VAR_1->pcidev->dev,
   0x800, &VAR_1->u.mv.internal_req_phy, VAR_0);
 if (VAR_1->u.mv.internal_req)
  return 0;
 else
  return -1;
}
