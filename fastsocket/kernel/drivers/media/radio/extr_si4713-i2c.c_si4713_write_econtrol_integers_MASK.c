
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct v4l2_ext_control {int value; int id; } ;
struct si4713_device {int mutex; scalar_t__ power_state; int sd; } ;
typedef int s32 ;


 int FUNC_0 (int,unsigned long*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (struct si4713_device*,int ,int**,int*,int*,int *,int*,unsigned long**,int*) ;
 int FUNC_5 (struct si4713_device*,int ,int*) ;
 int FUNC_6 (struct si4713_device*,int ,int) ;
 int FUNC_7 (int,unsigned long*,int) ;
 int FUNC_8 (int *,struct v4l2_ext_control*) ;

__attribute__((used)) static int FUNC_9(struct si4713_device *VAR_0,
     struct v4l2_ext_control *VAR_1)
{
 s32 VAR_2;
 u32 *VAR_3 = ((void*)0), VAR_4 = 0;
 s32 VAR_5 = 0, VAR_6 = 0;
 u16 VAR_7 = 0;
 int VAR_8 = 0;
 unsigned long *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 VAR_2 = FUNC_8(&VAR_0->sd, VAR_1);
 if (VAR_2 < 0)
  goto exit;

 VAR_2 = FUNC_4(VAR_0, VAR_1->id, &VAR_3, &VAR_5,
   &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (VAR_2 < 0)
  goto exit;

 VAR_4 = VAR_1->value;
 if (VAR_8) {
  VAR_4 = VAR_1->value / VAR_8;
 } else if (VAR_9) {
  VAR_2 = FUNC_7(VAR_1->value, VAR_9, VAR_10);
  if (VAR_2 < 0)
   goto exit;
  VAR_4 = VAR_2;
  VAR_2 = 0;
 }

 FUNC_1(&VAR_0->mutex);

 if (VAR_0->power_state) {
  if (VAR_6) {
   VAR_2 = FUNC_5(VAR_0, VAR_7, &VAR_4);
   if (VAR_2 < 0)
    goto unlock;
   VAR_4 = FUNC_3(VAR_4, VAR_1->value, VAR_5, VAR_6);
  }

  VAR_2 = FUNC_6(VAR_0, VAR_7, VAR_4);
  if (VAR_2 < 0)
   goto unlock;
  if (VAR_6)
   VAR_4 = VAR_1->value;
 }

 if (VAR_8) {
  *VAR_3 = VAR_4 * VAR_8;
 } else if (VAR_9) {
  VAR_2 = FUNC_0(VAR_4, VAR_9, VAR_10);
  if (VAR_2 < 0)
   goto unlock;
  *VAR_3 = VAR_2;
  VAR_2 = 0;
 } else {
  *VAR_3 = VAR_4;
 }

unlock:
 FUNC_2(&VAR_0->mutex);
exit:
 return VAR_2;
}
