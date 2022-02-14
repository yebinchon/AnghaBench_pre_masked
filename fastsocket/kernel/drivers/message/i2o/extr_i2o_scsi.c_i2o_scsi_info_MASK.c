
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2o_scsi_host {TYPE_1__* iop; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_2__ {char const* name; } ;



__attribute__((used)) static const char *FUNC_0(struct Scsi_Host *VAR_0)
{
 struct i2o_scsi_host *VAR_1;
 VAR_1 = (struct i2o_scsi_host *)VAR_0->hostdata;
 return VAR_1->iop->name;
}
