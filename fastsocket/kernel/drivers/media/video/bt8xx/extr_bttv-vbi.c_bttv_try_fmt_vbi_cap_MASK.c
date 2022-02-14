
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vbi; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct bttv_tvnorm {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {size_t tvnorm; int lock; int crop_start; } ;
typedef int __s32 ;


 struct bttv_tvnorm* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bttv_tvnorm const*,int ) ;

int FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct bttv_fh *VAR_4 = VAR_2;
 struct bttv *VAR_5 = VAR_4->btv;
 const struct bttv_tvnorm *VAR_6;
 __s32 VAR_7;

 FUNC_0(&VAR_5->lock);

 VAR_6 = &VAR_0[VAR_5->tvnorm];
 VAR_7 = VAR_5->crop_start;

 FUNC_1(&VAR_5->lock);

 return FUNC_2(&VAR_3->fmt.vbi, VAR_6, VAR_7);
}
