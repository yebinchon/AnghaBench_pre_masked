
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {int flags; TYPE_1__* qla4_83xx_reg; } ;
struct TYPE_2__ {int leg_int_mask; int mbox_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct scsi_qla_host *VAR_2)
{
 uint32_t VAR_3;

 if (!FUNC_1(VAR_0, &VAR_2->flags)) {
  VAR_3 = VAR_1;
  FUNC_2(VAR_3, &VAR_2->qla4_83xx_reg->mbox_int);
  FUNC_2(0, &VAR_2->qla4_83xx_reg->leg_int_mask);
  FUNC_0(VAR_0, &VAR_2->flags);
 }
}
