
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_rect {int left; int width; int top; int height; } ;
struct TYPE_7__ {int height; int top; int width; int left; } ;
struct v4l2_crop {scalar_t__ type; TYPE_2__ c; } ;
struct file {int dummy; } ;
struct bttv_fh {int do_crop; scalar_t__ width; scalar_t__ height; struct bttv* btv; int prio; } ;
struct TYPE_8__ {int left; int top; int height; void* width; } ;
struct bttv_crop {scalar_t__ min_scaled_width; scalar_t__ max_scaled_width; scalar_t__ min_scaled_height; scalar_t__ max_scaled_height; TYPE_3__ rect; } ;
struct TYPE_9__ {scalar_t__ width; scalar_t__ height; } ;
struct bttv {size_t tvnorm; TYPE_4__ init; struct bttv_crop* crop; int vbi_end; int prio; } ;
typedef int __s32 ;
struct TYPE_6__ {struct v4l2_rect bounds; } ;
struct TYPE_10__ {TYPE_1__ cropcap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bttv_crop*) ;
 TYPE_5__* VAR_6 ;
 void* FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (struct bttv*,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_7, void *VAR_8, struct v4l2_crop *VAR_9)
{
 struct bttv_fh *VAR_10 = VAR_8;
 struct bttv *VAR_11 = VAR_10->btv;
 const struct v4l2_rect *VAR_12;
 int VAR_13;
 struct bttv_crop VAR_14;
 __s32 VAR_15;
 __s32 VAR_16;
 __s32 VAR_17;
 __s32 VAR_18;

 if (VAR_9->type != VAR_3 &&
     VAR_9->type != VAR_4)
  return -VAR_1;




 VAR_13 = FUNC_5(&VAR_11->prio, VAR_10->prio);
 if (0 != VAR_13) {
  return VAR_13;
 }

 VAR_13 = -VAR_0;

 if (FUNC_2(VAR_10->btv, VAR_5)) {
  return VAR_13;
 }

 VAR_12 = &VAR_6[VAR_11->tvnorm].cropcap.bounds;

 VAR_15 = VAR_12->left;
 VAR_17 = VAR_15 + VAR_12->width;
 VAR_18 = VAR_12->top + VAR_12->height;

 VAR_16 = FUNC_3(VAR_12->top, VAR_11->vbi_end);
 if (VAR_16 + 32 >= VAR_18) {
  return VAR_13;
 }


 VAR_14.rect.left = FUNC_1(VAR_9->c.left, VAR_15, VAR_17 - 48);
 VAR_14.rect.left = FUNC_4(VAR_14.rect.left, (__s32) VAR_2);

 VAR_14.rect.width = FUNC_1(VAR_9->c.width,
        48, VAR_17 - VAR_14.rect.left);

 VAR_14.rect.top = FUNC_1(VAR_9->c.top, VAR_16, VAR_18 - 32);

 VAR_14.rect.top = (VAR_14.rect.top + 1) & ~1;

 VAR_14.rect.height = FUNC_1(VAR_9->c.height,
         32, VAR_18 - VAR_14.rect.top);
 VAR_14.rect.height = (VAR_14.rect.height + 1) & ~1;

 FUNC_0(&VAR_14);

 VAR_11->crop[1] = VAR_14;

 VAR_10->do_crop = 1;

 if (VAR_10->width < VAR_14.min_scaled_width) {
  VAR_10->width = VAR_14.min_scaled_width;
  VAR_11->init.width = VAR_14.min_scaled_width;
 } else if (VAR_10->width > VAR_14.max_scaled_width) {
  VAR_10->width = VAR_14.max_scaled_width;
  VAR_11->init.width = VAR_14.max_scaled_width;
 }

 if (VAR_10->height < VAR_14.min_scaled_height) {
  VAR_10->height = VAR_14.min_scaled_height;
  VAR_11->init.height = VAR_14.min_scaled_height;
 } else if (VAR_10->height > VAR_14.max_scaled_height) {
  VAR_10->height = VAR_14.max_scaled_height;
  VAR_11->init.height = VAR_14.max_scaled_height;
 }

 return 0;
}
