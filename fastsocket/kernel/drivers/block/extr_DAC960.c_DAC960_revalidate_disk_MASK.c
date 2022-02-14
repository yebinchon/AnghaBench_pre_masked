
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {scalar_t__ private_data; TYPE_1__* queue; } ;
struct TYPE_2__ {int * queuedata; } ;
typedef int DAC960_Controller_T ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct gendisk*,int ) ;

__attribute__((used)) static int FUNC_2(struct gendisk *VAR_0)
{
 DAC960_Controller_T *VAR_1 = VAR_0->queue->queuedata;
 int VAR_2 = (long)VAR_0->private_data;

 FUNC_1(VAR_0, FUNC_0(VAR_1, VAR_2));
 return 0;
}
