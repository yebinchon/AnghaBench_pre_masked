
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct audio_in* private_data; } ;
struct audio_in {int opened; int lock; scalar_t__ stopped; scalar_t__ dsp_cnt; int audrec; int audpre; int audmgr; int type; int buffer_size; int channel_mode; int samp_rate_index; int samp_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct audio_in*) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int *,int *,struct audio_in*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct audio_in VAR_8 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_9, struct file *VAR_10)
{
 struct audio_in *VAR_11 = &VAR_8;
 int VAR_12;

 FUNC_3(&VAR_11->lock);
 if (VAR_11->opened) {
  VAR_12 = -VAR_3;
  goto done;
 }




 VAR_11->samp_rate = VAR_5;
 VAR_11->samp_rate_index = VAR_0;
 VAR_11->channel_mode = VAR_1;
 VAR_11->buffer_size = VAR_4;
 VAR_11->type = VAR_2;

 VAR_12 = FUNC_1(&VAR_11->audmgr);
 if (VAR_12)
  goto done;
 VAR_12 = FUNC_2("AUDPREPROCTASK", &VAR_11->audpre,
    &VAR_6, VAR_11);
 if (VAR_12)
  goto done;
 VAR_12 = FUNC_2("AUDRECTASK", &VAR_11->audrec,
      &VAR_7, VAR_11);
 if (VAR_12)
  goto done;

 VAR_11->dsp_cnt = 0;
 VAR_11->stopped = 0;

 FUNC_0(VAR_11);

 VAR_10->private_data = VAR_11;
 VAR_11->opened = 1;
 VAR_12 = 0;
done:
 FUNC_4(&VAR_11->lock);
 return VAR_12;
}
