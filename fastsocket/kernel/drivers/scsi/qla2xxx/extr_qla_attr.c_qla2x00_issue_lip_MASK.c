
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_3(struct Scsi_Host *VAR_0)
{
 scsi_qla_host_t *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_1->hw))
  return 0;

 FUNC_1(VAR_1);
 return 0;
}
