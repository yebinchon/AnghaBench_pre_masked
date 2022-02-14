
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {char* ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct megasas_instance {int reg_set; TYPE_2__* instancet; int fw_outstanding; } ;
struct megasas_cmd {scalar_t__ frame_count; int frame_phys_addr; struct scsi_cmnd* scmd; } ;
struct TYPE_4__ {int (* fire_cmd ) (struct megasas_instance*,int ,scalar_t__,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct megasas_instance*,struct scsi_cmnd*,struct megasas_cmd*) ;
 int FUNC_2 (struct megasas_instance*,struct scsi_cmnd*,struct megasas_cmd*) ;
 struct megasas_cmd* FUNC_3 (struct megasas_instance*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_6 (struct megasas_instance*,int ,scalar_t__,int ) ;

u32
FUNC_7(struct megasas_instance *VAR_1,
       struct scsi_cmnd *VAR_2)
{
 struct megasas_cmd *VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3)
  return VAR_0;




 if (FUNC_4(VAR_2))
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (!VAR_4)
  goto out_return_cmd;

 VAR_3->scmd = VAR_2;
 VAR_2->SCp.ptr = (char *)VAR_3;




 FUNC_0(&VAR_1->fw_outstanding);

 VAR_1->instancet->fire_cmd(VAR_1, VAR_3->frame_phys_addr,
    VAR_3->frame_count-1, VAR_1->reg_set);

 return 0;
out_return_cmd:
 FUNC_5(VAR_1, VAR_3);
 return 1;
}
