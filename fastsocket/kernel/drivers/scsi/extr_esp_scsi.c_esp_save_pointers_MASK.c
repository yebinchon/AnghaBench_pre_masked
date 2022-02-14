
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct esp_cmd_priv {int tot_residue; int cur_sg; int cur_residue; } ;
struct esp_cmd_entry {int flags; int saved_tot_residue; int saved_cur_sg; int saved_cur_residue; int sense_ptr; int saved_sense_ptr; struct scsi_cmnd* cmd; } ;
struct esp {int dummy; } ;


 int VAR_0 ;
 struct esp_cmd_priv* FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_1(struct esp *VAR_1, struct esp_cmd_entry *VAR_2)
{
 struct scsi_cmnd *VAR_3 = VAR_2->cmd;
 struct esp_cmd_priv *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2->flags & VAR_0) {
  VAR_2->saved_sense_ptr = VAR_2->sense_ptr;
  return;
 }
 VAR_2->saved_cur_residue = VAR_4->cur_residue;
 VAR_2->saved_cur_sg = VAR_4->cur_sg;
 VAR_2->saved_tot_residue = VAR_4->tot_residue;
}
