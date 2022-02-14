
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct pvscsi_ctx {struct scsi_cmnd* cmd; } ;
struct pvscsi_adapter {size_t req_depth; struct pvscsi_ctx* cmd_map; } ;



__attribute__((used)) static struct pvscsi_ctx *
FUNC_0(const struct pvscsi_adapter *VAR_0, struct scsi_cmnd *VAR_1)
{
 struct pvscsi_ctx *VAR_2, *VAR_3;

 VAR_3 = &VAR_0->cmd_map[VAR_0->req_depth];
 for (VAR_2 = VAR_0->cmd_map; VAR_2 < VAR_3; VAR_2++)
  if (VAR_2->cmd == VAR_1)
   return VAR_2;

 return ((void*)0);
}
