
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int type; int name; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {scalar_t__ tuner_type; int (* audio_mode_gpio ) (struct bttv*,struct v4l2_tuner*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bttv*,int ,int ,struct v4l2_tuner*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bttv*,struct v4l2_tuner*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6, struct v4l2_tuner *VAR_7)
{
 struct bttv_fh *VAR_8 = VAR_6;
 struct bttv *VAR_9 = VAR_8->btv;

 if (VAR_9->tuner_type == VAR_1)
  return -VAR_0;
 if (0 != VAR_7->index)
  return -VAR_0;
 FUNC_1(VAR_7->name, "Radio");
 VAR_7->type = VAR_2;

 FUNC_0(VAR_9, VAR_4, VAR_3, VAR_7);

 if (VAR_9->audio_mode_gpio)
  VAR_9->audio_mode_gpio(VAR_9, VAR_7, 0);

 return 0;
}
