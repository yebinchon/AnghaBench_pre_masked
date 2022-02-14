
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_13__ {int entry_status; int handle; } ;
typedef TYPE_1__ sts_entry_t ;
struct rsp_que {int dummy; } ;
struct req_que {int dummy; } ;
struct qla_hw_data {size_t max_req_queues; struct req_que** req_q_map; } ;
struct TYPE_14__ {int (* done ) (struct qla_hw_data*,TYPE_2__*,int) ;} ;
typedef TYPE_2__ srb_t ;
struct TYPE_15__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 size_t FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_3__*,int,char*,int) ;
 int VAR_5 ;
 int FUNC_3 (int ,TYPE_3__*,int,char*) ;
 int VAR_6 ;
 TYPE_2__* FUNC_4 (TYPE_3__*,char const*,struct req_que*,TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct qla_hw_data*,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_8(scsi_qla_host_t *VAR_7, struct rsp_que *VAR_8, sts_entry_t *VAR_9)
{
 srb_t *VAR_10;
 struct qla_hw_data *VAR_11 = VAR_7->hw;
 const char VAR_12[] = "ERROR-IOCB";
 uint16_t VAR_13 = FUNC_1(VAR_9->handle);
 struct req_que *VAR_14 = ((void*)0);
 int VAR_15 = VAR_1 << 16;

 FUNC_2(VAR_5, VAR_7, 0x502a,
     "type of error status in response: 0x%x\n", VAR_9->entry_status);

 if (VAR_13 >= VAR_11->max_req_queues || !VAR_11->req_q_map[VAR_13])
  goto fatal;

 VAR_14 = VAR_11->req_q_map[VAR_13];

 if (VAR_9->entry_status & VAR_4)
  VAR_15 = VAR_0 << 16;
 VAR_10 = FUNC_4(VAR_7, VAR_12, VAR_14, VAR_9);
 if (VAR_10) {
  VAR_10->done(VAR_11, VAR_10, VAR_15);
  return;
 }
fatal:
 FUNC_3(VAR_6, VAR_7, 0x5030,
     "Error entry - invalid handle/queue.\n");

 if (FUNC_0(VAR_11))
  FUNC_6(VAR_2, &VAR_7->dpc_flags);
 else
  FUNC_6(VAR_3, &VAR_7->dpc_flags);
 FUNC_5(VAR_7);
}
