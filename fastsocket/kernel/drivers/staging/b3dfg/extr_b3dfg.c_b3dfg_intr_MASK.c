
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct device {int dummy; } ;
struct b3dfg_dev {int triplets_dropped; int triplet_ready; int cur_dma_frame_idx; int buffer_lock; int buffer_queue; int triplets_dropped_lock; int transmission_enabled; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b3dfg_dev*,int ) ;
 int FUNC_1 (struct b3dfg_dev*,int ,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct b3dfg_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct b3dfg_dev*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct b3dfg_dev*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_4, void *VAR_5)
{
 struct b3dfg_dev *VAR_6 = VAR_5;
 struct device *VAR_7 = &VAR_6->pdev->dev;
 u32 VAR_8;
 u8 VAR_9;
 bool VAR_10 = 1;
 irqreturn_t VAR_11 = VAR_2;

 VAR_8 = FUNC_0(VAR_6, VAR_0);
 if (FUNC_12(VAR_8 == 0)) {
  FUNC_5(VAR_7, "ignore interrupt, DMA status is 0\n");
  VAR_11 = VAR_3;
  goto out;
 }

 if (FUNC_12(!VAR_6->transmission_enabled)) {
  FUNC_5(VAR_7, "ignore interrupt, TX disabled\n");
  VAR_11 = VAR_2;
  goto out;
 }


 VAR_9 = (VAR_8 >> 8) & 0xff;
 FUNC_2(VAR_7, "intr: DMA_STS=%08x (drop=%d comp=%d next=%d)\n",
  VAR_8, VAR_9, !!(VAR_8 & 0x4), VAR_8 & 0x3);
 if (FUNC_12(VAR_9 > 0)) {
  FUNC_9(&VAR_6->triplets_dropped_lock);
  VAR_6->triplets_dropped += VAR_9;
  FUNC_10(&VAR_6->triplets_dropped_lock);
 }


 if (VAR_8 & 0x08) {
  FUNC_6(VAR_6);
  goto out;
 }

 FUNC_9(&VAR_6->buffer_lock);
 if (FUNC_12(FUNC_7(&VAR_6->buffer_queue))) {


  FUNC_4(VAR_7, "buffer not ready for next transfer\n");
  VAR_6->triplet_ready = 1;
  goto out_unlock;
 }


 if (VAR_8 & 0x4) {
  u32 VAR_12 = FUNC_0(VAR_6, VAR_1);


  if (FUNC_12(VAR_12 & 0x1)) {
   FUNC_3(VAR_7, "EC220 error: %08x\n", VAR_12);


   goto out_unlock;
  }


  if (FUNC_12(VAR_6->cur_dma_frame_idx == -1)) {
   FUNC_3(VAR_7, "completed but no last idx?\n");


   goto out_unlock;
  }

  FUNC_11(VAR_6);
 }


 if (VAR_8 & 0x3)
  VAR_10 = FUNC_8(VAR_6, VAR_8 & 0x3);
 else
  VAR_6->cur_dma_frame_idx = -1;

out_unlock:
 FUNC_10(&VAR_6->buffer_lock);
out:
 if (VAR_10) {
  FUNC_2(VAR_7, "acknowledging interrupt\n");
  FUNC_1(VAR_6, VAR_1, 0x0b);
 }
 return VAR_11;
}
