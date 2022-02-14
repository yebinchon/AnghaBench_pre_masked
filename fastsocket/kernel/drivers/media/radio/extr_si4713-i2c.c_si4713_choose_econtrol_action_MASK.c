
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int threshold; int gain; int attack_time; int enabled; int release_time; } ;
struct TYPE_7__ {int deviation; int enabled; int release_time; } ;
struct TYPE_6__ {int frequency; int deviation; int enabled; } ;
struct TYPE_5__ {int pi; int deviation; int pty; } ;
struct si4713_device {int preemphasis; TYPE_4__ acomp_info; TYPE_3__ limiter_info; TYPE_2__ pilot_info; TYPE_1__ rds_info; } ;
typedef int s32 ;


 int FUNC_0 (unsigned long*) ;
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
 unsigned long* VAR_16 ;
 unsigned long* VAR_17 ;
 unsigned long* VAR_18 ;

__attribute__((used)) static int FUNC_1(struct si4713_device *VAR_19, u32 VAR_20,
  u32 **VAR_21, s32 *VAR_22, s32 *VAR_23, u16 *VAR_24, int *VAR_25,
  unsigned long **VAR_26, int *VAR_27)
{
 s32 VAR_28 = 0;

 switch (VAR_20) {

 case 130:
  *VAR_24 = VAR_14;
  *VAR_25 = 1;
  *VAR_21 = &VAR_19->rds_info.pi;
  break;
 case 138:
  *VAR_24 = VAR_6;
  *VAR_25 = 1;
  *VAR_21 = &VAR_19->acomp_info.threshold;
  break;
 case 140:
  *VAR_24 = VAR_4;
  *VAR_25 = 1;
  *VAR_21 = &VAR_19->acomp_info.gain;
  break;
 case 132:
  *VAR_24 = VAR_11;
  *VAR_25 = 1;
  *VAR_21 = &VAR_19->pilot_info.frequency;
  break;
 case 142:
  *VAR_24 = VAR_2;
  *VAR_25 = VAR_0;
  *VAR_21 = &VAR_19->acomp_info.attack_time;
  break;
 case 134:
  *VAR_24 = VAR_10;
  *VAR_25 = 10;
  *VAR_21 = &VAR_19->pilot_info.deviation;
  break;
 case 137:
  *VAR_24 = VAR_7;
  *VAR_25 = 10;
  *VAR_21 = &VAR_19->limiter_info.deviation;
  break;
 case 131:
  *VAR_24 = VAR_13;
  *VAR_25 = 1;
  *VAR_21 = &VAR_19->rds_info.deviation;
  break;

 case 129:
  *VAR_24 = VAR_15;
  *VAR_22 = 5;
  *VAR_23 = 0x1F << 5;
  *VAR_21 = &VAR_19->rds_info.pty;
  break;
 case 136:
  *VAR_24 = VAR_3;
  *VAR_22 = 1;
  *VAR_23 = 1 << 1;
  *VAR_21 = &VAR_19->limiter_info.enabled;
  break;
 case 141:
  *VAR_24 = VAR_3;
  *VAR_22 = 0;
  *VAR_23 = 1 << 0;
  *VAR_21 = &VAR_19->acomp_info.enabled;
  break;
 case 133:
  *VAR_24 = VAR_8;
  *VAR_22 = 0;
  *VAR_23 = 1 << 0;
  *VAR_21 = &VAR_19->pilot_info.enabled;
  break;

 case 135:
  *VAR_24 = VAR_9;
  *VAR_26 = VAR_17;
  *VAR_27 = FUNC_0(VAR_17);
  *VAR_21 = &VAR_19->limiter_info.release_time;
  break;
 case 139:
  *VAR_24 = VAR_5;
  *VAR_26 = VAR_16;
  *VAR_27 = FUNC_0(VAR_16);
  *VAR_21 = &VAR_19->acomp_info.release_time;
  break;
 case 128:
  *VAR_24 = VAR_12;
  *VAR_26 = VAR_18;
  *VAR_27 = FUNC_0(VAR_18);
  *VAR_21 = &VAR_19->preemphasis;
  break;

 default:
  VAR_28 = -VAR_1;
 };

 return VAR_28;
}
