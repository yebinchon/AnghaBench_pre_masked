
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct scsi_qla_host {int dpc_flags; struct qla_hw_data* hw; } ;
struct rsp_que {int dummy; } ;
struct req_que {scalar_t__ num_outstanding_cmds; int ** outstanding_cmds; } ;
struct qla_hw_data {struct req_que** req_q_map; } ;
struct multi_sts_entry_fx00 {scalar_t__ handle_count; int * handles; } ;
typedef int srb_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (struct scsi_qla_host*,struct req_que*,scalar_t__) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct scsi_qla_host *VAR_3,
 struct rsp_que *VAR_4, void *VAR_5)
{
 srb_t *VAR_6;
 struct multi_sts_entry_fx00 *VAR_7;
 struct qla_hw_data *VAR_8 = VAR_3->hw;
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12;
 uint16_t VAR_13;
 struct req_que *VAR_14;
 uint32_t *VAR_15;

 VAR_7 = (struct multi_sts_entry_fx00 *) VAR_5;

 VAR_11 = VAR_7->handle_count;

 if (VAR_11 > VAR_1) {
  FUNC_3(VAR_2, VAR_3, 0x3035,
      "Invalid handle count (0x%x).\n", VAR_11);
  FUNC_6(VAR_0, &VAR_3->dpc_flags);
  FUNC_5(VAR_3);
  return;
 }

 VAR_15 = (uint32_t *) &VAR_7->handles[0];

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_10 = FUNC_2(*VAR_15);
  VAR_9 = FUNC_0(VAR_10);
  VAR_13 = FUNC_1(VAR_10);
  VAR_14 = VAR_8->req_q_map[VAR_13];


  if (VAR_9 < VAR_14->num_outstanding_cmds)
   VAR_6 = VAR_14->outstanding_cmds[VAR_9];
  else
   VAR_6 = ((void*)0);

  if (VAR_6 == ((void*)0)) {
   FUNC_3(VAR_2, VAR_3, 0x3044,
       "Invalid status handle (0x%x).\n", VAR_9);
   FUNC_6(VAR_0, &VAR_3->dpc_flags);
   FUNC_5(VAR_3);
   return;
  }
  FUNC_4(VAR_3, VAR_14, VAR_9);
  VAR_15++;
 }
}
