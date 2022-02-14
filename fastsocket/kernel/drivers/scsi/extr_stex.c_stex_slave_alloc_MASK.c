
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int tagged_supported; TYPE_1__* host; } ;
struct TYPE_2__ {int can_queue; } ;


 int FUNC_0 (struct scsi_device*,int ) ;

__attribute__((used)) static int
FUNC_1(struct scsi_device *VAR_0)
{

 VAR_0->tagged_supported = 1;

 FUNC_0(VAR_0, VAR_0->host->can_queue);

 return 0;
}
