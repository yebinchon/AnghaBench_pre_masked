
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct bttv_crop {int min_scaled_width; int min_scaled_height; int max_scaled_width; int max_scaled_height; TYPE_1__ rect; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(struct bttv_crop *VAR_0)
{



 if (1) {


  VAR_0->min_scaled_width = 48;
  VAR_0->min_scaled_height = 32;
 } else {
  VAR_0->min_scaled_width =
   (FUNC_0(48, VAR_0->rect.width >> 4) + 3) & ~3;
  VAR_0->min_scaled_height =
   FUNC_0(32, VAR_0->rect.height >> 4);
 }

 VAR_0->max_scaled_width = VAR_0->rect.width & ~3;
 VAR_0->max_scaled_height = VAR_0->rect.height;
}
