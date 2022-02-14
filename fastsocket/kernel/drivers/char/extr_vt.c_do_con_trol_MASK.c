
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_pos; int vc_x; int* vc_tab_stop; int vc_charset; int vc_disp_ctrl; int vc_state; size_t vc_npar; int* vc_par; int* vc_palette; int vc_ques; int vc_cursor_type; int vc_complement_mask; int vc_s_complement_mask; int vc_y; int vc_rows; int vc_bottom; int vc_utf; int vc_video_erase_char; int vc_screenbuf_size; void* vc_G1_charset; void* vc_translate; void* vc_G0_charset; int vc_origin; int vc_top; scalar_t__ vc_num; int vc_cols; int vc_bell_duration; int vc_bell_pitch; } ;
struct tty_struct {int dummy; } ;


 int VAR_0 ;






 void* VAR_1 ;





 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vc_data*,int ) ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (struct vc_data*,int) ;
 int FUNC_5 (struct vc_data*,int) ;
 int FUNC_6 (struct vc_data*,int) ;
 int FUNC_7 (struct vc_data*,int) ;
 int FUNC_8 (struct vc_data*,int) ;
 int FUNC_9 (struct vc_data*,int) ;
 int FUNC_10 (struct vc_data*,int) ;
 int FUNC_11 (struct vc_data*) ;
 int FUNC_12 (struct vc_data*,struct tty_struct*) ;
 int FUNC_13 (struct vc_data*) ;
 int FUNC_14 (struct vc_data*,int ,int) ;
 int FUNC_15 (struct vc_data*,int,int) ;
 int FUNC_16 (struct vc_data*,int,int) ;
 int FUNC_17 (struct vc_data*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct vc_data*) ;
 int VAR_9 ;
 int FUNC_20 (struct vc_data*,char) ;
 int FUNC_21 (struct vc_data*) ;
 int FUNC_22 (struct vc_data*,int) ;
 int FUNC_23 (struct tty_struct*) ;
 int FUNC_24 (struct vc_data*) ;
 int FUNC_25 (struct vc_data*) ;
 int FUNC_26 (struct vc_data*) ;
 int FUNC_27 (struct vc_data*,int ) ;
 int FUNC_28 (struct vc_data*,int) ;
 int FUNC_29 (struct vc_data*) ;
 void* FUNC_30 (void*,struct vc_data*) ;
 int FUNC_31 (scalar_t__,int) ;
 int FUNC_32 (struct vc_data*) ;
 int FUNC_33 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_34(struct tty_struct *VAR_10, struct vc_data *VAR_11, int VAR_12)
{




 switch (VAR_12) {
 case 0:
  return;
 case 7:
  if (VAR_11->vc_bell_duration)
   FUNC_18(VAR_11->vc_bell_pitch, VAR_11->vc_bell_duration);
  return;
 case 8:
  FUNC_0(VAR_11);
  return;
 case 9:
  VAR_11->vc_pos -= (VAR_11->vc_x << 1);
  while (VAR_11->vc_x < VAR_11->vc_cols - 1) {
   VAR_11->vc_x++;
   if (VAR_11->vc_tab_stop[VAR_11->vc_x >> 5] & (1 << (VAR_11->vc_x & 31)))
    break;
  }
  VAR_11->vc_pos += (VAR_11->vc_x << 1);
  FUNC_20(VAR_11, '\t');
  return;
 case 10: case 11: case 12:
  FUNC_19(VAR_11);
  if (!FUNC_17(VAR_11, VAR_9))
   return;
 case 13:
  FUNC_3(VAR_11);
  return;
 case 14:
  VAR_11->vc_charset = 1;
  VAR_11->vc_translate = FUNC_30(VAR_11->vc_G1_charset, VAR_11);
  VAR_11->vc_disp_ctrl = 1;
  return;
 case 15:
  VAR_11->vc_charset = 0;
  VAR_11->vc_translate = FUNC_30(VAR_11->vc_G0_charset, VAR_11);
  VAR_11->vc_disp_ctrl = 0;
  return;
 case 24: case 26:
  VAR_11->vc_state = VAR_1;
  return;
 case 27:
  VAR_11->vc_state = 138;
  return;
 case 127:
  FUNC_13(VAR_11);
  return;
 case 128+27:
  VAR_11->vc_state = 128;
  return;
 }
 switch(VAR_11->vc_state) {
 case 138:
  VAR_11->vc_state = VAR_1;
  switch (VAR_12) {
  case '[':
   VAR_11->vc_state = 128;
   return;
  case ']':
   VAR_11->vc_state = 133;
   return;
  case '%':
   VAR_11->vc_state = 131;
   return;
  case 'E':
   FUNC_3(VAR_11);
   FUNC_19(VAR_11);
   return;
  case 'M':
   FUNC_25(VAR_11);
   return;
  case 'D':
   FUNC_19(VAR_11);
   return;
  case 'H':
   VAR_11->vc_tab_stop[VAR_11->vc_x >> 5] |= (1 << (VAR_11->vc_x & 31));
   return;
  case 'Z':
   FUNC_23(VAR_10);
   return;
  case '7':
   FUNC_26(VAR_11);
   return;
  case '8':
   FUNC_24(VAR_11);
   return;
  case '(':
   VAR_11->vc_state = 130;
   return;
  case ')':
   VAR_11->vc_state = 129;
   return;
  case '#':
   VAR_11->vc_state = 134;
   return;
  case 'c':
   FUNC_22(VAR_11, 1);
   return;
  case '>':
   FUNC_2(VAR_11, VAR_8);
   return;
  case '=':
   FUNC_27(VAR_11, VAR_8);
   return;
  }
  return;
 case 133:
  if (VAR_12=='P') {
   for (VAR_11->vc_npar = 0; VAR_11->vc_npar < VAR_5; VAR_11->vc_npar++)
    VAR_11->vc_par[VAR_11->vc_npar] = 0;
   VAR_11->vc_npar = 0;
   VAR_11->vc_state = 132;
   return;
  } else if (VAR_12=='R') {
   FUNC_21(VAR_11);
   VAR_11->vc_state = VAR_1;
  } else
   VAR_11->vc_state = VAR_1;
  return;
 case 132:
  if ( (VAR_12>='0'&&VAR_12<='9') || (VAR_12>='A'&&VAR_12<='F') || (VAR_12>='a'&&VAR_12<='f') ) {
   VAR_11->vc_par[VAR_11->vc_npar++] = (VAR_12 > '9' ? (VAR_12 & 0xDF) - 'A' + 10 : VAR_12 - '0');
   if (VAR_11->vc_npar == 7) {
    int VAR_13 = VAR_11->vc_par[0] * 3, VAR_14 = 1;
    VAR_11->vc_palette[VAR_13] = 16 * VAR_11->vc_par[VAR_14++];
    VAR_11->vc_palette[VAR_13++] += VAR_11->vc_par[VAR_14++];
    VAR_11->vc_palette[VAR_13] = 16 * VAR_11->vc_par[VAR_14++];
    VAR_11->vc_palette[VAR_13++] += VAR_11->vc_par[VAR_14++];
    VAR_11->vc_palette[VAR_13] = 16 * VAR_11->vc_par[VAR_14++];
    VAR_11->vc_palette[VAR_13] += VAR_11->vc_par[VAR_14];
    FUNC_29(VAR_11);
    VAR_11->vc_state = VAR_1;
   }
  } else
   VAR_11->vc_state = VAR_1;
  return;
 case 128:
  for (VAR_11->vc_npar = 0; VAR_11->vc_npar < VAR_5; VAR_11->vc_npar++)
   VAR_11->vc_par[VAR_11->vc_npar] = 0;
  VAR_11->vc_npar = 0;
  VAR_11->vc_state = 136;
  if (VAR_12 == '[') {
   VAR_11->vc_state=137;
   return;
  }
  VAR_11->vc_ques = (VAR_12 == '?');
  if (VAR_11->vc_ques)
   return;
 case 136:
  if (VAR_12 == ';' && VAR_11->vc_npar < VAR_5 - 1) {
   VAR_11->vc_npar++;
   return;
  } else if (VAR_12>='0' && VAR_12<='9') {
   VAR_11->vc_par[VAR_11->vc_npar] *= 10;
   VAR_11->vc_par[VAR_11->vc_npar] += VAR_12 - '0';
   return;
  } else
   VAR_11->vc_state = 135;
 case 135:
  VAR_11->vc_state = VAR_1;
  switch(VAR_12) {
  case 'h':
   FUNC_28(VAR_11, 1);
   return;
  case 'l':
   FUNC_28(VAR_11, 0);
   return;
  case 'c':
   if (VAR_11->vc_ques) {
    if (VAR_11->vc_par[0])
     VAR_11->vc_cursor_type = VAR_11->vc_par[0] | (VAR_11->vc_par[1] << 8) | (VAR_11->vc_par[2] << 16);
    else
     VAR_11->vc_cursor_type = VAR_0;
    return;
   }
   break;
  case 'm':
   if (VAR_11->vc_ques) {
    FUNC_1();
    if (VAR_11->vc_par[0])
     VAR_11->vc_complement_mask = VAR_11->vc_par[0] << 8 | VAR_11->vc_par[1];
    else
     VAR_11->vc_complement_mask = VAR_11->vc_s_complement_mask;
    return;
   }
   break;
  case 'n':
   if (!VAR_11->vc_ques) {
    if (VAR_11->vc_par[0] == 5)
     FUNC_33(VAR_10);
    else if (VAR_11->vc_par[0] == 6)
     FUNC_12(VAR_11, VAR_10);
   }
   return;
  }
  if (VAR_11->vc_ques) {
   VAR_11->vc_ques = 0;
   return;
  }
  switch(VAR_12) {
  case 'G': case '`':
   if (VAR_11->vc_par[0])
    VAR_11->vc_par[0]--;
   FUNC_16(VAR_11, VAR_11->vc_par[0], VAR_11->vc_y);
   return;
  case 'A':
   if (!VAR_11->vc_par[0])
    VAR_11->vc_par[0]++;
   FUNC_16(VAR_11, VAR_11->vc_x, VAR_11->vc_y - VAR_11->vc_par[0]);
   return;
  case 'B': case 'e':
   if (!VAR_11->vc_par[0])
    VAR_11->vc_par[0]++;
   FUNC_16(VAR_11, VAR_11->vc_x, VAR_11->vc_y + VAR_11->vc_par[0]);
   return;
  case 'C': case 'a':
   if (!VAR_11->vc_par[0])
    VAR_11->vc_par[0]++;
   FUNC_16(VAR_11, VAR_11->vc_x + VAR_11->vc_par[0], VAR_11->vc_y);
   return;
  case 'D':
   if (!VAR_11->vc_par[0])
    VAR_11->vc_par[0]++;
   FUNC_16(VAR_11, VAR_11->vc_x - VAR_11->vc_par[0], VAR_11->vc_y);
   return;
  case 'E':
   if (!VAR_11->vc_par[0])
    VAR_11->vc_par[0]++;
   FUNC_16(VAR_11, 0, VAR_11->vc_y + VAR_11->vc_par[0]);
   return;
  case 'F':
   if (!VAR_11->vc_par[0])
    VAR_11->vc_par[0]++;
   FUNC_16(VAR_11, 0, VAR_11->vc_y - VAR_11->vc_par[0]);
   return;
  case 'd':
   if (VAR_11->vc_par[0])
    VAR_11->vc_par[0]--;
   FUNC_15(VAR_11, VAR_11->vc_x ,VAR_11->vc_par[0]);
   return;
  case 'H': case 'f':
   if (VAR_11->vc_par[0])
    VAR_11->vc_par[0]--;
   if (VAR_11->vc_par[1])
    VAR_11->vc_par[1]--;
   FUNC_15(VAR_11, VAR_11->vc_par[1], VAR_11->vc_par[0]);
   return;
  case 'J':
   FUNC_4(VAR_11, VAR_11->vc_par[0]);
   return;
  case 'K':
   FUNC_5(VAR_11, VAR_11->vc_par[0]);
   return;
  case 'L':
   FUNC_6(VAR_11, VAR_11->vc_par[0]);
   return;
  case 'M':
   FUNC_7(VAR_11, VAR_11->vc_par[0]);
   return;
  case 'P':
   FUNC_8(VAR_11, VAR_11->vc_par[0]);
   return;
  case 'c':
   if (!VAR_11->vc_par[0])
    FUNC_23(VAR_10);
   return;
  case 'g':
   if (!VAR_11->vc_par[0])
    VAR_11->vc_tab_stop[VAR_11->vc_x >> 5] &= ~(1 << (VAR_11->vc_x & 31));
   else if (VAR_11->vc_par[0] == 3) {
    VAR_11->vc_tab_stop[0] =
     VAR_11->vc_tab_stop[1] =
     VAR_11->vc_tab_stop[2] =
     VAR_11->vc_tab_stop[3] =
     VAR_11->vc_tab_stop[4] =
     VAR_11->vc_tab_stop[5] =
     VAR_11->vc_tab_stop[6] =
     VAR_11->vc_tab_stop[7] = 0;
   }
   return;
  case 'm':
   FUNC_11(VAR_11);
   return;
  case 'q':

   if (VAR_11->vc_par[0] < 4)
    FUNC_31(VAR_7 + VAR_11->vc_num,
         (VAR_11->vc_par[0] < 3) ? VAR_11->vc_par[0] : 4);
   return;
  case 'r':
   if (!VAR_11->vc_par[0])
    VAR_11->vc_par[0]++;
   if (!VAR_11->vc_par[1])
    VAR_11->vc_par[1] = VAR_11->vc_rows;

   if (VAR_11->vc_par[0] < VAR_11->vc_par[1] &&
       VAR_11->vc_par[1] <= VAR_11->vc_rows) {
    VAR_11->vc_top = VAR_11->vc_par[0] - 1;
    VAR_11->vc_bottom = VAR_11->vc_par[1];
    FUNC_15(VAR_11, 0, 0);
   }
   return;
  case 's':
   FUNC_26(VAR_11);
   return;
  case 'u':
   FUNC_24(VAR_11);
   return;
  case 'X':
   FUNC_9(VAR_11, VAR_11->vc_par[0]);
   return;
  case '@':
   FUNC_10(VAR_11, VAR_11->vc_par[0]);
   return;
  case ']':
   FUNC_32(VAR_11);
   return;
  }
  return;
 case 131:
  VAR_11->vc_state = VAR_1;
  switch (VAR_12) {
  case '@':
   VAR_11->vc_utf = 0;
   return;
  case 'G':
  case '8':
   VAR_11->vc_utf = 1;
   return;
  }
  return;
 case 137:
  VAR_11->vc_state = VAR_1;
  return;
 case 134:
  VAR_11->vc_state = VAR_1;
  if (VAR_12 == '8') {

   VAR_11->vc_video_erase_char =
    (VAR_11->vc_video_erase_char & 0xff00) | 'E';
   FUNC_4(VAR_11, 2);
   VAR_11->vc_video_erase_char =
    (VAR_11->vc_video_erase_char & 0xff00) | ' ';
   FUNC_14(VAR_11, VAR_11->vc_origin, VAR_11->vc_screenbuf_size / 2);
  }
  return;
 case 130:
  if (VAR_12 == '0')
   VAR_11->vc_G0_charset = VAR_2;
  else if (VAR_12 == 'B')
   VAR_11->vc_G0_charset = VAR_4;
  else if (VAR_12 == 'U')
   VAR_11->vc_G0_charset = VAR_3;
  else if (VAR_12 == 'K')
   VAR_11->vc_G0_charset = VAR_6;
  if (VAR_11->vc_charset == 0)
   VAR_11->vc_translate = FUNC_30(VAR_11->vc_G0_charset, VAR_11);
  VAR_11->vc_state = VAR_1;
  return;
 case 129:
  if (VAR_12 == '0')
   VAR_11->vc_G1_charset = VAR_2;
  else if (VAR_12 == 'B')
   VAR_11->vc_G1_charset = VAR_4;
  else if (VAR_12 == 'U')
   VAR_11->vc_G1_charset = VAR_3;
  else if (VAR_12 == 'K')
   VAR_11->vc_G1_charset = VAR_6;
  if (VAR_11->vc_charset == 1)
   VAR_11->vc_translate = FUNC_30(VAR_11->vc_G1_charset, VAR_11);
  VAR_11->vc_state = VAR_1;
  return;
 default:
  VAR_11->vc_state = VAR_1;
 }
}
