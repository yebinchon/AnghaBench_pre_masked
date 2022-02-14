
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct esp_target_data {int dummy; } ;
struct esp_cmd_entry {struct scsi_cmnd* cmd; } ;
struct esp {scalar_t__* msg_in; int msg_out_len; int * msg_out; struct esp_target_data* target; struct esp_cmd_entry* active_cmd; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct esp*,struct esp_target_data*) ;
 int FUNC_1 (struct esp*,struct esp_target_data*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct esp*,int ) ;

__attribute__((used)) static void FUNC_4(struct esp *VAR_4)
{
 struct esp_cmd_entry *VAR_5 = VAR_4->active_cmd;
 struct scsi_cmnd *VAR_6 = VAR_5->cmd;
 struct esp_target_data *VAR_7;
 int VAR_8 = VAR_6->device->id;

 VAR_7 = &VAR_4->target[VAR_8];
 if (VAR_4->msg_in[2] == VAR_2) {
  FUNC_0(VAR_4, VAR_7);
  return;
 }
 if (VAR_4->msg_in[2] == VAR_3) {
  FUNC_1(VAR_4, VAR_7);
  return;
 }

 FUNC_2("ESP: Unexpected extended msg type %x\n",
        VAR_4->msg_in[2]);

 VAR_4->msg_out[0] = VAR_0;
 VAR_4->msg_out_len = 1;
 FUNC_3(VAR_4, VAR_1);
}
