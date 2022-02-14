
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int sense_buffer; int serial_number; } ;
struct TYPE_4__ {int tcntxt; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
struct i2o_message {int * body; TYPE_2__ u; } ;
struct i2o_controller {TYPE_3__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 struct scsi_cmnd* FUNC_0 (struct i2o_controller*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct i2o_controller *VAR_1, u32 VAR_2,
     struct i2o_message *VAR_3)
{
 struct scsi_cmnd *VAR_4;
 u32 VAR_5;
 struct device *VAR_6;

 VAR_4 = FUNC_0(VAR_1, FUNC_1(VAR_3->u.s.tcntxt));
 if (FUNC_8(!VAR_4)) {
  FUNC_5("NULL reply received!\n");
  return -1;
 }





 VAR_5 = FUNC_1(VAR_3->body[0]);

 FUNC_4("Completed %ld\n", VAR_4->serial_number);

 VAR_4->result = VAR_5 & 0xff;




 if (VAR_4->result)
  FUNC_2(VAR_4->sense_buffer, &VAR_3->body[3],
         FUNC_3(VAR_0, 40));


 if ((VAR_5 >> 8) & 0xff)
  FUNC_5("SCSI error %08x\n", VAR_5);

 VAR_6 = &VAR_1->pdev->dev;

 FUNC_6(VAR_4);

 VAR_4->scsi_done(VAR_4);

 return 1;
}
