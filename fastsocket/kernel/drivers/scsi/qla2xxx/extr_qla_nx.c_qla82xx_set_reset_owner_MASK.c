
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int nic_core_reset_owner; } ;
struct qla_hw_data {int portnum; TYPE_1__ flags; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,TYPE_2__*,int,char*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct qla_hw_data*,int ) ;
 int FUNC_4 (struct qla_hw_data*,int ,int ) ;

void
FUNC_5(scsi_qla_host_t *VAR_6)
{
 struct qla_hw_data *VAR_7 = VAR_6->hw;
 uint32_t VAR_8;

 VAR_8 = FUNC_3(VAR_7, VAR_1);
 if (VAR_8 == VAR_3) {
  FUNC_2(VAR_5, VAR_6, 0xb02f,
      "HW State: NEED RESET\n");
  FUNC_4(VAR_7, VAR_1,
   VAR_2);
  VAR_7->flags.nic_core_reset_owner = 1;
  FUNC_1(VAR_4, VAR_6, 0xb030,
      "reset_owner is 0x%x\n", VAR_7->portnum);
 } else
  FUNC_2(VAR_5, VAR_6, 0xb031,
      "Device state is 0x%x = %s.\n",
      VAR_8,
      VAR_8 < VAR_0 ? FUNC_0(VAR_8) : "Unknown");
}
