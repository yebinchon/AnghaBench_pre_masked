
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct saa717x_state {int audio_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,struct saa717x_state*) ;
 struct saa717x_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
       u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct saa717x_state *VAR_6 = FUNC_1(VAR_2);

 if (VAR_3 < 3) {
  VAR_6->audio_input = VAR_3;
  FUNC_2(1, VAR_1, VAR_2,
    "set decoder audio input to %d\n",
    VAR_6->audio_input);
  FUNC_0(VAR_2, VAR_6);
  return 0;
 }
 return -VAR_0;
}
