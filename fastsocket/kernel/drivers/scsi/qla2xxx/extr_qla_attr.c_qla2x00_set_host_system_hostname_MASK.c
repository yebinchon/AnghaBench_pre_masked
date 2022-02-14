
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int dpc_flags; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static void
FUNC_2(struct Scsi_Host *VAR_1)
{
 scsi_qla_host_t *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, &VAR_2->dpc_flags);
}
