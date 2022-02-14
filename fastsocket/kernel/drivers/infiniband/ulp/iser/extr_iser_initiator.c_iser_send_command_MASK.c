
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct iser_tx_desc {int type; } ;
struct iser_data_buf {int data_len; scalar_t__ size; int buf; } ;
struct TYPE_2__ {scalar_t__ data_length; } ;
struct iscsi_task {int itt; TYPE_1__ unsol_r2t; scalar_t__ imm_count; struct scsi_cmnd* sc; scalar_t__ hdr; struct iscsi_iser_task* dd_data; } ;
struct iscsi_iser_task {int status; struct iser_data_buf* data; struct iser_tx_desc desc; } ;
struct iscsi_iser_conn {int ib_conn; } ;
struct iscsi_conn {struct iscsi_iser_conn* dd_data; } ;
struct iscsi_cmd {int flags; int data_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct iser_tx_desc*) ;
 int FUNC_1 (char*,struct iscsi_conn*,int ,int) ;
 int FUNC_2 (int ,struct iser_tx_desc*) ;
 int FUNC_3 (struct iscsi_task*,unsigned long) ;
 int FUNC_4 (struct iscsi_task*,scalar_t__,scalar_t__,unsigned long) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;

int FUNC_9(struct iscsi_conn *VAR_6,
        struct iscsi_task *VAR_7)
{
 struct iscsi_iser_conn *VAR_8 = VAR_6->dd_data;
 struct iscsi_iser_task *VAR_9 = VAR_7->dd_data;
 unsigned long VAR_10;
 int VAR_11;
 struct iser_data_buf *VAR_12;
 struct iscsi_cmd *VAR_13 = (struct iscsi_cmd *)VAR_7->hdr;
 struct scsi_cmnd *VAR_14 = VAR_7->sc;
 struct iser_tx_desc *VAR_15 = &VAR_9->desc;

 VAR_10 = FUNC_5(VAR_13->data_length);


 VAR_15->type = VAR_2;
 FUNC_0(VAR_8->ib_conn, VAR_15);

 if (VAR_13->flags & VAR_0)
  VAR_12 = &VAR_9->data[VAR_3];
 else
  VAR_12 = &VAR_9->data[VAR_4];

 if (FUNC_7(VAR_14)) {
  VAR_12->buf = FUNC_8(VAR_14);
  VAR_12->size = FUNC_7(VAR_14);
 }

 VAR_12->data_len = FUNC_6(VAR_14);

 if (VAR_13->flags & VAR_0) {
  VAR_11 = FUNC_3(VAR_7, VAR_10);
  if (VAR_11)
   goto send_command_error;
 }
 if (VAR_13->flags & VAR_1) {
  VAR_11 = FUNC_4(VAR_7,
          VAR_7->imm_count,
                 VAR_7->imm_count +
          VAR_7->unsol_r2t.data_length,
          VAR_10);
  if (VAR_11)
   goto send_command_error;
 }

 VAR_9->status = VAR_5;

 VAR_11 = FUNC_2(VAR_8->ib_conn, VAR_15);
 if (!VAR_11)
  return 0;

send_command_error:
 FUNC_1("conn %p failed task->itt %d err %d\n",VAR_6, VAR_7->itt, VAR_11);
 return VAR_11;
}
