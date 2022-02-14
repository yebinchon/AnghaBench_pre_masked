
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int enabled; int gain; int threshold; int attack_time; int release_time; } ;
struct TYPE_7__ {int enabled; int frequency; int deviation; } ;
struct TYPE_6__ {int enabled; int deviation; int release_time; } ;
struct TYPE_5__ {int enabled; int radio_text; int ps_name; int deviation; int pty; int pi; } ;
struct si4713_device {int stereo; int mutex; int tune_rnl; scalar_t__ antenna_capacitor; int power_level; int mute; int preemphasis; int frequency; TYPE_4__ acomp_info; TYPE_3__ pilot_info; TYPE_2__ limiter_info; TYPE_1__ rds_info; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct si4713_device*) ;
 int FUNC_3 (struct si4713_device*,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct si4713_device *VAR_22)
{
 int VAR_23;

 VAR_23 = FUNC_3(VAR_22, VAR_21);
 if (VAR_23 < 0)
  goto exit;

 VAR_23 = FUNC_2(VAR_22);
 if (VAR_23 < 0)
  goto exit;

 VAR_23 = FUNC_3(VAR_22, VAR_20);
 if (VAR_23 < 0)
  goto exit;

 FUNC_0(&VAR_22->mutex);

 VAR_22->rds_info.pi = VAR_13;
 VAR_22->rds_info.pty = VAR_15;
 VAR_22->rds_info.deviation = VAR_12;
 FUNC_4(VAR_22->rds_info.ps_name, VAR_14, VAR_18);
 FUNC_4(VAR_22->rds_info.radio_text, VAR_16,
       VAR_19);
 VAR_22->rds_info.enabled = 1;

 VAR_22->limiter_info.release_time = VAR_6;
 VAR_22->limiter_info.deviation = VAR_5;
 VAR_22->limiter_info.enabled = 1;

 VAR_22->pilot_info.deviation = VAR_8;
 VAR_22->pilot_info.frequency = VAR_9;
 VAR_22->pilot_info.enabled = 1;

 VAR_22->acomp_info.release_time = VAR_2;
 VAR_22->acomp_info.attack_time = VAR_0;
 VAR_22->acomp_info.threshold = VAR_3;
 VAR_22->acomp_info.gain = VAR_1;
 VAR_22->acomp_info.enabled = 1;

 VAR_22->frequency = VAR_4;
 VAR_22->preemphasis = VAR_11;
 VAR_22->mute = VAR_7;
 VAR_22->power_level = VAR_10;
 VAR_22->antenna_capacitor = 0;
 VAR_22->stereo = 1;
 VAR_22->tune_rnl = VAR_17;

 FUNC_1(&VAR_22->mutex);

exit:
 return VAR_23;
}
