
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_modulator {int txsubchans; scalar_t__ index; } ;
struct v4l2_frequency {scalar_t__ frequency; } ;
struct v4l2_ext_control {int value; int id; } ;
struct TYPE_8__ {scalar_t__ enabled; int radio_text; int ps_name; int pty; int deviation; int pi; } ;
struct TYPE_7__ {int release_time; int enabled; int attack_time; int gain; int threshold; } ;
struct TYPE_6__ {int release_time; int enabled; int deviation; } ;
struct TYPE_5__ {int enabled; int deviation; int frequency; } ;
struct si4713_device {int sd; TYPE_4__ rds_info; scalar_t__ stereo; int antenna_capacitor; int power_level; scalar_t__ frequency; int preemphasis; TYPE_3__ acomp_info; TYPE_2__ limiter_info; TYPE_1__ pilot_info; int mutex; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct si4713_device*) ;
 struct si4713_device* FUNC_1 (int,int ) ;
 int FUNC_2 (struct si4713_device*,struct si4713_device*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct v4l2_frequency*) ;
 int FUNC_6 (int *,struct v4l2_modulator*) ;
 int FUNC_7 (struct si4713_device*,int ) ;
 int FUNC_8 (struct si4713_device*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct si4713_device*,struct v4l2_ext_control*) ;
 int FUNC_11 (struct si4713_device*,struct v4l2_ext_control*) ;

__attribute__((used)) static int FUNC_12(struct si4713_device *VAR_25)
{
 struct v4l2_ext_control VAR_26;
 struct v4l2_frequency VAR_27;
 struct v4l2_modulator VAR_28;
 struct si4713_device *VAR_29;
 int VAR_30 = 0;

 VAR_29 = FUNC_1(sizeof(*VAR_29), VAR_2);
 if (!VAR_29)
  return -VAR_1;


 FUNC_3(&VAR_25->mutex);
 FUNC_2(VAR_29, VAR_25, sizeof(*VAR_25));
 FUNC_4(&VAR_25->mutex);

 VAR_26.id = VAR_15;
 VAR_26.value = VAR_29->rds_info.pi;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_7;
 VAR_26.value = VAR_29->acomp_info.threshold;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_5;
 VAR_26.value = VAR_29->acomp_info.gain;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_13;
 VAR_26.value = VAR_29->pilot_info.frequency;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_3;
 VAR_26.value = VAR_29->acomp_info.attack_time;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_11;
 VAR_26.value = VAR_29->pilot_info.deviation;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_8;
 VAR_26.value = VAR_29->limiter_info.deviation;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_14;
 VAR_26.value = VAR_29->rds_info.deviation;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_17;
 VAR_26.value = VAR_29->rds_info.pty;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_9;
 VAR_26.value = VAR_29->limiter_info.enabled;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_4;
 VAR_26.value = VAR_29->acomp_info.enabled;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_12;
 VAR_26.value = VAR_29->pilot_info.enabled;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_10;
 VAR_26.value = VAR_29->limiter_info.release_time;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_6;
 VAR_26.value = VAR_29->acomp_info.release_time;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_21;
 VAR_26.value = VAR_29->preemphasis;
 VAR_30 |= FUNC_10(VAR_25, &VAR_26);

 VAR_26.id = VAR_16;
 VAR_30 |= FUNC_7(VAR_25, VAR_29->rds_info.ps_name);

 VAR_26.id = VAR_18;
 VAR_30 |= FUNC_8(VAR_25, VAR_29->rds_info.radio_text);


 VAR_27.frequency = VAR_29->frequency ? VAR_29->frequency : VAR_0;
 VAR_27.frequency = FUNC_9(VAR_27.frequency);
 VAR_30 |= FUNC_5(&VAR_25->sd, &VAR_27);

 VAR_26.id = VAR_20;
 VAR_26.value = VAR_29->power_level;
 VAR_30 |= FUNC_11(VAR_25, &VAR_26);

 VAR_26.id = VAR_19;
 VAR_26.value = VAR_29->antenna_capacitor;
 VAR_30 |= FUNC_11(VAR_25, &VAR_26);

 VAR_28.index = 0;
 if (VAR_29->stereo)
  VAR_28.txsubchans = VAR_24;
 else
  VAR_28.txsubchans = VAR_22;
 if (VAR_29->rds_info.enabled)
  VAR_28.txsubchans |= VAR_23;
 FUNC_6(&VAR_25->sd, &VAR_28);

 FUNC_0(VAR_29);

 return VAR_30;
}
