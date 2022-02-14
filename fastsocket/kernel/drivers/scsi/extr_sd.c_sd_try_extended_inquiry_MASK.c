
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ scsi_level; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct scsi_device *VAR_1)
{





 if (VAR_1->scsi_level > VAR_0)
  return 1;
 return 0;
}
