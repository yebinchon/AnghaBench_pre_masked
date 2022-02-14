
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {void* arg3; void* arg2; void* arg1; int cmd; } ;
struct netxen_cmd_args {TYPE_1__ req; } ;
struct netxen_adapter {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct netxen_cmd_args*,int ,int) ;
 int FUNC_1 (struct netxen_adapter*,struct netxen_cmd_args*) ;

int
FUNC_2(struct netxen_adapter *VAR_1,
   u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct netxen_cmd_args VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.req.cmd = VAR_0;
 VAR_5.req.arg1 = VAR_2;
 VAR_5.req.arg2 = VAR_3;
 VAR_5.req.arg3 = VAR_4;
 return FUNC_1(VAR_1, &VAR_5);
}
