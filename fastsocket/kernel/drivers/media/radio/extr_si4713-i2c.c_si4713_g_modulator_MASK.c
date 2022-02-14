
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_modulator {scalar_t__ index; int capability; int txsubchans; void* rangehigh; void* rangelow; int name; } ;
struct TYPE_2__ {void* enabled; } ;
struct si4713_device {int mutex; TYPE_1__ rds_info; void* stereo; scalar_t__ power_state; } ;


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
 void* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct si4713_device*,int ,int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 struct si4713_device* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_11, struct v4l2_modulator *VAR_12)
{
 struct si4713_device *VAR_13 = FUNC_6(VAR_11);
 int VAR_14 = 0;

 if (!VAR_13) {
  VAR_14 = -VAR_1;
  goto exit;
 }

 if (VAR_12->index > 0) {
  VAR_14 = -VAR_0;
  goto exit;
 }

 FUNC_5(VAR_12->name, "FM Modulator", 32);
 VAR_12->capability = VAR_7 | VAR_5 |
      VAR_6;


 VAR_12->rangelow = FUNC_4(VAR_3);
 VAR_12->rangehigh = FUNC_4(VAR_2);

 FUNC_1(&VAR_13->mutex);

 if (VAR_13->power_state) {
  u32 VAR_15 = 0;

  VAR_14 = FUNC_3(VAR_13, VAR_4,
      &VAR_15);
  if (VAR_14 < 0)
   goto unlock;

  VAR_13->stereo = FUNC_0(VAR_15, 1, 1 << 1);
  VAR_13->rds_info.enabled = FUNC_0(VAR_15, 2, 1 << 2);
 }


 if (VAR_13->stereo)
  VAR_12->txsubchans = VAR_10;
 else
  VAR_12->txsubchans = VAR_8;


 if (VAR_13->rds_info.enabled)
  VAR_12->txsubchans |= VAR_9;
 else
  VAR_12->txsubchans &= ~VAR_9;

unlock:
 FUNC_2(&VAR_13->mutex);
exit:
 return VAR_14;
}
