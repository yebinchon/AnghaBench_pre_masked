
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270 {int esc_npar; int* esc_par; unsigned char f_color; void* highlight; } ;







 unsigned char VAR_0 ;



 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct tty3270 *VAR_5)
{
 static unsigned char VAR_6[] = {
  134, 131, 133, 128, 135,
  132, 130, 129, 0, 134
 };
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 <= VAR_5->esc_npar; VAR_7++) {
  VAR_8 = VAR_5->esc_par[VAR_7];
  switch (VAR_8) {
  case 0:
   VAR_5->highlight = VAR_2;
   VAR_5->f_color = VAR_0;
   break;

  case 4:
   VAR_5->highlight = VAR_4;
   break;
  case 5:
   VAR_5->highlight = VAR_1;
   break;
  case 7:
   VAR_5->highlight = VAR_3;
   break;
  case 24:
   if (VAR_5->highlight == VAR_4)
    VAR_5->highlight = VAR_2;
   break;
  case 25:
   if (VAR_5->highlight == VAR_1)
    VAR_5->highlight = VAR_2;
   break;
  case 27:
   if (VAR_5->highlight == VAR_3)
    VAR_5->highlight = VAR_2;
   break;

  case 30:
  case 31:
  case 32:
  case 33:
  case 34:
  case 35:
  case 36:
  case 37:
  case 39:
   VAR_5->f_color = VAR_6[VAR_8 - 30];
   break;
  }
 }
}
