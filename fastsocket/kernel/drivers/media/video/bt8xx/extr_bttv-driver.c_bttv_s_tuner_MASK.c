
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; } ;
struct file {int dummy; } ;
struct bttv_fh {int prio; struct bttv* btv; } ;
struct bttv {scalar_t__ tuner_type; int (* audio_mode_gpio ) (struct bttv*,struct v4l2_tuner*,int) ;int prio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bttv*,int ,int ,struct v4l2_tuner*) ;
 int VAR_2 ;
 int FUNC_1 (struct bttv*,struct v4l2_tuner*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
     struct v4l2_tuner *VAR_6)
{
 struct bttv_fh *VAR_7 = VAR_5;
 struct bttv *VAR_8 = VAR_7->btv;
 int VAR_9;

 if (FUNC_2(0 != VAR_6->index))
  return -VAR_0;

 if (FUNC_2(VAR_8->tuner_type == VAR_1)) {
  VAR_9 = -VAR_0;
  goto err;
 }

 VAR_9 = FUNC_3(&VAR_8->prio, VAR_7->prio);
 if (FUNC_2(VAR_9))
  goto err;

 FUNC_0(VAR_8, VAR_3, VAR_2, VAR_6);

 if (VAR_8->audio_mode_gpio)
  VAR_8->audio_mode_gpio(VAR_8, VAR_6, 1);

err:

 return 0;
}
