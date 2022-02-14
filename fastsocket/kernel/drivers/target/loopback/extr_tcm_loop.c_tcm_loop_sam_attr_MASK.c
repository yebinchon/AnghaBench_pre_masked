
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int tag; TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ tagged_supported; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static int FUNC_0(struct scsi_cmnd *VAR_3)
{
 if (VAR_3->device->tagged_supported) {
  switch (VAR_3->tag) {
  case 129:
   return VAR_0;
  case 128:
   return VAR_1;
  default:
   break;
  }
 }

 return VAR_2;
}
