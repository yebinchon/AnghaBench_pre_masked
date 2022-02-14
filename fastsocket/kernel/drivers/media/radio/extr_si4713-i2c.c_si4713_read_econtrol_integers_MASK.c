
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct v4l2_ext_control {scalar_t__ id; int value; } ;
struct si4713_device {int mutex; scalar_t__ power_state; } ;
typedef scalar_t__ s32 ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,unsigned long*,int) ;
 int FUNC_1 (int,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct si4713_device*,scalar_t__,int**,scalar_t__*,scalar_t__*,int *,int*,unsigned long**,int*) ;
 scalar_t__ FUNC_5 (struct si4713_device*,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct si4713_device *VAR_1,
    struct v4l2_ext_control *VAR_2)
{
 s32 VAR_3;
 u32 *VAR_4 = ((void*)0), VAR_5 = 0;
 s32 VAR_6 = 0, VAR_7 = 0;
 u16 VAR_8 = 0;
 int VAR_9 = 0;
 unsigned long *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 VAR_3 = FUNC_4(VAR_1, VAR_2->id, &VAR_4, &VAR_6,
   &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_3 < 0)
  goto exit;

 FUNC_2(&VAR_1->mutex);

 if (VAR_1->power_state) {
  VAR_3 = FUNC_5(VAR_1, VAR_8, &VAR_5);
  if (VAR_3 < 0)
   goto unlock;


  if (VAR_2->id == VAR_0)
   *VAR_4 = (s16)VAR_5;
  else if (VAR_7)
   *VAR_4 = FUNC_1(VAR_5, VAR_6, VAR_7);
  else if (VAR_9)
   *VAR_4 = VAR_5 * VAR_9;
  else
   *VAR_4 = FUNC_0(VAR_5, VAR_10, VAR_11);
 }

 VAR_2->value = *VAR_4;

unlock:
 FUNC_3(&VAR_1->mutex);
exit:
 return VAR_3;
}
