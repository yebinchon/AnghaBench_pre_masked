
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct TYPE_2__ {int can_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_device*,int ,int) ;
 int FUNC_1 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_2,
          int VAR_3, int VAR_4)
{
 if (VAR_4 != VAR_1)
  return -VAR_0;

 if (VAR_3 > VAR_2->host->can_queue)
  VAR_3 = VAR_2->host->can_queue;
 FUNC_0(VAR_2, FUNC_1(VAR_2),
    VAR_3);

 return VAR_3;
}
