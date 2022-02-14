
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pvscsi_ctx {int dummy; } ;
struct pvscsi_adapter {struct pvscsi_ctx* cmd_map; } ;



__attribute__((used)) static struct pvscsi_ctx *
FUNC_0(const struct pvscsi_adapter *VAR_0, u64 VAR_1)
{
 return &VAR_0->cmd_map[VAR_1 - 1];
}
