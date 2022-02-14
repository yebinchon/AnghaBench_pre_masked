
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {TYPE_1__* qla4_82xx_reg; } ;
struct TYPE_2__ {int host_int; int * mailbox_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_qla_host*,int ) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct scsi_qla_host *VAR_2,
    uint32_t VAR_3)
{

 if (VAR_3 & VAR_0)
  FUNC_1(VAR_2);


 if (VAR_3 & VAR_1)
  FUNC_0(VAR_2,
      FUNC_2(&VAR_2->qla4_82xx_reg->mailbox_out[0]));


 FUNC_3(0, &VAR_2->qla4_82xx_reg->host_int);
 FUNC_2(&VAR_2->qla4_82xx_reg->host_int);
}
