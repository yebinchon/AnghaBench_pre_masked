
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct scsi_qla_host {TYPE_1__* hw; } ;
struct rsp_que {int dummy; } ;
struct req_que {int dummy; } ;
struct TYPE_2__ {int hardware_lock; } ;


 int FUNC_0 (struct scsi_qla_host*,struct req_que*,struct rsp_que*,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct scsi_qla_host *VAR_0, struct req_que *VAR_1,
  struct rsp_que *VAR_2, uint16_t VAR_3, uint16_t VAR_4,
  uint8_t VAR_5)
{
 int VAR_6;
 unsigned long VAR_7 = 0;

 FUNC_1(&VAR_0->hw->hardware_lock, VAR_7);
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2(&VAR_0->hw->hardware_lock, VAR_7);

 return (VAR_6);
}
