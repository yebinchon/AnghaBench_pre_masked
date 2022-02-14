
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int signal; int type; int capability; int name; int rxsubchans; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {scalar_t__ tuner_type; int (* audio_mode_gpio ) (struct bttv*,struct v4l2_tuner*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bttv*,int ,int ,struct v4l2_tuner*) ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct bttv*,struct v4l2_tuner*,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_9, void *VAR_10,
    struct v4l2_tuner *VAR_11)
{
 struct bttv_fh *VAR_12 = VAR_10;
 struct bttv *VAR_13 = VAR_12->btv;

 if (VAR_13->tuner_type == VAR_3)
  return -VAR_2;
 if (0 != VAR_11->index)
  return -VAR_2;

 VAR_11->rxsubchans = VAR_6;
 FUNC_1(VAR_13, VAR_8, VAR_7, VAR_11);
 FUNC_2(VAR_11->name, "Television");
 VAR_11->capability = VAR_5;
 VAR_11->type = VAR_4;
 if (FUNC_0(VAR_0)&VAR_1)
  VAR_11->signal = 0xffff;

 if (VAR_13->audio_mode_gpio)
  VAR_13->audio_mode_gpio(VAR_13, VAR_11, 0);

 return 0;
}
