
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_audio_stats {int channel_count; int type; int * unused; int sample_rate; int buffer_count; int buffer_size; int byte_count; } ;
struct msm_audio_config {int channel_count; int type; int * unused; int sample_rate; int buffer_count; int buffer_size; int byte_count; } ;
struct file {struct audio_in* private_data; } ;
struct audio_in {int stopped; int channel_mode; int type; int lock; int samp_rate; int buffer_size; int samp_rate_index; int read_lock; int wait; int in_bytes; } ;
typedef int stats ;
typedef int cfg ;




 unsigned int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct audio_in*) ;
 int FUNC_2 (struct audio_in*) ;
 int FUNC_3 (struct audio_in*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct msm_audio_stats*,void*,int) ;
 scalar_t__ FUNC_8 (void*,struct msm_audio_stats*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static long FUNC_12(struct file *VAR_10,
    unsigned int VAR_11, unsigned long VAR_12)
{
 struct audio_in *VAR_13 = VAR_10->private_data;
 int VAR_14;

 if (VAR_11 == VAR_0) {
  struct msm_audio_stats VAR_15;
  VAR_15.byte_count = FUNC_0(&VAR_13->in_bytes);
  if (FUNC_8((void *) VAR_12, &VAR_15, sizeof(VAR_15)))
   return -VAR_5;
  return 0;
 }

 FUNC_9(&VAR_13->lock);
 switch (VAR_11) {
 case 129:
  VAR_14 = FUNC_3(VAR_13);
  break;
 case 128:
  VAR_14 = FUNC_2(VAR_13);
  VAR_13->stopped = 1;
  break;
 case 132:
  if (VAR_13->stopped) {





   FUNC_11(&VAR_13->wait);
   FUNC_9(&VAR_13->read_lock);
   FUNC_1(VAR_13);
   FUNC_10(&VAR_13->read_lock);
  }
 case 130: {
  struct msm_audio_config VAR_16;
  if (FUNC_7(&VAR_16, (void *) VAR_12, sizeof(VAR_16))) {
   VAR_14 = -VAR_5;
   break;
  }
  if (VAR_16.channel_count == 1) {
   VAR_16.channel_count = VAR_1;
  } else if (VAR_16.channel_count == 2) {
   VAR_16.channel_count = VAR_2;
  } else {
   VAR_14 = -VAR_6;
   break;
  }

  if (VAR_16.type == 0) {
   VAR_16.type = VAR_4;
  } else if (VAR_16.type == 1) {
   VAR_16.type = VAR_3;
  } else {
   VAR_14 = -VAR_6;
   break;
  }
  VAR_13->samp_rate = FUNC_6(VAR_16.sample_rate);
  VAR_13->samp_rate_index =
    FUNC_4(VAR_16.sample_rate);
  VAR_13->channel_mode = VAR_16.channel_count;
  VAR_13->buffer_size =
    VAR_13->channel_mode ? VAR_9
       : VAR_8;
  VAR_13->type = VAR_16.type;
  VAR_14 = 0;
  break;
 }
 case 131: {
  struct msm_audio_config VAR_17;
  VAR_17.buffer_size = VAR_13->buffer_size;
  VAR_17.buffer_count = VAR_7;
  VAR_17.sample_rate = FUNC_5(VAR_13->samp_rate);
  if (VAR_13->channel_mode == VAR_1)
   VAR_17.channel_count = 1;
  else
   VAR_17.channel_count = 2;
  if (VAR_13->type == VAR_4)
   VAR_17.type = 0;
  else
   VAR_17.type = 1;
  VAR_17.unused[0] = 0;
  VAR_17.unused[1] = 0;
  VAR_17.unused[2] = 0;
  if (FUNC_8((void *) VAR_12, &VAR_17, sizeof(VAR_17)))
   VAR_14 = -VAR_5;
  else
   VAR_14 = 0;
  break;
 }
 default:
  VAR_14 = -VAR_6;
 }
 FUNC_10(&VAR_13->lock);
 return VAR_14;
}
