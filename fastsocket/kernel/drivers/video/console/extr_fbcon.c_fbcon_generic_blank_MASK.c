
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned short vc_video_erase_char; int vc_cols; int vc_rows; scalar_t__ vc_hi_font_mask; } ;
struct fb_info {int dummy; } ;
struct fb_event {int* data; struct fb_info* info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct fb_event*) ;
 int FUNC_1 (struct vc_data*,int ,int ,int ,int ) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_1, struct fb_info *VAR_2,
    int VAR_3)
{
 struct fb_event VAR_4;

 if (VAR_3) {
  unsigned short VAR_5 = VAR_1->vc_hi_font_mask ?
   0x1ff : 0xff;
  unsigned short VAR_6;

  VAR_6 = VAR_1->vc_video_erase_char;
  VAR_1->vc_video_erase_char &= VAR_5;
  FUNC_1(VAR_1, 0, 0, VAR_1->vc_rows, VAR_1->vc_cols);
  VAR_1->vc_video_erase_char = VAR_6;
 }


 if (!FUNC_2(VAR_2))
  return;
 VAR_4.info = VAR_2;
 VAR_4.data = &VAR_3;
 FUNC_0(VAR_0, &VAR_4);
 FUNC_3(VAR_2);
}
