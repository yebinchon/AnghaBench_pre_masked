
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct sbp2_logical_unit {TYPE_2__* tgt; } ;
struct TYPE_4__ {int bus_id; } ;
struct TYPE_3__ {struct sbp2_logical_unit* hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct sbp2_logical_unit*) ;
 int FUNC_2 (struct sbp2_logical_unit*) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_1)
{
 struct sbp2_logical_unit *VAR_2 = VAR_1->device->hostdata;

 FUNC_0("%s: sbp2_scsi_abort\n", VAR_2->tgt->bus_id);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 return VAR_0;
}
