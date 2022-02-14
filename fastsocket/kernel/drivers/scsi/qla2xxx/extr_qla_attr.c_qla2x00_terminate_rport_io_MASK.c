
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct fc_rport {scalar_t__ dd_data; } ;
struct TYPE_11__ {int al_pa; int area; int domain; } ;
struct TYPE_12__ {TYPE_2__ b; } ;
struct TYPE_13__ {scalar_t__ loop_id; TYPE_5__* vha; TYPE_3__ d_id; } ;
typedef TYPE_4__ fc_port_t ;
struct TYPE_15__ {TYPE_1__* isp_ops; int pdev; } ;
struct TYPE_14__ {TYPE_9__* hw; int dpc_flags; } ;
struct TYPE_10__ {int (* fabric_logout ) (TYPE_5__*,scalar_t__,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct fc_rport *VAR_3)
{
 fc_port_t *VAR_4 = *(fc_port_t **)VAR_3->dd_data;

 if (!VAR_4)
  return;

 if (FUNC_5(VAR_0, &VAR_4->vha->dpc_flags))
  return;

 if (FUNC_6(FUNC_1(VAR_4->vha->hw->pdev))) {
  FUNC_2(VAR_4->vha, VAR_1 << 16);
  return;
 }




 if (VAR_4->loop_id != VAR_2) {
  if (FUNC_0(VAR_4->vha->hw))
   VAR_4->vha->hw->isp_ops->fabric_logout(VAR_4->vha,
       VAR_4->loop_id, VAR_4->d_id.b.domain,
       VAR_4->d_id.b.area, VAR_4->d_id.b.al_pa);
  else
   FUNC_3(VAR_4->vha, VAR_4);
 }
}
