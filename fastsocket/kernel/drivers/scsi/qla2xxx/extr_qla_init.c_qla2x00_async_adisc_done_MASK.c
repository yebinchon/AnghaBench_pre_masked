
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {int dpc_flags; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_qla_host*,TYPE_1__*,int,int ) ;
 int FUNC_1 (struct scsi_qla_host*,TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(struct scsi_qla_host *VAR_4, fc_port_t *VAR_5,
    uint16_t *VAR_6)
{
 if (VAR_6[0] == VAR_1) {
  FUNC_1(VAR_4, VAR_5);

  return;
 }


 VAR_5->flags &= ~VAR_0;
 if (VAR_6[1] & VAR_2)
  FUNC_2(VAR_3, &VAR_4->dpc_flags);
 else
  FUNC_0(VAR_4, VAR_5, 1, 0);

 return;
}
