
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct sbp2_lu {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__* hostdata; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct sbp2_lu*,int) ;
 scalar_t__ FUNC_2 (struct sbp2_lu*) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_1)
{
 struct sbp2_lu *VAR_2 = (struct sbp2_lu *)VAR_1->device->host->hostdata[0];

 FUNC_0("reset requested");

 if (FUNC_2(VAR_2)) {
  FUNC_0("generating sbp2 fetch agent reset");
  FUNC_1(VAR_2, 1);
 }

 return VAR_0;
}
