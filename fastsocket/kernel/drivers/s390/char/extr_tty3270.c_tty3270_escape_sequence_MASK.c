
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270 {int esc_state; int saved_cx; int cx; int saved_cy; int cy; int* esc_par; int esc_npar; int esc_ques; int saved_f_color; int f_color; int saved_highlight; int highlight; int tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (char*,char*,int,int) ;
 int FUNC_3 (struct tty3270*,int) ;
 int FUNC_4 (struct tty3270*) ;
 int FUNC_5 (struct tty3270*,int) ;
 int FUNC_6 (struct tty3270*,int) ;
 int FUNC_7 (struct tty3270*,int) ;
 int FUNC_8 (struct tty3270*,int) ;
 int FUNC_9 (struct tty3270*,int) ;
 int FUNC_10 (struct tty3270*,int,int) ;
 int FUNC_11 (struct tty3270*,int) ;
 int FUNC_12 (struct tty3270*) ;
 int FUNC_13 (struct tty3270*) ;
 int FUNC_14 (struct tty3270*) ;

__attribute__((used)) static void
FUNC_15(struct tty3270 *VAR_3, char VAR_4)
{
 enum { ESnormal, ESesc, ESsquare, ESgetpars };

 if (VAR_3->esc_state == ESnormal) {
  if (VAR_4 == 0x1b)

   VAR_3->esc_state = ESesc;
  return;
 }
 if (VAR_3->esc_state == ESesc) {
  VAR_3->esc_state = ESnormal;
  switch (VAR_4) {
  case '[':
   VAR_3->esc_state = ESsquare;
   break;
  case 'E':
   FUNC_4(VAR_3);
   FUNC_12(VAR_3);
   break;
  case 'M':
   FUNC_13(VAR_3);
   break;
  case 'D':
   FUNC_12(VAR_3);
   break;
  case 'Z':
   FUNC_0(VAR_3->tty, "\033[?6c");
   break;
  case '7':
   VAR_3->saved_cx = VAR_3->cx;
   VAR_3->saved_cy = VAR_3->cy;
   VAR_3->saved_highlight = VAR_3->highlight;
   VAR_3->saved_f_color = VAR_3->f_color;
   break;
  case '8':
   FUNC_3(VAR_3, VAR_3->cy);
   FUNC_10(VAR_3, VAR_3->saved_cx, VAR_3->saved_cy);
   VAR_3->highlight = VAR_3->saved_highlight;
   VAR_3->f_color = VAR_3->saved_f_color;
   break;
  case 'c':
   VAR_3->cx = VAR_3->saved_cx = 0;
   VAR_3->cy = VAR_3->saved_cy = 0;
   VAR_3->highlight = VAR_3->saved_highlight = VAR_2;
   VAR_3->f_color = VAR_3->saved_f_color = VAR_1;
   FUNC_7(VAR_3, 2);
   break;
  }
  return;
 }
 if (VAR_3->esc_state == ESsquare) {
  VAR_3->esc_state = ESgetpars;
  FUNC_1(VAR_3->esc_par, 0, sizeof(VAR_3->esc_par));
  VAR_3->esc_npar = 0;
  VAR_3->esc_ques = (VAR_4 == '?');
  if (VAR_3->esc_ques)
   return;
 }
 if (VAR_3->esc_state == ESgetpars) {
  if (VAR_4 == ';' && VAR_3->esc_npar < VAR_0 - 1) {
   VAR_3->esc_npar++;
   return;
  }
  if (VAR_4 >= '0' && VAR_4 <= '9') {
   VAR_3->esc_par[VAR_3->esc_npar] *= 10;
   VAR_3->esc_par[VAR_3->esc_npar] += VAR_4 - '0';
   return;
  }
 }
 VAR_3->esc_state = ESnormal;
 if (VAR_4 == 'n' && !VAR_3->esc_ques) {
  if (VAR_3->esc_par[0] == 5)
   FUNC_0(VAR_3->tty, "\033[0n");
  else if (VAR_3->esc_par[0] == 6) {
   char VAR_5[40];
   FUNC_2(VAR_5, "\033[%d;%dR", VAR_3->cy + 1, VAR_3->cx + 1);
   FUNC_0(VAR_3->tty, VAR_5);
  }
  return;
 }
 if (VAR_3->esc_ques)
  return;
 switch (VAR_4) {
 case 'm':
  FUNC_14(VAR_3);
  break;
 case 'H':
 case 'f':
  FUNC_10(VAR_3, FUNC_9(VAR_3, 1) - 1,
    FUNC_9(VAR_3, 0) - 1);
  break;
 case 'd':
  FUNC_10(VAR_3, VAR_3->cx, FUNC_9(VAR_3, 0) - 1);
  break;
 case 'A':
 case 'F':
  FUNC_10(VAR_3, VAR_3->cx, VAR_3->cy - FUNC_9(VAR_3, 0));
  break;
 case 'B':
 case 'e':
 case 'E':
  FUNC_10(VAR_3, VAR_3->cx, VAR_3->cy + FUNC_9(VAR_3, 0));
  break;
 case 'C':
 case 'a':
  FUNC_10(VAR_3, VAR_3->cx + FUNC_9(VAR_3, 0), VAR_3->cy);
  break;
 case 'D':
  FUNC_10(VAR_3, VAR_3->cx - FUNC_9(VAR_3, 0), VAR_3->cy);
  break;
 case 'G':
 case '`':
  FUNC_10(VAR_3, FUNC_9(VAR_3, 0), VAR_3->cy);
  break;
 case 'X':
  FUNC_6(VAR_3, FUNC_9(VAR_3, 0));
  break;
 case 'J':
  FUNC_7(VAR_3, VAR_3->esc_par[0]);
  break;
 case 'K':
  FUNC_8(VAR_3, VAR_3->esc_par[0]);
  break;
 case 'P':
  FUNC_5(VAR_3, FUNC_9(VAR_3, 0));
  break;
 case '@':
  FUNC_11(VAR_3, FUNC_9(VAR_3, 0));
  break;
 case 's':
  VAR_3->saved_cx = VAR_3->cx;
  VAR_3->saved_cy = VAR_3->cy;
  VAR_3->saved_highlight = VAR_3->highlight;
  VAR_3->saved_f_color = VAR_3->f_color;
  break;
 case 'u':
  FUNC_3(VAR_3, VAR_3->cy);
  FUNC_10(VAR_3, VAR_3->saved_cx, VAR_3->saved_cy);
  VAR_3->highlight = VAR_3->saved_highlight;
  VAR_3->f_color = VAR_3->saved_f_color;
  break;
 }
}
