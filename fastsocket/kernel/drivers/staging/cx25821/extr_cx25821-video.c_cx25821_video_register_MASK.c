
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_device {int current_norm; } ;
struct cx25821_dev {size_t nr; int lock; int tvnorm; int * video_dev; int pci; TYPE_3__* sram_channels; TYPE_2__* vidq; TYPE_1__* timeout_data; int slock; } ;
struct TYPE_8__ {unsigned long data; int function; } ;
struct TYPE_7__ {int dma_ctl; } ;
struct TYPE_6__ {int stopper; TYPE_4__ timeout; int queued; int active; } ;
struct TYPE_5__ {TYPE_3__* channel; struct cx25821_dev* dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,int,int ) ;
 int FUNC_2 (struct cx25821_dev*,int ) ;
 int FUNC_3 (struct cx25821_dev*,int ,struct video_device*,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct cx25821_dev*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct cx25821_dev*,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * VAR_3 ;
 int FUNC_11 (int ,int ,int ) ;

int FUNC_12(struct cx25821_dev *VAR_4, int VAR_5,
      struct video_device *VAR_6)
{
 int VAR_7;

 FUNC_10(&VAR_4->slock);
 VAR_4->timeout_data[VAR_5].dev = VAR_4;
 VAR_4->timeout_data[VAR_5].channel = &VAR_4->sram_channels[VAR_5];
 FUNC_0(&VAR_4->vidq[VAR_5].active);
 FUNC_0(&VAR_4->vidq[VAR_5].queued);
 VAR_4->vidq[VAR_5].timeout.function = VAR_2;
 VAR_4->vidq[VAR_5].timeout.data =
     (unsigned long)&VAR_4->timeout_data[VAR_5];
 FUNC_7(&VAR_4->vidq[VAR_5].timeout);
 FUNC_1(VAR_4->pci, &VAR_4->vidq[VAR_5].stopper,
        VAR_4->sram_channels[VAR_5].dma_ctl, 0x11, 0);


 VAR_4->video_dev[VAR_5] =
     FUNC_3(VAR_4, VAR_4->pci, VAR_6, "video");
 VAR_7 =
     FUNC_11(VAR_4->video_dev[VAR_5], VAR_1,
      VAR_3[VAR_4->nr]);

 if (VAR_7 < 0) {
  goto fail_unreg;
 }

 FUNC_5(VAR_0, 0xff);


 FUNC_8(&VAR_4->lock);



 FUNC_9(&VAR_4->lock);

 FUNC_6(VAR_4, VAR_5);

 return 0;

      fail_unreg:
 FUNC_4(VAR_4, VAR_5);
 return VAR_7;
}
