
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int left; int width; int top; int height; } ;
struct TYPE_2__ {int width; int left; int height; int top; } ;
struct bttv_crop {int min_scaled_width; int max_scaled_width; int min_scaled_height; int max_scaled_height; TYPE_1__ rect; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef int __s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bttv_crop*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3 (struct bttv_crop * VAR_1,
    const struct v4l2_rect * VAR_2,
    __s32 VAR_3,
    __s32 VAR_4,
    enum v4l2_field VAR_5)
{
 __s32 VAR_6 = VAR_4 << !FUNC_0(VAR_5);
 __s32 VAR_7;
 __s32 VAR_8;

 if (VAR_3 < VAR_1->min_scaled_width) {

  VAR_1->rect.width = VAR_3 * 16;
 } else if (VAR_3 > VAR_1->max_scaled_width) {

  VAR_1->rect.width = VAR_3;

  VAR_7 = VAR_2->left + VAR_2->width - VAR_3;
  VAR_7 = FUNC_2(VAR_7, (__s32) VAR_0);
  if (VAR_1->rect.left > VAR_7)
   VAR_1->rect.left = VAR_7;
 }

 if (VAR_4 < VAR_1->min_scaled_height) {

  VAR_1->rect.height = VAR_4 * 16;
 } else if (VAR_6 > VAR_1->max_scaled_height) {


  VAR_1->rect.height = (VAR_6 + 1) & ~1;

  VAR_8 = VAR_2->top + VAR_2->height - VAR_1->rect.height;
  if (VAR_1->rect.top > VAR_8)
   VAR_1->rect.top = VAR_8;
 }

 FUNC_1(VAR_1);
}
