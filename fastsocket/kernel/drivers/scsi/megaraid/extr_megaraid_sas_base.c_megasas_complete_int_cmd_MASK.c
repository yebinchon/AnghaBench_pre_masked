
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {int int_cmd_wait_q; } ;
struct megasas_cmd {scalar_t__ cmd_status; TYPE_2__* frame; } ;
struct TYPE_3__ {scalar_t__ cmd_status; } ;
struct TYPE_4__ {TYPE_1__ io; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct megasas_instance *VAR_1,
    struct megasas_cmd *VAR_2)
{
 VAR_2->cmd_status = VAR_2->frame->io.cmd_status;

 if (VAR_2->cmd_status == VAR_0) {
  VAR_2->cmd_status = 0;
 }
 FUNC_0(&VAR_1->int_cmd_wait_q);
}
