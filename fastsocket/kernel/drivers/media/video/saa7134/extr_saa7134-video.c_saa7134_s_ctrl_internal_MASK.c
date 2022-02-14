
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int type; int maximum; int minimum; int name; } ;
struct v4l2_priv_tun_config {int * priv; int tuner; } ;
struct v4l2_control {int id; int value; } ;
struct saa7134_fh {int prio; } ;
struct saa7134_dev {int lock; int slock; int tda9887_conf; int ctl_automute; int ctl_y_odd; int ctl_y_even; int ctl_mirror; int ctl_saturation; int ctl_invert; int ctl_contrast; int ctl_volume; int ctl_mute; int ctl_hue; int ctl_bright; int prio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct v4l2_queryctrl* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct saa7134_fh*,int ) ;
 int VAR_8 ;
 int FUNC_5 (struct saa7134_dev*) ;
 int FUNC_6 (struct saa7134_dev*,int ) ;
 int FUNC_7 (struct saa7134_dev*,int ,int ,struct v4l2_priv_tun_config*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct saa7134_dev*,struct saa7134_fh*) ;
 int FUNC_12 (struct saa7134_dev*,struct saa7134_fh*) ;
 int VAR_9 ;
 int FUNC_13 (int *,int ) ;

int FUNC_14(struct saa7134_dev *VAR_10, struct saa7134_fh *VAR_11, struct v4l2_control *VAR_12)
{
 const struct v4l2_queryctrl* VAR_13;
 unsigned long VAR_14;
 int VAR_15 = 0;
 int VAR_16;




 if (VAR_11) {
  VAR_16 = FUNC_13(&VAR_10->prio, VAR_11->prio);
  if (0 != VAR_16)
   return VAR_16;
 }
 VAR_16 = -VAR_0;

 FUNC_2(&VAR_10->lock);

 VAR_13 = FUNC_0(VAR_12->id);
 if (((void*)0) == VAR_13)
  goto error;

 FUNC_1("set_control name=%s val=%d\n",VAR_13->name,VAR_12->value);
 switch (VAR_13->type) {
 case 130:
 case 128:
 case 129:
  if (VAR_12->value < VAR_13->minimum)
   VAR_12->value = VAR_13->minimum;
  if (VAR_12->value > VAR_13->maximum)
   VAR_12->value = VAR_13->maximum;
  break;
 default:
               ;
 };
 switch (VAR_12->id) {
 case 139:
  VAR_10->ctl_bright = VAR_12->value;
  FUNC_8(VAR_4, VAR_10->ctl_bright);
  break;
 case 136:
  VAR_10->ctl_hue = VAR_12->value;
  FUNC_8(VAR_2, VAR_10->ctl_hue);
  break;
 case 138:
  VAR_10->ctl_contrast = VAR_12->value;
  FUNC_8(VAR_5,
      VAR_10->ctl_invert ? -VAR_10->ctl_contrast : VAR_10->ctl_contrast);
  break;
 case 131:
  VAR_10->ctl_saturation = VAR_12->value;
  FUNC_8(VAR_3,
      VAR_10->ctl_invert ? -VAR_10->ctl_saturation : VAR_10->ctl_saturation);
  break;
 case 141:
  VAR_10->ctl_mute = VAR_12->value;
  FUNC_5(VAR_10);
  break;
 case 140:
  VAR_10->ctl_volume = VAR_12->value;
  FUNC_6(VAR_10,VAR_10->ctl_volume);
  break;
 case 134:
  VAR_10->ctl_invert = VAR_12->value;
  FUNC_8(VAR_5,
      VAR_10->ctl_invert ? -VAR_10->ctl_contrast : VAR_10->ctl_contrast);
  FUNC_8(VAR_3,
      VAR_10->ctl_invert ? -VAR_10->ctl_saturation : VAR_10->ctl_saturation);
  break;
 case 137:
  VAR_10->ctl_mirror = VAR_12->value;
  VAR_15 = 1;
  break;
 case 133:
  VAR_10->ctl_y_even = VAR_12->value;
  VAR_15 = 1;
  break;
 case 132:
  VAR_10->ctl_y_odd = VAR_12->value;
  VAR_15 = 1;
  break;
 case 135:
 {
  struct v4l2_priv_tun_config VAR_17;

  VAR_17.tuner = VAR_7;
  VAR_17.priv = &VAR_10->tda9887_conf;

  VAR_10->ctl_automute = VAR_12->value;
  if (VAR_10->tda9887_conf) {
   if (VAR_10->ctl_automute)
    VAR_10->tda9887_conf |= VAR_6;
   else
    VAR_10->tda9887_conf &= ~VAR_6;

   FUNC_7(VAR_10, VAR_9, VAR_8, &VAR_17);
  }
  break;
 }
 default:
  goto error;
 }
 if (VAR_15 && VAR_11 && FUNC_4(VAR_11, VAR_1)) {
  FUNC_9(&VAR_10->slock,VAR_14);
  FUNC_12(VAR_10,VAR_11);
  FUNC_11(VAR_10,VAR_11);
  FUNC_10(&VAR_10->slock,VAR_14);
 }
 VAR_16 = 0;

error:
 FUNC_3(&VAR_10->lock);
 return VAR_16;
}
