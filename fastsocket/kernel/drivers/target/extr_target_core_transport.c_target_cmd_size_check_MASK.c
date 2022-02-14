
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int block_size; } ;
struct se_device {TYPE_3__* transport; TYPE_2__ dev_attrib; } ;
struct se_cmd {unsigned int data_length; scalar_t__ data_direction; unsigned int residual_count; int se_cmd_flags; int * t_task_cdb; TYPE_1__* se_tfo; scalar_t__ unknown_data_length; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int (* get_fabric_name ) () ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,unsigned int,unsigned int,int ) ;
 int FUNC_2 () ;

sense_reason_t
FUNC_3(struct se_cmd *VAR_4, unsigned int VAR_5)
{
 struct se_device *VAR_6 = VAR_4->se_dev;

 if (VAR_4->unknown_data_length) {
  VAR_4->data_length = VAR_5;
 } else if (VAR_5 != VAR_4->data_length) {
  FUNC_1("TARGET_CORE[%s]: Expected Transfer Length:"
   " %u does not match SCSI CDB Length: %u for SAM Opcode:"
   " 0x%02x\n", VAR_4->se_tfo->get_fabric_name(),
    VAR_4->data_length, VAR_5, VAR_4->t_task_cdb[0]);

  if (VAR_4->data_direction == VAR_0) {
   FUNC_0("Rejecting underflow/overflow"
     " WRITE data\n");
   return VAR_3;
  }




  if (VAR_6->dev_attrib.block_size != 512) {
   FUNC_0("Failing OVERFLOW/UNDERFLOW for LBA op"
    " CDB on non 512-byte sector setup subsystem"
    " plugin: %s\n", VAR_6->transport->name);

   return VAR_3;
  }






  if (VAR_5 > VAR_4->data_length) {
   VAR_4->se_cmd_flags |= VAR_1;
   VAR_4->residual_count = (VAR_5 - VAR_4->data_length);
  } else {
   VAR_4->se_cmd_flags |= VAR_2;
   VAR_4->residual_count = (VAR_4->data_length - VAR_5);
   VAR_4->data_length = VAR_5;
  }
 }

 return 0;

}
