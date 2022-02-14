
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int signal; int rangelow; int rangehigh; int capability; scalar_t__ afc; int audmode; int rxsubchans; int type; int name; } ;
struct tuner_atv_sig_stat_s {int sig_strength; scalar_t__ sig_present; scalar_t__ sig_lock_busy; } ;
struct TYPE_4__ {int audio_idx; } ;
struct TYPE_5__ {TYPE_1__ context; } ;
struct poseidon {TYPE_2__ video_data; int lock; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;
typedef int s32 ;
typedef int atv_stat ;
struct TYPE_6__ {int v4l2_audio_mode; int v4l2_audio_sub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (struct front_face*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct poseidon*,int ,int ,struct tuner_atv_sig_stat_s*,int*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_14, void *VAR_15, struct v4l2_tuner *VAR_16)
{
 struct front_face *VAR_17 = VAR_15;
 struct poseidon *VAR_18 = VAR_17->pd;
 struct tuner_atv_sig_stat_s VAR_19;
 s32 VAR_20 = 5, VAR_21, VAR_22;
 int VAR_23;

 if (0 != VAR_16->index)
  return -VAR_0;

 FUNC_2(&VAR_18->lock);
 VAR_21 = FUNC_5(VAR_18, VAR_6, VAR_3,
    &VAR_19, &VAR_22, sizeof(VAR_19));

 while (VAR_19.sig_lock_busy && VAR_20-- && !VAR_21) {
  FUNC_6(VAR_2);
  FUNC_4(VAR_1);

  VAR_21 = FUNC_5(VAR_18, VAR_6, VAR_3,
    &VAR_19, &VAR_22, sizeof(VAR_19));
 }
 FUNC_3(&VAR_18->lock);

 if (VAR_12)
  FUNC_0("P:%d,S:%d", VAR_19.sig_present, VAR_19.sig_strength);

 if (VAR_21 || VAR_22)
  VAR_16->signal = 0;
 else if (VAR_19.sig_present && !VAR_19.sig_strength)
  VAR_16->signal = 0xFFFF;
 else
  VAR_16->signal = (VAR_19.sig_strength * 255 / 10) << 8;

 FUNC_7(VAR_16->name, "Telegent Systems");
 VAR_16->type = VAR_7;
 VAR_16->rangelow = VAR_5 / 62500;
 VAR_16->rangehigh = VAR_4 / 62500;
 VAR_16->capability = VAR_10 | VAR_11 |
    VAR_8 | VAR_9;
 VAR_23 = VAR_18->video_data.context.audio_idx;
 VAR_16->rxsubchans = VAR_13[VAR_23].v4l2_audio_sub;
 VAR_16->audmode = VAR_13[VAR_23].v4l2_audio_mode;
 VAR_16->afc = 0;
 FUNC_1(VAR_17);
 return 0;
}
