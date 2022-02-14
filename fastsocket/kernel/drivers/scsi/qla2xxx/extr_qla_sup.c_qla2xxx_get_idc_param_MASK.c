
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct req_que {scalar_t__ ring; } ;
struct qla_hw_data {void* fcoe_reset_timeout; void* fcoe_dev_init_timeout; TYPE_1__* isp_ops; struct req_que** req_q_map; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_6__ {int (* read_optrom ) (TYPE_2__*,int *,int ,int) ;} ;


 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_2__*,int,char*,void*,void*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_5(scsi_qla_host_t *VAR_4)
{

 uint32_t *VAR_5;
 struct qla_hw_data *VAR_6 = VAR_4->hw;
 struct req_que *VAR_7 = VAR_6->req_q_map[0];

 if (!FUNC_0(VAR_6))
  return;

 VAR_5 = (uint32_t *)VAR_7->ring;
 VAR_6->isp_ops->read_optrom(VAR_4, (uint8_t *)VAR_7->ring,
  0x003e885c , 8);

 if (*VAR_5 == FUNC_1(0xffffffff)) {
  VAR_6->fcoe_dev_init_timeout = VAR_1;
  VAR_6->fcoe_reset_timeout = VAR_2;
 } else {
  VAR_6->fcoe_dev_init_timeout = FUNC_2(*VAR_5++);
  VAR_6->fcoe_reset_timeout = FUNC_2(*VAR_5);
 }
 FUNC_3(VAR_3, VAR_4, 0x004e,
     "fcoe_dev_init_timeout=%d "
     "fcoe_reset_timeout=%d.\n", VAR_6->fcoe_dev_init_timeout,
     VAR_6->fcoe_reset_timeout);
 return;
}
