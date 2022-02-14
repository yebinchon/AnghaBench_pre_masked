
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {TYPE_1__* queue; } ;
typedef int ctlr_info_t ;
struct TYPE_2__ {int * queuedata; } ;



__attribute__((used)) static inline ctlr_info_t *FUNC_0(struct gendisk *VAR_0)
{
 return VAR_0->queue->queuedata;
}
