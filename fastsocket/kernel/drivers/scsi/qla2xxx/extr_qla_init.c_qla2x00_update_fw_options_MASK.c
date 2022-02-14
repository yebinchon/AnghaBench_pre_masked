
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {scalar_t__ enable_led_scheme; } ;
struct qla_hw_data {int* fw_options; int* fw_seriallink_options; TYPE_1__ flags; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (scalar_t__,TYPE_2__*,int,char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_9 (scalar_t__,TYPE_2__*,int,int *,int) ;
 int FUNC_10 (TYPE_2__*,int*) ;
 int FUNC_11 (TYPE_2__*,int*) ;

void
FUNC_12(scsi_qla_host_t *VAR_13)
{
 uint16_t VAR_14, VAR_15, VAR_16, VAR_17;
 struct qla_hw_data *VAR_18 = VAR_13->hw;

 FUNC_7(VAR_18->fw_options, 0, sizeof(VAR_18->fw_options));
 FUNC_10(VAR_13, VAR_18->fw_options);

 if (FUNC_0(VAR_18) || FUNC_1(VAR_18))
  return;


 FUNC_8(VAR_12 + VAR_11, VAR_13, 0x0115,
     "Serial link options.\n");
 FUNC_9(VAR_12 + VAR_11, VAR_13, 0x0109,
     (uint8_t *)&VAR_18->fw_seriallink_options,
     sizeof(VAR_18->fw_seriallink_options));

 VAR_18->fw_options[1] &= ~VAR_10;
 if (VAR_18->fw_seriallink_options[3] & VAR_4) {
  VAR_18->fw_options[1] |= VAR_10;


  VAR_14 = VAR_18->fw_seriallink_options[2] & (VAR_4 | VAR_1 | VAR_0);
  VAR_15 = (VAR_18->fw_seriallink_options[2] &
      (VAR_6 | VAR_5)) >> 3;
  VAR_16 = VAR_18->fw_seriallink_options[0] &
      (VAR_5 | VAR_4 | VAR_1 | VAR_0);
  VAR_17 = (VAR_18->fw_seriallink_options[0] &
      (VAR_9 | VAR_8 | VAR_7 | VAR_6)) >> 4;
  VAR_18->fw_options[10] = (VAR_15 << 14) | (VAR_14 << 8);
  if (FUNC_2(VAR_18) || FUNC_3(VAR_18) || FUNC_5(VAR_18)) {
   if (VAR_17 == 0x0)
    VAR_17 = 0x3;
   VAR_18->fw_options[10] |= (VAR_16 << 4) | VAR_17;
  } else if (FUNC_4(VAR_18) || FUNC_6(VAR_18))
   VAR_18->fw_options[10] |= VAR_7 |
       ((VAR_17 & (VAR_1 | VAR_0)) << 2) |
       (VAR_16 & (VAR_1 | VAR_0));


  VAR_14 = (VAR_18->fw_seriallink_options[2] &
      (VAR_9 | VAR_8 | VAR_7)) >> 5;
  VAR_15 = VAR_18->fw_seriallink_options[3] & (VAR_1 | VAR_0);
  VAR_16 = VAR_18->fw_seriallink_options[1] &
      (VAR_5 | VAR_4 | VAR_1 | VAR_0);
  VAR_17 = (VAR_18->fw_seriallink_options[1] &
      (VAR_9 | VAR_8 | VAR_7 | VAR_6)) >> 4;
  VAR_18->fw_options[11] = (VAR_15 << 14) | (VAR_14 << 8);
  if (FUNC_2(VAR_18) || FUNC_3(VAR_18) || FUNC_5(VAR_18)) {
   if (VAR_17 == 0x0)
    VAR_17 = 0x3;
   VAR_18->fw_options[11] |= (VAR_16 << 4) | VAR_17;
  } else if (FUNC_4(VAR_18) || FUNC_6(VAR_18))
   VAR_18->fw_options[11] |= VAR_7 |
       ((VAR_17 & (VAR_1 | VAR_0)) << 2) |
       (VAR_16 & (VAR_1 | VAR_0));
 }



 VAR_18->fw_options[3] |= VAR_3;


 if (VAR_18->flags.enable_led_scheme)
  VAR_18->fw_options[2] |= VAR_2;


 if (FUNC_5(VAR_18))
  VAR_18->fw_options[2] |= VAR_3;


 FUNC_11(VAR_13, VAR_18->fw_options);
}
