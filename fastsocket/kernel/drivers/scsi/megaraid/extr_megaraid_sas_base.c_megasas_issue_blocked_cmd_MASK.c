
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {int int_cmd_wait_q; TYPE_1__* instancet; } ;
struct megasas_cmd {scalar_t__ cmd_status; } ;
struct TYPE_2__ {int (* issue_dcmd ) (struct megasas_instance*,struct megasas_cmd*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct megasas_instance *VAR_1,
     struct megasas_cmd *VAR_2)
{
 VAR_2->cmd_status = VAR_0;

 VAR_1->instancet->issue_dcmd(VAR_1, VAR_2);

 FUNC_1(VAR_1->int_cmd_wait_q, VAR_2->cmd_status != VAR_0);

 return 0;
}
