
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gendisk {scalar_t__ private_data; TYPE_1__* queue; } ;
struct TYPE_4__ {int * LogicalDriveInitiallyAccessible; } ;
struct TYPE_3__ {TYPE_2__* queuedata; } ;
typedef TYPE_2__ DAC960_Controller_T ;



__attribute__((used)) static int FUNC_0(struct gendisk *VAR_0)
{
 DAC960_Controller_T *VAR_1 = VAR_0->queue->queuedata;
 int VAR_2 = (long)VAR_0->private_data;

 if (!VAR_1->LogicalDriveInitiallyAccessible[VAR_2])
  return 1;
 return 0;
}
