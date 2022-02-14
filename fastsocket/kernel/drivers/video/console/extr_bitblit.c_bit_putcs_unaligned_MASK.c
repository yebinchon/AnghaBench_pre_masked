
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int width; int * data; } ;
struct vc_data {TYPE_1__ vc_font; scalar_t__ vc_hi_font_mask; } ;
struct fb_info {TYPE_2__* fbops; } ;
struct fb_image {int height; } ;
struct TYPE_4__ {int (* fb_imageblit ) (struct fb_info*,struct fb_image*) ;} ;


 int FUNC_0 (int *,int,int *,int,int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fb_info*,struct fb_image*) ;
 int FUNC_3 (int *,int *,int,struct vc_data*) ;

__attribute__((used)) static inline void FUNC_4(struct vc_data *VAR_0,
           struct fb_info *VAR_1, const u16 *VAR_2,
           u32 VAR_3, u32 VAR_4, u32 VAR_5,
           u32 VAR_6, u32 VAR_7,
           struct fb_image *VAR_8, u8 *VAR_9,
           u8 *VAR_10)
{
 u16 VAR_11 = VAR_0->vc_hi_font_mask ? 0x1ff : 0xff;
 u32 VAR_12 = 0, VAR_13 = VAR_0->vc_font.width % 8;
 u32 VAR_14 = 8;
 u32 VAR_15 = VAR_0->vc_font.width >> 3;
 u8 *VAR_16;

 while (VAR_4--) {
  VAR_16 = VAR_0->vc_font.data + (FUNC_1(VAR_2++)&
       VAR_11)*VAR_7;

  if (VAR_3) {
   FUNC_3(VAR_9, VAR_16, VAR_3, VAR_0);
   VAR_16 = VAR_9;
  }

  FUNC_0(VAR_10, VAR_5, VAR_16, VAR_15,
     VAR_8->height, VAR_14,
     VAR_12, VAR_13);
  VAR_12 += VAR_13;
  VAR_10 += (VAR_12 >= 8) ? VAR_6 : VAR_6 - 1;
  VAR_12 &= 7;
  VAR_14 = 8 - VAR_12;
 }

 VAR_1->fbops->fb_imageblit(VAR_1, VAR_8);

}
