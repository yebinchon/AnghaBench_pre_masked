
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned long uint16_t ;
struct TYPE_12__ {scalar_t__ isp82xx_fw_hung; } ;
struct qla_hw_data {int retry_count; int login_timeout; TYPE_2__ flags; int r_a_tov; } ;
typedef int state ;
struct TYPE_11__ {int init_done; } ;
struct TYPE_13__ {int device_flags; int loop_down_timer; TYPE_1__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned long VAR_8 ;
 int FUNC_3 (unsigned long*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_9 ;
 int FUNC_6 (int ,TYPE_3__*,int,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (TYPE_3__*,unsigned long*) ;
 int FUNC_8 (TYPE_3__*,int*,int*,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_12(scsi_qla_host_t *VAR_12)
{
 int VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16;
 uint16_t VAR_17;
 uint16_t VAR_18;
 uint16_t VAR_19[5];
 struct qla_hw_data *VAR_20 = VAR_12->hw;

 if (FUNC_1(VAR_12->hw))
  return FUNC_10(VAR_12);

 VAR_13 = VAR_7;


 VAR_17 = 60;





 if ((VAR_18 = (VAR_20->retry_count*VAR_20->login_timeout) + 5) < VAR_17) {
  VAR_18 = VAR_17;
 }


 VAR_15 = VAR_8 + (VAR_17 * VAR_5);


 VAR_14 = VAR_8 + (VAR_18 * VAR_5);


 if (!VAR_12->flags.init_done)
  FUNC_6(VAR_10, VAR_12, 0x801e,
      "Waiting for LIP to complete.\n");

 do {
  FUNC_3(VAR_19, -1, sizeof(VAR_19));
  VAR_13 = FUNC_7(VAR_12, VAR_19);
  if (VAR_13 == VAR_7) {
   if (VAR_19[0] < VAR_2) {
    VAR_12->device_flags &= ~VAR_0;
   }
   if (FUNC_0(VAR_20) && VAR_19[0] != VAR_3) {
    FUNC_5(VAR_9, VAR_12, 0x801f,
        "fw_state=%x 84xx=%x.\n", VAR_19[0],
        VAR_19[2]);
    if ((VAR_19[2] & VAR_1) &&
         (VAR_19[2] & VAR_4)) {
     FUNC_5(VAR_9, VAR_12, 0x8028,
         "Sending verify iocb.\n");

     VAR_16 = VAR_8;
     VAR_13 = FUNC_9(VAR_12);
     if (VAR_13 != VAR_7) {
      FUNC_6(VAR_11,
          VAR_12, 0x8007,
          "Init chip failed.\n");
      break;
     }


     VAR_16 = VAR_8 - VAR_16;
     VAR_14 += VAR_16;
     VAR_15 += VAR_16;
     FUNC_5(VAR_9, VAR_12, 0x8008,
         "Increasing wait time by %ld. "
         "New time %ld.\n", VAR_16,
         VAR_14);
    }
   } else if (VAR_19[0] == VAR_3) {
    FUNC_5(VAR_9, VAR_12, 0x8037,
        "F/W Ready - OK.\n");

    FUNC_8(VAR_12, &VAR_20->retry_count,
        &VAR_20->login_timeout, &VAR_20->r_a_tov);

    VAR_13 = VAR_7;
    break;
   }

   VAR_13 = VAR_6;

   if (FUNC_2(&VAR_12->loop_down_timer) &&
       VAR_19[0] != VAR_3) {



    if (FUNC_11(VAR_8, VAR_15)) {
     FUNC_6(VAR_10, VAR_12, 0x8038,
         "Cable is unplugged...\n");

     VAR_12->device_flags |= VAR_0;
     break;
    }
   }
  } else {

   if (FUNC_11(VAR_8, VAR_15) ||
    VAR_20->flags.isp82xx_fw_hung)
    break;
  }

  if (FUNC_11(VAR_8, VAR_14))
   break;


  FUNC_4(500);
 } while (1);

 FUNC_5(VAR_9, VAR_12, 0x803a,
     "fw_state=%x (%x, %x, %x, %x) " "curr time=%lx.\n", VAR_19[0],
     VAR_19[1], VAR_19[2], VAR_19[3], VAR_19[4], VAR_8);

 if (VAR_13 && !(VAR_12->device_flags & VAR_0)) {
  FUNC_6(VAR_11, VAR_12, 0x803b,
      "Firmware ready **** FAILED ****.\n");
 }

 return (VAR_13);
}
