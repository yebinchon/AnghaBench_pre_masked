
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mapped_device {TYPE_2__* queue; } ;
struct TYPE_6__ {struct mapped_device* congested_data; int congested_fn; } ;
struct TYPE_7__ {int unplug_fn; TYPE_1__ backing_dev_info; struct mapped_device* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct mapped_device *VAR_6)
{
 FUNC_3(VAR_1, VAR_6->queue);

 VAR_6->queue->queuedata = VAR_6;
 VAR_6->queue->backing_dev_info.congested_fn = VAR_2;
 VAR_6->queue->backing_dev_info.congested_data = VAR_6;
 FUNC_1(VAR_6->queue, VAR_4);
 FUNC_0(VAR_6->queue, VAR_0);
 VAR_6->queue->unplug_fn = VAR_5;
 FUNC_2(VAR_6->queue, VAR_3);
}
