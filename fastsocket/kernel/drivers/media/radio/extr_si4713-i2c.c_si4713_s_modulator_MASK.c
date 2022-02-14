
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_modulator {scalar_t__ index; int txsubchans; } ;
struct TYPE_2__ {void* enabled; } ;
struct si4713_device {int mutex; TYPE_1__ rds_info; void* stereo; scalar_t__ power_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,void*,int,int) ;
 int FUNC_3 (struct si4713_device*,int ,int *) ;
 int FUNC_4 (struct si4713_device*,int ,int ) ;
 struct si4713_device* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_6, struct v4l2_modulator *VAR_7)
{
 struct si4713_device *VAR_8 = FUNC_5(VAR_6);
 int VAR_9 = 0;
 u16 VAR_10, VAR_11;
 u32 VAR_12;

 if (!VAR_8)
  return -VAR_1;

 if (VAR_7->index > 0)
  return -VAR_0;


 if (VAR_7->txsubchans & VAR_5)
  VAR_10 = 1;
 else if (VAR_7->txsubchans & VAR_3)
  VAR_10 = 0;
 else
  return -VAR_0;

 VAR_11 = !!(VAR_7->txsubchans & VAR_4);

 FUNC_0(&VAR_8->mutex);

 if (VAR_8->power_state) {
  VAR_9 = FUNC_3(VAR_8,
      VAR_2, &VAR_12);
  if (VAR_9 < 0)
   goto unlock;

  VAR_12 = FUNC_2(VAR_12, VAR_10, 1, 1 << 1);
  VAR_12 = FUNC_2(VAR_12, VAR_11, 2, 1 << 2);

  VAR_9 = FUNC_4(VAR_8,
      VAR_2, VAR_12);
  if (VAR_9 < 0)
   goto unlock;
 }

 VAR_8->stereo = VAR_10;
 VAR_8->rds_info.enabled = VAR_11;

unlock:
 FUNC_1(&VAR_8->mutex);
 return VAR_9;
}
