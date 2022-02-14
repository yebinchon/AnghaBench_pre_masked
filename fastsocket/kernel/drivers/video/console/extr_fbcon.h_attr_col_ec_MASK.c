
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int vc_video_erase_char; scalar_t__ vc_can_do_color; } ;
struct TYPE_2__ {scalar_t__ visual; } ;
struct fb_info {TYPE_1__ fix; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct fb_info*) ;

__attribute__((used)) static inline int FUNC_4(int VAR_1, struct vc_data *VAR_2,
         struct fb_info *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 if (!VAR_2)
  return 0;

 if (VAR_2->vc_can_do_color)
  return VAR_4 ? FUNC_1(VAR_1,VAR_2->vc_video_erase_char)
   : FUNC_0(VAR_1,VAR_2->vc_video_erase_char);

 if (!VAR_3)
  return 0;

 VAR_6 = FUNC_3(VAR_3);
 VAR_5 = VAR_3->fix.visual == VAR_0;

 if (FUNC_2(VAR_2->vc_video_erase_char)) {
  VAR_7 = VAR_5 ? VAR_6 : 0;
  VAR_8 = VAR_5 ? 0 : VAR_6;
 }
 else {
  VAR_7 = VAR_5 ? 0 : VAR_6;
  VAR_8 = VAR_5 ? VAR_6 : 0;
 }

 return VAR_4 ? VAR_7 : VAR_8;
}
