
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_device {int channels; } ;
struct ioatdma_device {struct ioat_chan_common** idx; scalar_t__ reg_base; struct dma_device common; } ;
struct TYPE_4__ {void (* function ) (unsigned long) ;unsigned long data; } ;
struct TYPE_3__ {int device_node; struct dma_device* device; } ;
struct ioat_chan_common {int cleanup_task; TYPE_2__ timer; TYPE_1__ common; int cleanup_lock; scalar_t__ reg_base; struct ioatdma_device* device; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void (*) (unsigned long),unsigned long) ;

void FUNC_5(struct ioatdma_device *VAR_0,
         struct ioat_chan_common *VAR_1, int VAR_2,
         void (*VAR_3)(unsigned long),
         void (*VAR_4)(unsigned long),
         unsigned long VAR_5)
{
 struct dma_device *VAR_6 = &VAR_0->common;

 VAR_1->device = VAR_0;
 VAR_1->reg_base = VAR_0->reg_base + (0x80 * (VAR_2 + 1));
 FUNC_2(&VAR_1->cleanup_lock);
 VAR_1->common.device = VAR_6;
 FUNC_1(&VAR_1->common.device_node, &VAR_6->channels);
 VAR_0->idx[VAR_2] = VAR_1;
 FUNC_0(&VAR_1->timer);
 VAR_1->timer.function = VAR_3;
 VAR_1->timer.data = VAR_5;
 FUNC_4(&VAR_1->cleanup_task, VAR_4, VAR_5);
 FUNC_3(&VAR_1->cleanup_task);
}
