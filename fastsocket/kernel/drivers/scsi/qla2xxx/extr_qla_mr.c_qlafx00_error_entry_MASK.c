
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct sts_entry_fx00 {int handle; } ;
struct rsp_que {int dummy; } ;
struct req_que {int dummy; } ;
struct qla_hw_data {struct req_que** req_q_map; } ;
struct TYPE_9__ {int (* done ) (struct qla_hw_data*,TYPE_1__*,int) ;} ;
typedef TYPE_1__ srb_t ;
struct TYPE_10__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*,int,char*,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char const*,struct req_que*,struct sts_entry_fx00*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct qla_hw_data*,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_6(scsi_qla_host_t *VAR_3, struct rsp_que *VAR_4,
      struct sts_entry_fx00 *VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
 srb_t *VAR_8;
 struct qla_hw_data *VAR_9 = VAR_3->hw;
 const char VAR_10[] = "ERROR-IOCB";
 uint16_t VAR_11 = FUNC_0(VAR_5->handle);
 struct req_que *VAR_12 = ((void*)0);
 int VAR_13 = VAR_0 << 16;

 FUNC_1(VAR_2, VAR_3, 0x507f,
     "type of error status in response: 0x%x\n", VAR_6);

 VAR_12 = VAR_9->req_q_map[VAR_11];

 VAR_8 = FUNC_2(VAR_3, VAR_10, VAR_12, VAR_5);
 if (VAR_8) {
  VAR_8->done(VAR_9, VAR_8, VAR_13);
  return;
 }

 FUNC_4(VAR_1, &VAR_3->dpc_flags);
 FUNC_3(VAR_3);
}
