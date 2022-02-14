
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int tot_ddbs; struct ddb_entry** fw_ddb_index_map; } ;
struct ddb_entry {size_t fw_ddb_index; } ;


 scalar_t__ VAR_0 ;

void FUNC_0(struct scsi_qla_host *VAR_1,
    struct ddb_entry *VAR_2)
{

 VAR_1->fw_ddb_index_map[VAR_2->fw_ddb_index] =
  (struct ddb_entry *) VAR_0;
 VAR_1->tot_ddbs--;
}
