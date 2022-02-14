
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int arg1; } ;
struct TYPE_4__ {int cmd; scalar_t__ arg3; scalar_t__ arg2; scalar_t__ arg1; } ;
struct netxen_cmd_args {TYPE_1__ rsp; TYPE_2__ req; } ;
struct netxen_adapter {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct netxen_cmd_args*,int ,int) ;
 scalar_t__ FUNC_1 (struct netxen_adapter*,struct netxen_cmd_args*) ;

int
FUNC_2(struct netxen_adapter *VAR_3, u32 VAR_4, u32 *VAR_5)
{
 u32 VAR_6;
 struct netxen_cmd_args VAR_7;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.req.arg1 = VAR_4;
 VAR_7.req.arg2 = 0;
 VAR_7.req.arg3 = 0;
 VAR_7.req.cmd = VAR_1;
 VAR_7.rsp.arg1 = 1;
 VAR_6 = FUNC_1(VAR_3, &VAR_7);
 if (VAR_6 != VAR_2)
  return -VAR_0;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 *VAR_5 = VAR_7.rsp.arg1;
 return 0;
}
