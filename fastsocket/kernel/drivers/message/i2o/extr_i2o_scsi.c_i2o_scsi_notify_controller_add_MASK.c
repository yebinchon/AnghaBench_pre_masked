
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2o_scsi_host {int scsi_host; } ;
struct i2o_controller {struct i2o_scsi_host** driver_data; int device; } ;
struct TYPE_2__ {size_t context; } ;


 scalar_t__ FUNC_0 (struct i2o_scsi_host*) ;
 TYPE_1__ VAR_0 ;
 struct i2o_scsi_host* FUNC_1 (struct i2o_controller*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct i2o_controller *VAR_1)
{
 struct i2o_scsi_host *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_2)) {
  FUNC_3("Could not initialize SCSI host\n");
  return;
 }

 VAR_3 = FUNC_4(VAR_2->scsi_host, &VAR_1->device);
 if (VAR_3) {
  FUNC_3("Could not add SCSI host\n");
  FUNC_5(VAR_2->scsi_host);
  return;
 }

 VAR_1->driver_data[VAR_0.context] = VAR_2;

 FUNC_2("new I2O SCSI host added\n");
}
