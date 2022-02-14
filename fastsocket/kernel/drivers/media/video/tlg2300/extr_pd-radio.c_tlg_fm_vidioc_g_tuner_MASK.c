
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int rangelow; int rangehigh; int signal; scalar_t__ afc; int audmode; int rxsubchans; int capability; int type; } ;
struct tuner_fm_sig_stat_s {int sig_strength; scalar_t__ sig_locked; scalar_t__ sig_present; scalar_t__ sig_lock_busy; } ;
struct poseidon {int lock; } ;
struct file {struct poseidon* private_data; } ;
typedef int fm_stat ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct poseidon*,int ,int ,struct tuner_fm_sig_stat_s*,int*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_11, void *VAR_12,
     struct v4l2_tuner *VAR_13)
{
 struct tuner_fm_sig_stat_s VAR_14 = {};
 int VAR_15, VAR_16, VAR_17 = 5;
 struct poseidon *VAR_18 = VAR_11->private_data;

 if (VAR_13->index != 0)
  return -VAR_0;

 VAR_13->type = VAR_9;
 VAR_13->capability = VAR_7;
 VAR_13->rangelow = VAR_5 / 62500;
 VAR_13->rangehigh = VAR_4 / 62500;
 VAR_13->rxsubchans = VAR_10;
 VAR_13->audmode = VAR_8;
 VAR_13->signal = 0;
 VAR_13->afc = 0;

 FUNC_0(&VAR_18->lock);
 VAR_15 = FUNC_3(VAR_18, VAR_6, VAR_3,
         &VAR_14, &VAR_16, sizeof(VAR_14));

 while (VAR_14.sig_lock_busy && VAR_17-- && !VAR_15) {
  FUNC_4(VAR_2);
  FUNC_2(VAR_1);

  VAR_15 = FUNC_3(VAR_18, VAR_6, VAR_3,
      &VAR_14, &VAR_16, sizeof(VAR_14));
 }
 FUNC_1(&VAR_18->lock);

 if (VAR_15 || VAR_16) {
  VAR_13->signal = 0;
 } else if ((VAR_14.sig_present || VAR_14.sig_locked)
   && VAR_14.sig_strength == 0) {
  VAR_13->signal = 0xffff;
 } else
  VAR_13->signal = (VAR_14.sig_strength * 255 / 10) << 8;

 return 0;
}
