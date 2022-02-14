
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ipr_ioa_cfg {TYPE_3__* pdev; } ;
struct ipr_hostrcb {int queue; } ;
struct TYPE_11__ {int ioasc; } ;
struct TYPE_12__ {TYPE_5__ hdr; } ;
struct TYPE_7__ {TYPE_6__ ioasa; } ;
struct TYPE_10__ {struct ipr_hostrcb* hostrcb; } ;
struct ipr_cmnd {TYPE_2__* hrrq; int queue; TYPE_1__ s; TYPE_4__ u; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int hrrq_free_q; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct ipr_ioa_cfg*,struct ipr_hostrcb*) ;
 int FUNC_3 (struct ipr_ioa_cfg*,int ,struct ipr_hostrcb*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ipr_cmnd *VAR_2)
{
 struct ipr_ioa_cfg *VAR_3 = VAR_2->ioa_cfg;
 struct ipr_hostrcb *VAR_4 = VAR_2->u.hostrcb;
 u32 VAR_5 = FUNC_0(VAR_2->s.ioasa.hdr.ioasc);

 FUNC_5(&VAR_4->queue);
 FUNC_4(&VAR_2->queue, &VAR_2->hrrq->hrrq_free_q);

 if (VAR_5) {
  if (VAR_5 != VAR_1)
   FUNC_1(&VAR_3->pdev->dev,
    "Host RCB failed with IOASC: 0x%08X\n", VAR_5);

  FUNC_3(VAR_3, VAR_0, VAR_4);
 } else {
  FUNC_2(VAR_3, VAR_4);
 }
}
