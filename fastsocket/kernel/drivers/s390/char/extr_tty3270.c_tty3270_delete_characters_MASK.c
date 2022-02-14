
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270_line {int len; int * cells; } ;
struct tty3270 {int cy; int cx; struct tty3270_line* screen; } ;



__attribute__((used)) static void
FUNC_0(struct tty3270 *VAR_0, int VAR_1)
{
 struct tty3270_line *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->screen + VAR_0->cy;
 if (VAR_2->len <= VAR_0->cx)
  return;
 if (VAR_2->len - VAR_0->cx <= VAR_1) {
  VAR_2->len = VAR_0->cx;
  return;
 }
 for (VAR_3 = VAR_0->cx; VAR_3 + VAR_1 < VAR_2->len; VAR_3++)
  VAR_2->cells[VAR_3] = VAR_2->cells[VAR_3 + VAR_1];
 VAR_2->len -= VAR_1;
}
