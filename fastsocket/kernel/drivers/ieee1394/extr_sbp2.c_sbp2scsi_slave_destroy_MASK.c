
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct sbp2_lu {int * sdev; } ;
struct TYPE_2__ {scalar_t__* hostdata; } ;



__attribute__((used)) static void FUNC_0(struct scsi_device *VAR_0)
{
 ((struct sbp2_lu *)VAR_0->host->hostdata[0])->sdev = ((void*)0);
 return;
}
