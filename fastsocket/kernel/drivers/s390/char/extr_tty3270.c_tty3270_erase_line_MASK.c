
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270_line {int len; struct tty3270_cell* cells; } ;
struct tty3270_cell {char character; int f_color; int highlight; } ;
struct tty3270 {int cy; int cx; struct tty3270_line* screen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty3270*,int) ;

__attribute__((used)) static void
FUNC_1(struct tty3270 *VAR_2, int VAR_3)
{
 struct tty3270_line *VAR_4;
 struct tty3270_cell *VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->screen + VAR_2->cy;
 if (VAR_3 == 0)
  VAR_4->len = VAR_2->cx;
 else if (VAR_3 == 1) {
  for (VAR_6 = 0; VAR_6 < VAR_2->cx; VAR_6++) {
   VAR_5 = VAR_4->cells + VAR_6;
   VAR_5->character = ' ';
   VAR_5->highlight = VAR_1;
   VAR_5->f_color = VAR_0;
  }
  if (VAR_4->len <= VAR_2->cx)
   VAR_4->len = VAR_2->cx + 1;
 } else if (VAR_3 == 2)
  VAR_4->len = 0;
 FUNC_0(VAR_2, VAR_2->cy);
}
