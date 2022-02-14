
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {TYPE_1__* qla4_83xx_reg; } ;
struct TYPE_2__ {int host_intr; int * mailbox_in; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct scsi_qla_host *VAR_1, uint32_t *VAR_2,
         int VAR_3)
{
 int VAR_4;


 for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++)
  FUNC_0(VAR_2[VAR_4], &VAR_1->qla4_83xx_reg->mailbox_in[VAR_4]);

 FUNC_0(VAR_2[0], &VAR_1->qla4_83xx_reg->mailbox_in[0]);




 FUNC_0(VAR_0, &VAR_1->qla4_83xx_reg->host_intr);
}
