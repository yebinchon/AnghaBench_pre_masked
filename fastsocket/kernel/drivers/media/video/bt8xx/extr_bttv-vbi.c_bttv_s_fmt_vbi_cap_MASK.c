
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int* start; } ;
struct TYPE_5__ {TYPE_4__ vbi; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct bttv_tvnorm {int* vbistart; } ;
struct TYPE_7__ {int vb_lock; } ;
struct TYPE_6__ {int end; struct bttv_tvnorm const* tvnorm; TYPE_4__ fmt; } ;
struct bttv_fh {int resources; TYPE_3__ vbi; TYPE_2__ vbi_fmt; struct bttv* btv; } ;
struct bttv {size_t tvnorm; int lock; int crop_start; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct bttv_tvnorm* VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,struct bttv_tvnorm const*,int ) ;

int FUNC_4(struct file *VAR_3, void *VAR_4, struct v4l2_format *VAR_5)
{
 struct bttv_fh *VAR_6 = VAR_4;
 struct bttv *VAR_7 = VAR_6->btv;
 const struct bttv_tvnorm *VAR_8;
 __s32 VAR_9, VAR_10;
 int VAR_11;

 FUNC_1(&VAR_7->lock);

 VAR_11 = -VAR_0;
 if (VAR_6->resources & VAR_1)
  goto fail;

 VAR_8 = &VAR_2[VAR_7->tvnorm];

 VAR_11 = FUNC_3(&VAR_5->fmt.vbi, VAR_8, VAR_7->crop_start);
 if (0 != VAR_11)
  goto fail;

 VAR_9 = VAR_5->fmt.vbi.start[1] - VAR_8->vbistart[1] +
  VAR_8->vbistart[0];







 VAR_10 = FUNC_0(VAR_5->fmt.vbi.start[0], VAR_9) * 2 + 2;

 FUNC_1(&VAR_6->vbi.vb_lock);

 VAR_6->vbi_fmt.fmt = VAR_5->fmt.vbi;
 VAR_6->vbi_fmt.tvnorm = VAR_8;
 VAR_6->vbi_fmt.end = VAR_10;

 FUNC_2(&VAR_6->vbi.vb_lock);

 VAR_11 = 0;

 fail:
 FUNC_2(&VAR_7->lock);

 return VAR_11;
}
