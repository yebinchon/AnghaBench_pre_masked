
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_11__ {scalar_t__ idc_compl_status; } ;
struct qla_hw_data {int notify_dcbx_comp; TYPE_2__ flags; TYPE_1__* isp_ops; int dcbx_comp; } ;
struct TYPE_12__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_10__ {int (* fw_dump ) (TYPE_3__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_10 ;
 int FUNC_4 (int ,TYPE_3__*,int,char*) ;
 int VAR_11 ;
 int FUNC_5 (TYPE_3__*,scalar_t__*,int ,int ) ;
 int FUNC_6 (TYPE_3__*,scalar_t__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static inline int
FUNC_10(scsi_qla_host_t *VAR_12, uint16_t *VAR_13,
    uint16_t *VAR_14, uint16_t VAR_15)
{
 int VAR_16 = 0;
 int VAR_17 = 0;
 struct qla_hw_data *VAR_18 = VAR_12->hw;

 if (!FUNC_1(VAR_18) && !FUNC_0(VAR_18))
  goto done_set_internal;

 if (VAR_15 == VAR_6)
  VAR_14[0] = VAR_13[0] | (VAR_3 << 1);
 else if (VAR_15 == VAR_4)
  VAR_14[0] = VAR_13[0] | (VAR_2 << 1);
 FUNC_3(VAR_10, VAR_12, 0x70be,
      "new_config[0]=%02x\n", (VAR_14[0] & VAR_7));

 FUNC_2(&VAR_14[1], &VAR_13[1], sizeof(uint16_t) * 3);

 VAR_18->notify_dcbx_comp = 1;
 VAR_16 = FUNC_6(VAR_12, VAR_14);
 if (VAR_16 != VAR_9) {
  FUNC_4(VAR_11, VAR_12, 0x7021,
      "set port config failed.\n");
  VAR_18->notify_dcbx_comp = 0;
  VAR_17 = -VAR_1;
  goto done_set_internal;
 }


 if (!FUNC_9(&VAR_18->dcbx_comp,
     (VAR_0 * VAR_5))) {
  FUNC_3(VAR_10, VAR_12, 0x7022,
      "DCBX completion not received.\n");
  VAR_16 = FUNC_5(VAR_12, VAR_14, 0, 0);




  if (VAR_16) {
   VAR_18->isp_ops->fw_dump(VAR_12, 0);
   FUNC_7(VAR_8, &VAR_12->dpc_flags);
  }
  VAR_17 = -VAR_1;
 } else {
                if (VAR_18->flags.idc_compl_status) {
   FUNC_3(VAR_10, VAR_12, 0x70c3,
       "Bad status in IDC Completion AEN\n");
   VAR_17 = -VAR_1;
   VAR_18->flags.idc_compl_status = 0;
  } else
   FUNC_3(VAR_10, VAR_12, 0x7023,
       "DCBX completion received.\n");
 }

 VAR_18->notify_dcbx_comp = 0;

done_set_internal:
 return VAR_17;
}
