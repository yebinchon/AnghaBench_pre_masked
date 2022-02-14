
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_crop {scalar_t__ type; int c; } ;
struct file {int dummy; } ;
struct bttv_fh {int do_crop; struct bttv* btv; } ;
struct bttv {TYPE_1__* crop; } ;
struct TYPE_2__ {int rect; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4, struct v4l2_crop *VAR_5)
{
 struct bttv_fh *VAR_6 = VAR_4;
 struct bttv *VAR_7 = VAR_6->btv;

 if (VAR_5->type != VAR_1 &&
     VAR_5->type != VAR_2)
  return -VAR_0;





 VAR_5->c = VAR_7->crop[!!VAR_6->do_crop].rect;

 return 0;
}
