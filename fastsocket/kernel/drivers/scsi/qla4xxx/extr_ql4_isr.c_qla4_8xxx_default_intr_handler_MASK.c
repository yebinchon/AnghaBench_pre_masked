
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct scsi_qla_host {int hardware_lock; int isr_count; TYPE_2__* isp_ops; TYPE_1__* qla4_82xx_reg; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* interrupt_service_routine ) (struct scsi_qla_host*,int) ;} ;
struct TYPE_3__ {int host_status; int host_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (struct scsi_qla_host*,scalar_t__) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct scsi_qla_host*,int) ;

irqreturn_t
FUNC_7(int VAR_5, void *VAR_6)
{
 struct scsi_qla_host *VAR_7 = VAR_6;
 unsigned long VAR_8;
 uint32_t VAR_9;
 uint8_t VAR_10 = 0;

 if (FUNC_0(VAR_7)) {
  FUNC_2(VAR_5, VAR_6);
 } else {
  FUNC_4(&VAR_7->hardware_lock, VAR_8);
  while (1) {
   if (!(FUNC_3(&VAR_7->qla4_82xx_reg->host_int) &
       VAR_3)) {
    FUNC_1(VAR_7, VAR_10);
    break;
   }

   VAR_9 = FUNC_3(&VAR_7->qla4_82xx_reg->host_status);
   if ((VAR_9 &
       (VAR_1 | VAR_0)) == 0) {
    FUNC_1(VAR_7, VAR_10);
    break;
   }

   VAR_7->isp_ops->interrupt_service_routine(VAR_7, VAR_9);

   if (++VAR_10 == VAR_4)
    break;
  }
  VAR_7->isr_count++;
  FUNC_5(&VAR_7->hardware_lock, VAR_8);
 }
 return VAR_2;
}
