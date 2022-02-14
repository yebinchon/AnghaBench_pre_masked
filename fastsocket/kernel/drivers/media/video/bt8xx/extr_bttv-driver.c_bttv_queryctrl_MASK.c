
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {scalar_t__ id; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int volume_gpio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct v4l2_queryctrl* FUNC_0 (scalar_t__) ;
 struct v4l2_queryctrl const VAR_6 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_7, void *VAR_8,
     struct v4l2_queryctrl *VAR_9)
{
 struct bttv_fh *VAR_10 = VAR_8;
 struct bttv *VAR_11 = VAR_10->btv;
 const struct v4l2_queryctrl *VAR_12;

 if ((VAR_9->id < VAR_2 ||
      VAR_9->id >= VAR_3) &&
     (VAR_9->id < VAR_4 ||
      VAR_9->id >= VAR_5))
  return -VAR_0;

 if (!VAR_11->volume_gpio && (VAR_9->id == VAR_1))
  *VAR_9 = VAR_6;
 else {
  VAR_12 = FUNC_0(VAR_9->id);

  *VAR_9 = (((void*)0) != VAR_12) ? *VAR_12 : VAR_6;
 }

 return 0;
}
