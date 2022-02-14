
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_15__ {int nic_core_reset_owner; int quiesce_owner; } ;
struct qla_hw_data {unsigned long fcoe_dev_init_timeout; TYPE_1__ flags; int portnum; } ;
struct TYPE_16__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 unsigned long VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int ,TYPE_2__*,int,char*,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int*) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;

int
FUNC_13(scsi_qla_host_t *VAR_10)
{
 struct qla_hw_data *VAR_11 = VAR_10->hw;
 int VAR_12 = VAR_4;
 unsigned long VAR_13;
 uint32_t VAR_14;


 VAR_13 = VAR_5 + (VAR_11->fcoe_dev_init_timeout * VAR_0);

 while (1) {

  if (FUNC_12(VAR_5, VAR_13)) {
   FUNC_3(VAR_9, VAR_10, 0xb06e,
       "Initialization TIMEOUT!\n");



   FUNC_10(VAR_10, VAR_2,
    133);
   FUNC_3(VAR_8, VAR_10, 0xb06f,
       "HW State: FAILED.\n");
  }

  FUNC_9(VAR_10, VAR_2, &VAR_14);
  switch (VAR_14) {
  case 128:
   if (VAR_11->flags.nic_core_reset_owner)
    FUNC_5(VAR_10,
        VAR_1);
   VAR_11->flags.nic_core_reset_owner = 0;
   FUNC_2(VAR_7, VAR_10, 0xb070,
       "Reset_owner reset by 0x%x.\n",
       VAR_11->portnum);
   goto exit;
  case 134:
   if (VAR_11->flags.nic_core_reset_owner)
    VAR_12 = FUNC_4(VAR_10);
   else {

    FUNC_7(VAR_10, 0);
    FUNC_1(1000);
    FUNC_6(VAR_10, 0);
   }
   break;
  case 132:

   FUNC_7(VAR_10, 0);
   FUNC_1(1000);
   FUNC_6(VAR_10, 0);
   break;
  case 130:
   if (!VAR_6 && VAR_11->flags.nic_core_reset_owner)
    FUNC_8(VAR_10);
   else {

    FUNC_7(VAR_10, 0);
    FUNC_1(1000);
    FUNC_6(VAR_10, 0);
   }

   VAR_13 = VAR_5 +
       (VAR_11->fcoe_dev_init_timeout * VAR_0);
   break;
  case 131:

   FUNC_7(VAR_10, 0);
   FUNC_1(1000);
   FUNC_6(VAR_10, 0);
   break;
  case 129:

   if (VAR_11->flags.quiesce_owner)
    goto exit;

   FUNC_7(VAR_10, 0);
   FUNC_1(1000);
   FUNC_6(VAR_10, 0);
   VAR_13 = VAR_5 +
       (VAR_11->fcoe_dev_init_timeout * VAR_0);
   break;
  case 133:
   if (VAR_11->flags.nic_core_reset_owner)
    FUNC_5(VAR_10,
        VAR_1);
   VAR_11->flags.nic_core_reset_owner = 0;
   FUNC_0(VAR_10);
   FUNC_7(VAR_10, 0);
   FUNC_11(VAR_10);
   VAR_12 = VAR_3;
   FUNC_6(VAR_10, 0);
   goto exit;
  case 135:
   FUNC_7(VAR_10, 0);
   FUNC_1(1000);
   FUNC_6(VAR_10, 0);
   break;
  default:
   FUNC_3(VAR_9, VAR_10, 0xb071,
       "Unknow Device State: %x.\n", VAR_14);
   FUNC_7(VAR_10, 0);
   FUNC_11(VAR_10);
   VAR_12 = VAR_3;
   FUNC_6(VAR_10, 0);
   goto exit;
  }
 }

exit:
 return VAR_12;
}
