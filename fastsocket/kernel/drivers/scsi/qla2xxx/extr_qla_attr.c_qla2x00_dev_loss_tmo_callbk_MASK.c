
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fc_rport {scalar_t__ dd_data; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_6__ {TYPE_4__* vha; int * drport; int rport; } ;
typedef TYPE_2__ fc_port_t ;
struct TYPE_7__ {TYPE_1__* hw; int dpc_flags; } ;
struct TYPE_5__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 struct Scsi_Host* FUNC_3 (struct fc_rport*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct fc_rport *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_3(VAR_3);
 fc_port_t *VAR_5 = *(fc_port_t **)VAR_3->dd_data;
 unsigned long VAR_6;

 if (!VAR_5)
  return;



 FUNC_2(VAR_5, VAR_2);





 FUNC_4(VAR_4->host_lock, VAR_6);
 VAR_5->rport = *(VAR_5->drport = ((void*)0));
 *((fc_port_t **)VAR_3->dd_data) = ((void*)0);
 FUNC_5(VAR_4->host_lock, VAR_6);

 if (FUNC_6(VAR_0, &VAR_5->vha->dpc_flags))
  return;

 if (FUNC_7(FUNC_0(VAR_5->vha->hw->pdev))) {
  FUNC_1(VAR_5->vha, VAR_1 << 16);
  return;
 }
}
