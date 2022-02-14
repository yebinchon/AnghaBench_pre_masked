
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {TYPE_1__* device; scalar_t__ capacity; scalar_t__ media_present; } ;
struct TYPE_2__ {int changed; } ;



__attribute__((used)) static void FUNC_0(struct scsi_disk *VAR_0)
{
 VAR_0->media_present = 0;
 VAR_0->capacity = 0;
 VAR_0->device->changed = 1;
}
