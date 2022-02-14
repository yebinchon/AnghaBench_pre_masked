
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_rect {unsigned int height; scalar_t__ top; int width; } ;
struct bttv_fh {scalar_t__ do_crop; struct bttv* btv; } ;
struct TYPE_5__ {scalar_t__ top; } ;
struct bttv_crop {unsigned int min_scaled_width; unsigned int min_scaled_height; unsigned int max_scaled_width; unsigned int max_scaled_height; TYPE_2__ rect; } ;
struct bttv {size_t tvnorm; scalar_t__ vbi_end; struct bttv_crop* crop; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef unsigned int __s32 ;
struct TYPE_4__ {struct v4l2_rect bounds; } ;
struct TYPE_6__ {TYPE_1__ cropcap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct bttv_crop*,struct v4l2_rect const*,unsigned int,unsigned int,int) ;
 TYPE_3__* VAR_4 ;
 unsigned int FUNC_3 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (struct bttv*,int ) ;
 unsigned int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static int
FUNC_6 (struct bttv_fh * VAR_5,
    __s32 * VAR_6,
    __s32 * VAR_7,
    enum v4l2_field VAR_8,
    unsigned int VAR_9,
    unsigned int VAR_10,
    int VAR_11,
    int VAR_12)
{
 struct bttv *VAR_13 = VAR_5->btv;
 const struct v4l2_rect *VAR_14;
 struct bttv_crop *VAR_15;
 __s32 VAR_16;
 __s32 VAR_17;
 __s32 VAR_18;
 __s32 VAR_19;
 int VAR_20;

 FUNC_0((int) VAR_9 >= 0 ||
        VAR_10 >= (unsigned int) -VAR_9);




 VAR_14 = &VAR_4[VAR_13->tvnorm].cropcap.bounds;


 VAR_15 = &VAR_13->crop[!!VAR_5->do_crop];

 if (VAR_5->do_crop
     && VAR_11
     && VAR_12
     && !FUNC_4(VAR_13, VAR_3)) {
  VAR_16 = 48;
  VAR_17 = 32;




  VAR_18 = FUNC_5(VAR_14->width, (__s32) VAR_2);
  VAR_19 = VAR_14->height;




  if (VAR_13->vbi_end > VAR_14->top) {
   VAR_19 -= VAR_13->vbi_end - VAR_14->top;
   VAR_20 = -VAR_0;
   if (VAR_17 > VAR_19)
    goto fail;
  }
 } else {
  VAR_20 = -VAR_0;
  if (VAR_13->vbi_end > VAR_15->rect.top)
   goto fail;

  VAR_16 = VAR_15->min_scaled_width;
  VAR_17 = VAR_15->min_scaled_height;
  VAR_18 = VAR_15->max_scaled_width;
  VAR_19 = VAR_15->max_scaled_height;

  VAR_12 = 0;
 }

 VAR_16 = (VAR_16 - VAR_9 - 1) & VAR_9;
 VAR_18 = VAR_18 & VAR_9;


 VAR_17 = VAR_17;

 VAR_19 >>= !FUNC_1(VAR_8);

 if (VAR_11) {
  *VAR_6 = FUNC_3(*VAR_6, VAR_16, VAR_18);
  *VAR_7 = FUNC_3(*VAR_7, VAR_17, VAR_19);


  *VAR_6 = (*VAR_6 + VAR_10) & VAR_9;

  if (VAR_12) {
   FUNC_2(VAR_15, VAR_14, *VAR_6, *VAR_7, VAR_8);

   if (VAR_13->vbi_end > VAR_15->rect.top) {

    VAR_15->rect.top = VAR_13->vbi_end;
   }
  }
 } else {
  VAR_20 = -VAR_1;
  if (*VAR_6 < VAR_16 ||
      *VAR_7 < VAR_17 ||
      *VAR_6 > VAR_18 ||
      *VAR_7 > VAR_19 ||
      0 != (*VAR_6 & ~VAR_9))
   goto fail;
 }

 VAR_20 = 0;

 fail:

 return VAR_20;
}
