
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_audio_stats {int channel_count; int buffer_count; int * unused; int sample_rate; int buffer_size; int byte_count; } ;
struct msm_audio_config {int channel_count; int buffer_count; int * unused; int sample_rate; int buffer_size; int byte_count; } ;
struct file {struct audio* private_data; } ;
struct audio {unsigned long volume; int stopped; int out_channel_mode; int lock; int out_sample_rate; int write_lock; int wait; int dsp_lock; scalar_t__ running; int out_bytes; } ;
typedef int stats ;
typedef int config ;




 unsigned int VAR_0 ;

 unsigned int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct audio*) ;
 int FUNC_3 (struct audio*) ;
 int FUNC_4 (struct audio*) ;
 int FUNC_5 (int,unsigned long,int ) ;
 int FUNC_6 (struct msm_audio_stats*,void*,int) ;
 scalar_t__ FUNC_7 (void*,struct msm_audio_stats*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static long FUNC_13(struct file *VAR_8, unsigned int VAR_9, unsigned long VAR_10)
{
 struct audio *VAR_11 = VAR_8->private_data;
 int VAR_12;

 if (VAR_9 == VAR_0) {
  struct msm_audio_stats VAR_13;
  VAR_13.byte_count = FUNC_1(&VAR_11->out_bytes);
  if (FUNC_7((void*) VAR_10, &VAR_13, sizeof(VAR_13)))
   return -VAR_5;
  return 0;
 }
 if (VAR_9 == VAR_1) {
  unsigned long VAR_14;
  FUNC_10(&VAR_11->dsp_lock, VAR_14);
  VAR_11->volume = VAR_10;
  if (VAR_11->running)
   FUNC_5(6, VAR_10, 0);
  FUNC_11(&VAR_11->dsp_lock, VAR_14);
 }

 FUNC_0(VAR_7, VAR_9);
 FUNC_8(&VAR_11->lock);
 switch (VAR_9) {
 case 129:
  VAR_12 = FUNC_3(VAR_11);
  break;
 case 128:
  VAR_12 = FUNC_2(VAR_11);
  VAR_11->stopped = 1;
  break;
 case 132:
  if (VAR_11->stopped) {





   FUNC_12(&VAR_11->wait);
   FUNC_8(&VAR_11->write_lock);
   FUNC_4(VAR_11);
   FUNC_9(&VAR_11->write_lock);
  }
 case 130: {
  struct msm_audio_config VAR_15;
  if (FUNC_6(&VAR_15, (void*) VAR_10, sizeof(VAR_15))) {
   VAR_12 = -VAR_5;
   break;
  }
  if (VAR_15.channel_count == 1) {
   VAR_15.channel_count = VAR_2;
  } else if (VAR_15.channel_count == 2) {
   VAR_15.channel_count= VAR_3;
  } else {
   VAR_12 = -VAR_6;
   break;
  }
  VAR_11->out_sample_rate = VAR_15.sample_rate;
  VAR_11->out_channel_mode = VAR_15.channel_count;
  VAR_12 = 0;
  break;
 }
 case 131: {
  struct msm_audio_config VAR_16;
  VAR_16.buffer_size = VAR_4;
  VAR_16.buffer_count = 2;
  VAR_16.sample_rate = VAR_11->out_sample_rate;
  if (VAR_11->out_channel_mode == VAR_2) {
   VAR_16.channel_count = 1;
  } else {
   VAR_16.channel_count = 2;
  }
  VAR_16.unused[0] = 0;
  VAR_16.unused[1] = 0;
  VAR_16.unused[2] = 0;
  VAR_16.unused[3] = 0;
  if (FUNC_7((void*) VAR_10, &VAR_16, sizeof(VAR_16))) {
   VAR_12 = -VAR_5;
  } else {
   VAR_12 = 0;
  }
  break;
 }
 default:
  VAR_12 = -VAR_6;
 }
 FUNC_9(&VAR_11->lock);
 return VAR_12;
}
