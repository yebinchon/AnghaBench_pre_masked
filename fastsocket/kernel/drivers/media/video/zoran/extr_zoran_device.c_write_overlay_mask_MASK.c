
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int width; int height; } ;
struct zoran_fh {int* overlay_mask; TYPE_2__ overlay_settings; struct zoran* zr; } ;
struct zoran {int dummy; } ;
struct TYPE_3__ {int left; int top; int width; int height; } ;
struct v4l2_clip {TYPE_1__ c; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,unsigned int) ;

void FUNC_1(struct zoran_fh *VAR_2, struct v4l2_clip *VAR_3, int VAR_4)
{
 struct zoran *VAR_5 = VAR_2->zr;
 unsigned VAR_6 = (VAR_1 + 31) / 32;
 u32 *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned VAR_12, VAR_13, VAR_14;
 u32 VAR_15;


 FUNC_0(VAR_2->overlay_mask, ~0, VAR_6 * 4 * VAR_0);
 VAR_15 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {

  VAR_8 = VAR_3[VAR_12].c.left;
  VAR_9 = VAR_3[VAR_12].c.top;
  VAR_10 = VAR_3[VAR_12].c.width;
  VAR_11 = VAR_3[VAR_12].c.height;


  if (VAR_8 < 0) {
   VAR_10 += VAR_8;
   VAR_8 = 0;
  }
  if (VAR_9 < 0) {
   VAR_11 += VAR_9;
   VAR_9 = 0;
  }
  if (VAR_8 + VAR_10 > VAR_2->overlay_settings.width) {
   VAR_10 = VAR_2->overlay_settings.width - VAR_8;
  }
  if (VAR_9 + VAR_11 > VAR_2->overlay_settings.height) {
   VAR_11 = VAR_2->overlay_settings.height - VAR_9;
  }


  if (VAR_11 <= 0) {
   continue;
  }
  if (VAR_10 <= 0) {
   continue;
  }


  for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {


   VAR_7 = VAR_2->overlay_mask + (VAR_9 + VAR_13) * VAR_6;
   for (VAR_14 = 0; VAR_14 < VAR_10; ++VAR_14) {
    VAR_7[(VAR_8 + VAR_14) / 32] &=
        ~((u32) 1 << (VAR_8 + VAR_14) % 32);
   }
  }
 }
}
