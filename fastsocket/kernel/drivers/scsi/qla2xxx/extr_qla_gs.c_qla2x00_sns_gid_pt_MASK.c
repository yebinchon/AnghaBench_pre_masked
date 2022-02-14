
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_16__ {int domain; int area; int al_pa; int rsvd_1; } ;
struct TYPE_17__ {TYPE_3__ b; } ;
struct TYPE_18__ {TYPE_4__ d_id; } ;
typedef TYPE_5__ sw_info_t ;
struct TYPE_14__ {int * param; } ;
struct TYPE_15__ {int* gid_data; TYPE_1__ cmd; } ;
struct sns_cmd_pkt {TYPE_2__ p; } ;
struct qla_hw_data {int max_fibre_devices; int sns_cmd_dma; } ;
struct TYPE_19__ {struct qla_hw_data* hw; } ;
typedef TYPE_6__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,TYPE_6__*,int,char*,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__,TYPE_6__*,int,int*,int) ;
 int FUNC_2 (TYPE_6__*) ;
 struct sns_cmd_pkt* FUNC_3 (TYPE_6__*,int ,int ,int) ;
 int FUNC_4 (TYPE_6__*,int ,int,int) ;

__attribute__((used)) static int
FUNC_5(scsi_qla_host_t *VAR_9, sw_info_t *VAR_10)
{
 int VAR_11;
 struct qla_hw_data *VAR_12 = VAR_9->hw;
 uint16_t VAR_13;
 uint8_t *VAR_14;
 struct sns_cmd_pkt *VAR_15;
 uint16_t VAR_16;

 VAR_16 = FUNC_2(VAR_9);



 VAR_15 = FUNC_3(VAR_9, VAR_1, VAR_3,
     VAR_16);


 VAR_15->p.cmd.param[0] = VAR_4;


 VAR_11 = FUNC_4(VAR_9, VAR_12->sns_cmd_dma, VAR_2 / 2,
     sizeof(struct sns_cmd_pkt));
 if (VAR_11 != VAR_6) {

  FUNC_0(VAR_8, VAR_9, 0x206d,
      "GID_PT Send SNS failed (%d).\n", VAR_11);
 } else if (VAR_15->p.gid_data[8] != 0x80 ||
     VAR_15->p.gid_data[9] != 0x02) {
  FUNC_0(VAR_8, VAR_9, 0x202f,
      "GID_PT failed, rejected request, gid_rsp:\n");
  FUNC_1(VAR_8 + VAR_7, VAR_9, 0x2081,
      VAR_15->p.gid_data, 16);
  VAR_11 = VAR_5;
 } else {

  for (VAR_13 = 0; VAR_13 < VAR_12->max_fibre_devices; VAR_13++) {
   VAR_14 = &VAR_15->p.gid_data[(VAR_13 * 4) + 16];
   VAR_10[VAR_13].d_id.b.domain = VAR_14[1];
   VAR_10[VAR_13].d_id.b.area = VAR_14[2];
   VAR_10[VAR_13].d_id.b.al_pa = VAR_14[3];


   if (VAR_14[0] & VAR_0) {
    VAR_10[VAR_13].d_id.b.rsvd_1 = VAR_14[0];
    break;
   }
  }







  if (VAR_13 == VAR_12->max_fibre_devices)
   VAR_11 = VAR_5;
 }

 return (VAR_11);
}
