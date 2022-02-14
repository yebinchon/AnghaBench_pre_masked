
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; int step; } ;
struct v4l2_ext_control {int id; int string; int size; } ;
struct si4713_device {int sd; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int *,struct v4l2_queryctrl*) ;
 scalar_t__ FUNC_2 (struct si4713_device*,char*) ;
 scalar_t__ FUNC_3 (struct si4713_device*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct si4713_device *VAR_4,
    struct v4l2_ext_control *VAR_5)
{
 struct v4l2_queryctrl VAR_6;
 int VAR_7;
 s32 VAR_8 = 0;

 VAR_6.id = VAR_5->id;
 VAR_8 = FUNC_1(&VAR_4->sd, &VAR_6);
 if (VAR_8 < 0)
  goto exit;

 switch (VAR_5->id) {
 case 129: {
  char VAR_9[VAR_2 + 1];

  VAR_7 = VAR_5->size - 1;
  if (VAR_7 > VAR_2) {
   VAR_8 = -VAR_1;
   goto exit;
  }
  VAR_8 = FUNC_0(VAR_9, VAR_5->string, VAR_7);
  if (VAR_8 < 0)
   goto exit;
  VAR_9[VAR_7] = '\0';

  if (FUNC_4(VAR_9) % VAR_6.step) {
   VAR_8 = -VAR_1;
   goto exit;
  }

  VAR_8 = FUNC_2(VAR_4, VAR_9);
 }
  break;

 case 128: {
  char VAR_10[VAR_3 + 1];

  VAR_7 = VAR_5->size - 1;
  if (VAR_7 > VAR_3) {
   VAR_8 = -VAR_1;
   goto exit;
  }
  VAR_8 = FUNC_0(VAR_10, VAR_5->string, VAR_7);
  if (VAR_8 < 0)
   goto exit;
  VAR_10[VAR_7] = '\0';

  if (FUNC_4(VAR_10) % VAR_6.step) {
   VAR_8 = -VAR_1;
   goto exit;
  }

  VAR_8 = FUNC_3(VAR_4, VAR_10);
 }
  break;

 default:
  VAR_8 = -VAR_0;
  break;
 };

exit:
 return VAR_8;
}
