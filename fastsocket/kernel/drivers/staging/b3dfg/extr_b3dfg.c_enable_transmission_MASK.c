
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct device {int dummy; } ;
struct b3dfg_dev {int transmission_enabled; int cur_dma_frame_idx; int buffer_lock; scalar_t__ triplet_ready; int triplets_dropped_lock; scalar_t__ triplets_dropped; TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b3dfg_dev*,int ) ;
 int FUNC_1 (struct b3dfg_dev*,int ,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct b3dfg_dev *VAR_5)
{
 u16 VAR_6;
 unsigned long VAR_7;
 struct device *VAR_8 = &VAR_5->pdev->dev;

 FUNC_2(VAR_8, "enable transmission\n");


 if (!FUNC_0(VAR_5, VAR_1)) {
  FUNC_2(VAR_8, "cannot start transmission without wand\n");
  return -VAR_2;
 }





 FUNC_4(VAR_5->pdev, VAR_3, &VAR_6);
 if (!(VAR_6 & VAR_4)) {
  FUNC_3(VAR_8, "not a bus master, force-enabling\n");
  FUNC_5(VAR_5->pdev, VAR_3,
   VAR_6 | VAR_4);
 }

 FUNC_7(&VAR_5->buffer_lock, VAR_7);


 if (VAR_5->transmission_enabled) {
  FUNC_9(&VAR_5->buffer_lock, VAR_7);
  goto out;
 }

 FUNC_6(&VAR_5->triplets_dropped_lock);
 VAR_5->triplets_dropped = 0;
 FUNC_8(&VAR_5->triplets_dropped_lock);

 VAR_5->triplet_ready = 0;
 VAR_5->cur_dma_frame_idx = -1;
 VAR_5->transmission_enabled = 1;

 FUNC_9(&VAR_5->buffer_lock, VAR_7);


 FUNC_1(VAR_5, VAR_0, 0x03);

out:
 return 0;
}
