
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; scalar_t__ audmode; } ;
struct poseidon {int dummy; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ v4l2_audio_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct front_face*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct poseidon*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, struct v4l2_tuner *VAR_5)
{
 struct front_face *VAR_6 = VAR_4;
 struct poseidon *VAR_7 = VAR_6->pd;
 int VAR_8;

 if (0 != VAR_5->index)
  return -VAR_0;
 FUNC_0(VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  if (VAR_5->audmode == VAR_2[VAR_8].v4l2_audio_mode)
   return FUNC_1(VAR_7, VAR_8);
 return -VAR_0;
}
