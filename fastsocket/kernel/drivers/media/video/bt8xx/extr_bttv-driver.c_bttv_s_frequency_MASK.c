
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct file {int dummy; } ;
struct bttv_fh {int prio; struct bttv* btv; } ;
struct bttv {int freq; scalar_t__ radio_user; scalar_t__ has_matchbox; int prio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bttv*,int ,int ,struct v4l2_frequency*) ;
 int VAR_3 ;
 int FUNC_1 (struct bttv*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
     struct v4l2_frequency *VAR_7)
{
 struct bttv_fh *VAR_8 = VAR_6;
 struct bttv *VAR_9 = VAR_8->btv;
 int VAR_10;

 if (FUNC_2(VAR_7->tuner != 0))
  return -VAR_0;

 VAR_10 = FUNC_3(&VAR_9->prio, VAR_8->prio);
 if (FUNC_2(VAR_10))
  goto err;

 if (FUNC_2(VAR_7->type != (VAR_9->radio_user
  ? VAR_2 : VAR_1))) {
  VAR_10 = -VAR_0;
  goto err;
 }
 VAR_9->freq = VAR_7->frequency;
 FUNC_0(VAR_9, VAR_4, VAR_3, VAR_7);
 if (VAR_9->has_matchbox && VAR_9->radio_user)
  FUNC_1(VAR_9, VAR_9->freq);
err:

 return 0;
}
