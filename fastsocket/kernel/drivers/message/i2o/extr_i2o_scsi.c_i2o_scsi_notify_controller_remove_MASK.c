
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2o_scsi_host {int scsi_host; } ;
struct i2o_controller {int ** driver_data; } ;
struct TYPE_2__ {size_t context; } ;


 TYPE_1__ VAR_0 ;
 struct i2o_scsi_host* FUNC_0 (struct i2o_controller*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct i2o_controller *VAR_1)
{
 struct i2o_scsi_host *VAR_2;
 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return;

 VAR_1->driver_data[VAR_0.context] = ((void*)0);

 FUNC_3(VAR_2->scsi_host);
 FUNC_2(VAR_2->scsi_host);
 FUNC_1("I2O SCSI host removed\n");
}
