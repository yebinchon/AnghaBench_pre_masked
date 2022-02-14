
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct qla_hw_data {int notify_dcbx_comp; int notify_lb_portup_comp; int lb_portup_comp; int dcbx_comp; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
typedef int new_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_8 ;
 int FUNC_5 (int ,TYPE_1__*,int,char*) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static inline int
FUNC_8(scsi_qla_host_t *VAR_10, uint16_t *VAR_11,
       int VAR_12, int VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = 0;
 uint16_t VAR_16[4];
 struct qla_hw_data *VAR_17 = VAR_10->hw;

 if (!FUNC_1(VAR_17) && !FUNC_0(VAR_17))
  goto done_reset_internal;

 FUNC_3(VAR_16, 0 , sizeof(VAR_16));
 if ((VAR_11[0] & VAR_5) >> 1 ==
     VAR_3 ||
     (VAR_11[0] & VAR_5) >> 1 ==
     VAR_2) {
  VAR_16[0] = VAR_11[0] & ~VAR_5;
  FUNC_4(VAR_8, VAR_10, 0x70bf, "new_config[0]=%02x\n",
      (VAR_16[0] & VAR_5));
  FUNC_2(&VAR_16[1], &VAR_11[1], sizeof(uint16_t) * 3) ;

  VAR_17->notify_dcbx_comp = VAR_12;
  VAR_17->notify_lb_portup_comp = VAR_13;

  VAR_14 = FUNC_6(VAR_10, VAR_16);
  if (VAR_14 != VAR_7) {
   FUNC_5(VAR_9, VAR_10, 0x7025,
       "Set port config failed.\n");
   VAR_17->notify_dcbx_comp = 0;
   VAR_17->notify_lb_portup_comp = 0;
   VAR_15 = -VAR_1;
   goto done_reset_internal;
  }


  if (VAR_12 && !FUNC_7(&VAR_17->dcbx_comp,
   (VAR_0 * VAR_4))) {
   FUNC_4(VAR_8, VAR_10, 0x7026,
       "DCBX completion not received.\n");
   VAR_17->notify_dcbx_comp = 0;
   VAR_17->notify_lb_portup_comp = 0;
   VAR_15 = -VAR_1;
   goto done_reset_internal;
  } else
   FUNC_4(VAR_8, VAR_10, 0x7027,
       "DCBX completion received.\n");

  if (VAR_13 &&
      !FUNC_7(&VAR_17->lb_portup_comp,
      (VAR_6 * VAR_4))) {
   FUNC_4(VAR_8, VAR_10, 0x70c5,
       "Port up completion not received.\n");
   VAR_17->notify_lb_portup_comp = 0;
   VAR_15 = -VAR_1;
   goto done_reset_internal;
  } else
   FUNC_4(VAR_8, VAR_10, 0x70c6,
       "Port up completion received.\n");

  VAR_17->notify_dcbx_comp = 0;
  VAR_17->notify_lb_portup_comp = 0;
 }
done_reset_internal:
 return VAR_15;
}
