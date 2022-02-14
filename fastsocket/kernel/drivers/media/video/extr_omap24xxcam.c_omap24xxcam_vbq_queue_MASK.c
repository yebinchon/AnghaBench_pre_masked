
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct omap24xxcam_fh* priv_data; } ;
struct videobuf_buffer {int state; int size; } ;
struct omap24xxcam_fh {struct omap24xxcam_device* cam; } ;
struct omap24xxcam_device {int sgdma_in_queue; int dev; int core_enable_disable_lock; int in_reset; int sgdma; } ;
typedef enum videobuf_state { ____Placeholder_videobuf_state } videobuf_state ;
struct TYPE_2__ {int sglen; int sglist; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct omap24xxcam_device*) ;
 int FUNC_3 (int *,int ,int ,int ,int ,struct videobuf_buffer*) ;
 int VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 TYPE_1__* FUNC_6 (struct videobuf_buffer*) ;

__attribute__((used)) static void FUNC_7(struct videobuf_queue *VAR_2,
      struct videobuf_buffer *VAR_3)
{
 struct omap24xxcam_fh *VAR_4 = VAR_2->priv_data;
 struct omap24xxcam_device *VAR_5 = VAR_4->cam;
 enum videobuf_state VAR_6 = VAR_3->state;
 unsigned long VAR_7;
 int VAR_8;






 VAR_3->state = VAR_0;

 VAR_8 = FUNC_3(&VAR_4->cam->sgdma,
          FUNC_6(VAR_3)->sglist,
          FUNC_6(VAR_3)->sglen, VAR_3->size,
          VAR_1, VAR_3);

 if (!VAR_8) {
  FUNC_4(&VAR_5->core_enable_disable_lock, VAR_7);
  if (++VAR_5->sgdma_in_queue == 1
      && !FUNC_0(&VAR_5->in_reset))
   FUNC_2(VAR_5);
  FUNC_5(&VAR_5->core_enable_disable_lock, VAR_7);
 } else {







  FUNC_1(VAR_5->dev, "failed to queue a video buffer for dma!\n");
  FUNC_1(VAR_5->dev, "likely a bug in the driver!\n");
  VAR_3->state = VAR_6;
 }
}
