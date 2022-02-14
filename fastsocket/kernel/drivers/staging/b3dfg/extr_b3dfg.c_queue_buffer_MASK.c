
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct b3dfg_dev {int buffer_lock; scalar_t__ triplet_ready; scalar_t__ transmission_enabled; int buffer_queue; struct b3dfg_buffer* buffers; TYPE_1__* pdev; } ;
struct b3dfg_buffer {scalar_t__ state; int list; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct b3dfg_dev*,struct b3dfg_buffer*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct b3dfg_dev *VAR_4, int VAR_5)
{
 struct device *VAR_6 = &VAR_4->pdev->dev;
 struct b3dfg_buffer *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 FUNC_4(&VAR_4->buffer_lock, VAR_8);
 if (VAR_5 < 0 || VAR_5 >= VAR_3) {
  FUNC_0(VAR_6, "Invalid buffer index, %d\n", VAR_5);
  VAR_9 = -VAR_2;
  goto out;
 }
 VAR_7 = &VAR_4->buffers[VAR_5];

 if (FUNC_6(VAR_7->state == VAR_0)) {
  FUNC_0(VAR_6, "buffer %d is already queued\n", VAR_5);
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_7->state = VAR_0;
 FUNC_2(&VAR_7->list, &VAR_4->buffer_queue);

 if (VAR_4->transmission_enabled && VAR_4->triplet_ready) {
  FUNC_0(VAR_6, "triplet is ready, pushing immediately\n");
  VAR_4->triplet_ready = 0;
  VAR_9 = FUNC_3(VAR_4, VAR_7, 0);
  if (VAR_9)
   FUNC_1(VAR_6, "unable to map DMA buffer\n");
 }

out:
 FUNC_5(&VAR_4->buffer_lock, VAR_8);
 return VAR_9;
}
