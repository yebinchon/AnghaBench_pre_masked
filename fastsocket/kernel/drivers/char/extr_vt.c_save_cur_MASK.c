
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_G1_charset; int vc_saved_G1; int vc_G0_charset; int vc_saved_G0; int vc_color; int vc_s_color; int vc_charset; int vc_s_charset; int vc_reverse; int vc_s_reverse; int vc_blink; int vc_s_blink; int vc_underline; int vc_s_underline; int vc_italic; int vc_s_italic; int vc_intensity; int vc_s_intensity; int vc_y; int vc_saved_y; int vc_x; int vc_saved_x; } ;



__attribute__((used)) static void FUNC_0(struct vc_data *VAR_0)
{
 VAR_0->vc_saved_x = VAR_0->vc_x;
 VAR_0->vc_saved_y = VAR_0->vc_y;
 VAR_0->vc_s_intensity = VAR_0->vc_intensity;
 VAR_0->vc_s_italic = VAR_0->vc_italic;
 VAR_0->vc_s_underline = VAR_0->vc_underline;
 VAR_0->vc_s_blink = VAR_0->vc_blink;
 VAR_0->vc_s_reverse = VAR_0->vc_reverse;
 VAR_0->vc_s_charset = VAR_0->vc_charset;
 VAR_0->vc_s_color = VAR_0->vc_color;
 VAR_0->vc_saved_G0 = VAR_0->vc_G0_charset;
 VAR_0->vc_saved_G1 = VAR_0->vc_G1_charset;
}
