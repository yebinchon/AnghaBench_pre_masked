
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct audio* private_data; } ;
struct audio {int opened; int phys; int volume; int lock; TYPE_1__* out; int * data; scalar_t__ dec_id; int audmgr; int audplay; } ;
struct TYPE_2__ {int addr; int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct audio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int * FUNC_3 (int *,int ,int*,int ) ;
 int FUNC_4 (int *,int ,int *,int) ;
 int FUNC_5 (char*,int *,int *,struct audio*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 struct audio VAR_6 ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_7, struct file *VAR_8)
{
 struct audio *VAR_9 = &VAR_6;
 int VAR_10;

 FUNC_6(&VAR_9->lock);

 if (VAR_9->opened) {
  FUNC_8("audio: busy\n");
  VAR_10 = -VAR_2;
  goto done;
 }

 if (!VAR_9->data) {
  VAR_9->data = FUNC_3(((void*)0), VAR_1,
       &VAR_9->phys, VAR_4);
  if (!VAR_9->data) {
   FUNC_8("audio: could not allocate DMA buffers\n");
   VAR_10 = -VAR_3;
   goto done;
  }
 }

 VAR_10 = FUNC_2(&VAR_9->audmgr);
 if (VAR_10)
  goto done;

 VAR_10 = FUNC_5("AUDPLAY0TASK", &VAR_9->audplay,
  &VAR_5, VAR_9);
 if (VAR_10) {
  FUNC_8("audio: failed to get audplay0 dsp module\n");
  FUNC_1(&VAR_9->audmgr);
  FUNC_4(((void*)0), VAR_1, VAR_9->data, VAR_9->phys);
  VAR_9->data = ((void*)0);
  goto done;
 }

 VAR_9->dec_id = 0;

 VAR_9->out[0].data = VAR_9->data + 0;
 VAR_9->out[0].addr = VAR_9->phys + 0;
 VAR_9->out[0].size = VAR_0;

 VAR_9->out[1].data = VAR_9->data + VAR_0;
 VAR_9->out[1].addr = VAR_9->phys + VAR_0;
 VAR_9->out[1].size = VAR_0;

 VAR_9->volume = 0x2000;

 FUNC_0(VAR_9);

 VAR_8->private_data = VAR_9;
 VAR_9->opened = 1;
 VAR_10 = 0;
done:
 FUNC_7(&VAR_9->lock);
 return VAR_10;
}
