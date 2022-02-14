
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {scalar_t__ nic_core_reset_owner; } ;
struct qla_hw_data {int portnum; TYPE_1__ flags; int fcoe_reset_timeout; int fcoe_dev_init_timeout; } ;
struct TYPE_16__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,TYPE_2__*,int,char*) ;
 int VAR_11 ;
 int FUNC_4 (int ,TYPE_2__*,int,char*,scalar_t__,scalar_t__) ;
 int VAR_12 ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,scalar_t__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_12(scsi_qla_host_t *VAR_13)
{
 int VAR_14 = VAR_10;
 struct qla_hw_data *VAR_15 = VAR_13->hw;
 uint32_t VAR_16, VAR_17;
 uint16_t VAR_18[4];

 FUNC_6(VAR_13, 0);




 VAR_15->fcoe_dev_init_timeout = VAR_1;
 VAR_15->fcoe_reset_timeout = VAR_5;


 if (FUNC_1(VAR_13) != VAR_10) {
  FUNC_3(VAR_11, VAR_13, 0xb077,
      "Error while setting DRV-Presence.\n");
  VAR_14 = VAR_9;
  goto exit;
 }


 FUNC_10(VAR_13);







 FUNC_9(VAR_13, VAR_3, &VAR_16);
 if (VAR_15->flags.nic_core_reset_owner) {

  VAR_16 = VAR_6;
  FUNC_11(VAR_13, VAR_3, VAR_16);


  FUNC_11(VAR_13, VAR_2, 0);
 } else if (VAR_16 != VAR_6) {




  FUNC_4(VAR_12, VAR_13, 0xb07d,
      "Failing load, idc_major_ver=%d, expected_major_ver=%d.\n",
      VAR_16, VAR_6);
  FUNC_0(VAR_13);
  VAR_14 = VAR_9;
  goto exit;
 }

 FUNC_9(VAR_13, VAR_4, &VAR_17);
 VAR_17 |= (VAR_7 << (VAR_15->portnum * 2));
 FUNC_11(VAR_13, VAR_4, VAR_17);

 if (VAR_15->flags.nic_core_reset_owner) {
  FUNC_2(VAR_18, 0, sizeof(VAR_18));
  if (!FUNC_5(VAR_13, VAR_18))
   FUNC_11(VAR_13, VAR_0,
       VAR_8);
 }

 VAR_14 = FUNC_7(VAR_13);

exit:
 FUNC_8(VAR_13, 0);

 return VAR_14;
}
