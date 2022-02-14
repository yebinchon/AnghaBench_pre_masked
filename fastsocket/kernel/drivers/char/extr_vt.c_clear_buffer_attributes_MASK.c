
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_screenbuf_size; int vc_hi_font_mask; int vc_video_erase_char; scalar_t__ vc_origin; } ;


 int FUNC_0 (unsigned short*) ;
 int FUNC_1 (int,unsigned short*) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_0)
{
 unsigned short *VAR_1 = (unsigned short *)VAR_0->vc_origin;
 int VAR_2 = VAR_0->vc_screenbuf_size / 2;
 int VAR_3 = VAR_0->vc_hi_font_mask | 0xff;

 for (; VAR_2 > 0; VAR_2--, VAR_1++) {
  FUNC_1((FUNC_0(VAR_1)&VAR_3) | (VAR_0->vc_video_erase_char & ~VAR_3), VAR_1);
 }
}
