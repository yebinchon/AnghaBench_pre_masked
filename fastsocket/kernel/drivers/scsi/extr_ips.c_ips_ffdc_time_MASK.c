
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ reset_type; scalar_t__ reset_count; int command_id; void* op_code; } ;
struct TYPE_15__ {TYPE_1__ ffdc; } ;
struct TYPE_16__ {TYPE_2__ cmd; void** cdb; int timeout; } ;
typedef TYPE_3__ ips_scb_t ;
struct TYPE_17__ {int max_cmds; int last_ffdc; TYPE_3__* scbs; int host_num; } ;
typedef TYPE_4__ ips_ha_t ;


 int FUNC_0 (int,char*,int ,int ) ;
 void* VAR_0 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(ips_ha_t * VAR_4)
{
 ips_scb_t *VAR_5;

 FUNC_2("ips_ffdc_time", 1);

 FUNC_0(1, "(%s%d) Sending time update.", VAR_3, VAR_4->host_num);

 VAR_5 = &VAR_4->scbs[VAR_4->max_cmds - 1];

 FUNC_4(VAR_4, VAR_5);

 VAR_5->timeout = VAR_2;
 VAR_5->cdb[0] = VAR_0;
 VAR_5->cmd.ffdc.op_code = VAR_0;
 VAR_5->cmd.ffdc.command_id = FUNC_1(VAR_4, VAR_5);
 VAR_5->cmd.ffdc.reset_count = 0;
 VAR_5->cmd.ffdc.reset_type = 0;


 FUNC_3(VAR_4, VAR_5, VAR_4->last_ffdc);


 FUNC_5(VAR_4, VAR_5, VAR_2, VAR_1);
}
