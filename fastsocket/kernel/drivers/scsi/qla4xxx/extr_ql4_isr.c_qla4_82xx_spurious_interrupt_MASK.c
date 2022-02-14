
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int tgt_mask_reg; } ;
struct scsi_qla_host {int spurious_int_count; TYPE_2__ nx_legacy_intr; int flags; TYPE_1__* qla4_82xx_reg; } ;
struct TYPE_3__ {int host_int; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_3 (struct scsi_qla_host*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct scsi_qla_host *VAR_2,
    uint8_t VAR_3)
{
 if (VAR_3)
  return;

 FUNC_0(FUNC_2(VAR_1, VAR_2, "Spurious Interrupt\n"));
 if (FUNC_1(VAR_2)) {
  FUNC_5(0, &VAR_2->qla4_82xx_reg->host_int);
  if (FUNC_4(VAR_0, &VAR_2->flags))
   FUNC_3(VAR_2, VAR_2->nx_legacy_intr.tgt_mask_reg,
       0xfbff);
 }
 VAR_2->spurious_int_count++;
}
