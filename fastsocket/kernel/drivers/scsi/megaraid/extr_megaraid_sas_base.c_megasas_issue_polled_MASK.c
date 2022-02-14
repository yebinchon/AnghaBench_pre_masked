
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {TYPE_2__* instancet; } ;
struct megasas_header {int cmd_status; int flags; } ;
struct megasas_cmd {TYPE_1__* frame; } ;
struct TYPE_4__ {int (* issue_dcmd ) (struct megasas_instance*,struct megasas_cmd*) ;} ;
struct TYPE_3__ {struct megasas_header hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_1 (struct megasas_instance*,struct megasas_cmd*) ;

int
FUNC_2(struct megasas_instance *VAR_1, struct megasas_cmd *VAR_2)
{

 struct megasas_header *VAR_3 = &VAR_2->frame->hdr;

 VAR_3->cmd_status = 0xFF;
 VAR_3->flags |= VAR_0;




 VAR_1->instancet->issue_dcmd(VAR_1, VAR_2);




 return FUNC_1(VAR_1, VAR_2);
}
