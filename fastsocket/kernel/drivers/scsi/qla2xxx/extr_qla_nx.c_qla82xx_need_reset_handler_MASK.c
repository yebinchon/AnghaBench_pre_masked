
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct req_que {int ring; } ;
struct TYPE_14__ {scalar_t__ nic_core_reset_owner; } ;
struct qla_hw_data {int portnum; unsigned long fcoe_reset_timeout; TYPE_3__ flags; TYPE_2__* isp_ops; struct req_que** req_q_map; } ;
struct TYPE_12__ {scalar_t__ online; } ;
struct TYPE_15__ {TYPE_1__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_13__ {int (* nvram_config ) (TYPE_4__*) ;int (* get_flash_version ) (TYPE_4__*,int ) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,TYPE_4__*,int,char*,int,...) ;
 int VAR_10 ;
 int FUNC_3 (int ,TYPE_4__*,int,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 (struct qla_hw_data*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct qla_hw_data*,int ) ;
 int FUNC_9 (struct qla_hw_data*) ;
 int FUNC_10 (struct qla_hw_data*,int ,int) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*) ;
 scalar_t__ FUNC_13 (unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_14(scsi_qla_host_t *VAR_13)
{
 uint32_t VAR_14, VAR_15, VAR_16;
 uint32_t VAR_17 = 0;
 unsigned long VAR_18;
 struct qla_hw_data *VAR_19 = VAR_13->hw;
 struct req_que *VAR_20 = VAR_19->req_q_map[0];

 if (VAR_13->flags.online) {
  FUNC_6(VAR_19);
  FUNC_4(VAR_13);
  VAR_19->isp_ops->get_flash_version(VAR_13, VAR_20->ring);
  VAR_19->isp_ops->nvram_config(VAR_13);
  FUNC_5(VAR_19);
 }

 VAR_16 = FUNC_8(VAR_19, VAR_3);
 if (!VAR_19->flags.nic_core_reset_owner) {
  FUNC_2(VAR_10, VAR_13, 0xb028,
      "reset_acknowledged by 0x%x\n", VAR_19->portnum);
  FUNC_9(VAR_19);
 } else {
  VAR_17 = ~(VAR_5 << (VAR_19->portnum * 4));
  VAR_16 &= VAR_17;
  FUNC_2(VAR_10, VAR_13, 0xb029,
      "active_mask: 0x%08x\n", VAR_17);
 }


 VAR_18 = VAR_8 + (VAR_19->fcoe_reset_timeout * VAR_0);

 VAR_15 = FUNC_8(VAR_19, VAR_4);
 VAR_16 = FUNC_8(VAR_19, VAR_3);
 VAR_14 = FUNC_8(VAR_19, VAR_2);

 FUNC_2(VAR_10, VAR_13, 0xb02a,
     "drv_state: 0x%08x, drv_active: 0x%08x, "
     "dev_state: 0x%08x, active_mask: 0x%08x\n",
     VAR_15, VAR_16, VAR_14, VAR_17);

 while (VAR_15 != VAR_16 &&
  VAR_14 != VAR_7) {
  if (FUNC_13(VAR_8, VAR_18)) {
   FUNC_3(VAR_12, VAR_13, 0x00b5,
       "Reset timeout.\n");
   break;
  }
  FUNC_6(VAR_19);
  FUNC_0(1000);
  FUNC_5(VAR_19);
  VAR_15 = FUNC_8(VAR_19, VAR_4);
  VAR_16 = FUNC_8(VAR_19, VAR_3);
  if (VAR_19->flags.nic_core_reset_owner)
   VAR_16 &= VAR_17;
  VAR_14 = FUNC_8(VAR_19, VAR_2);
 }

 FUNC_2(VAR_10, VAR_13, 0xb02b,
     "drv_state: 0x%08x, drv_active: 0x%08x, "
     "dev_state: 0x%08x, active_mask: 0x%08x\n",
     VAR_15, VAR_16, VAR_14, VAR_17);

 FUNC_3(VAR_11, VAR_13, 0x00b6,
     "Device state is 0x%x = %s.\n",
     VAR_14,
     VAR_14 < VAR_1 ? FUNC_1(VAR_14) : "Unknown");


 if (VAR_14 != VAR_7 &&
     VAR_14 != VAR_6) {
  FUNC_3(VAR_11, VAR_13, 0x00b7,
      "HW State: COLD/RE-INIT.\n");
  FUNC_10(VAR_19, VAR_2, VAR_6);
  FUNC_9(VAR_19);
  if (VAR_9) {
   if (FUNC_7(VAR_13))
    FUNC_3(VAR_12, VAR_13, 0xb02c,
        "Minidump not collected.\n");
  } else
   FUNC_3(VAR_12, VAR_13, 0xb04f,
       "Minidump disabled.\n");
 }
}
