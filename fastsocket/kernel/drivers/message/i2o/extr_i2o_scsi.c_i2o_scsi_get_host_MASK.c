
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2o_scsi_host {int dummy; } ;
struct i2o_controller {struct i2o_scsi_host** driver_data; } ;
struct TYPE_2__ {size_t context; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static struct i2o_scsi_host *FUNC_0(struct i2o_controller *VAR_1)
{
 return VAR_1->driver_data[VAR_0.context];
}
