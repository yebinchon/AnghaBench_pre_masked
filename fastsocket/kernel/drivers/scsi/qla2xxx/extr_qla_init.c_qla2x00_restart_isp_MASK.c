
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct rsp_que {int dummy; } ;
struct req_que {int dummy; } ;
struct TYPE_15__ {int chip_reset_done; } ;
struct qla_hw_data {TYPE_2__ flags; TYPE_1__* isp_ops; struct rsp_que** rsp_q_map; struct req_que** req_q_map; } ;
struct TYPE_16__ {int online; } ;
struct TYPE_17__ {int device_flags; int dpc_flags; int loop_down_timer; TYPE_3__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_14__ {int (* chip_diag ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_4__*,int,char*,int) ;
 int VAR_5 ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,struct req_que*,struct rsp_que*,int ,int ,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int
FUNC_12(scsi_qla_host_t *VAR_6)
{
 int VAR_7 = 0;
 uint32_t VAR_8;
 struct qla_hw_data *VAR_9 = VAR_6->hw;
 struct req_que *VAR_10 = VAR_9->req_q_map[0];
 struct rsp_que *VAR_11 = VAR_9->rsp_q_map[0];


 if (FUNC_7(VAR_6)) {
  VAR_6->flags.online = 0;
  VAR_7 = VAR_9->isp_ops->chip_diag(VAR_6);
  if (!VAR_7)
   VAR_7 = FUNC_9(VAR_6);
 }

 if (!VAR_7 && !(VAR_7 = FUNC_6(VAR_6))) {
  FUNC_1(VAR_4, &VAR_6->dpc_flags);
  VAR_9->flags.chip_reset_done = 1;

  FUNC_3(VAR_9);

  VAR_7 = FUNC_5(VAR_6);
  if (!VAR_7) {
   FUNC_2(VAR_5, VAR_6, 0x8031,
       "Start configure loop status = %d.\n", VAR_7);


   FUNC_8(VAR_6, VAR_10, VAR_11, 0, 0, VAR_3);

   VAR_6->flags.online = 1;

   VAR_8 = 256;
   do {
    FUNC_1(VAR_2, &VAR_6->dpc_flags);
    FUNC_4(VAR_6);
    VAR_8--;
   } while (!FUNC_0(&VAR_6->loop_down_timer) &&
    !(FUNC_11(VAR_1, &VAR_6->dpc_flags))
    && VAR_8 && (FUNC_11(VAR_2,
    &VAR_6->dpc_flags)));
  }


  if ((VAR_6->device_flags & VAR_0))
   VAR_7 = 0;

  FUNC_2(VAR_5, VAR_6, 0x8032,
      "Configure loop done, status = 0x%x.\n", VAR_7);
 }
 return (VAR_7);
}
