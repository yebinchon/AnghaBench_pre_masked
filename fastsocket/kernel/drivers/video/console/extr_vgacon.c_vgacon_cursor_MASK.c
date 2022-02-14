
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; } ;
struct vc_data {scalar_t__ vc_mode; int vc_pos; int vc_cursor_type; TYPE_1__ vc_font; int vc_x; } ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_4, int VAR_5)
{
 if (VAR_4->vc_mode != VAR_0)
  return;

 FUNC_0(VAR_4);

 switch (VAR_5) {
 case 134:
  FUNC_2(14, (VAR_4->vc_pos - VAR_3) / 2);
         if (VAR_2 >= VAR_1)
   FUNC_1(VAR_4->vc_x, 31, 30);
  else
   FUNC_1(VAR_4->vc_x, 31, 31);
  break;

 case 133:
 case 135:
  FUNC_2(14, (VAR_4->vc_pos - VAR_3) / 2);
  switch (VAR_4->vc_cursor_type & 0x0f) {
  case 128:
   FUNC_1(VAR_4->vc_x,
            VAR_4->vc_font.height -
            (VAR_4->vc_font.height <
      10 ? 2 : 3),
            VAR_4->vc_font.height -
            (VAR_4->vc_font.height <
      10 ? 1 : 2));
   break;
  case 129:
   FUNC_1(VAR_4->vc_x,
            VAR_4->vc_font.height / 3,
            VAR_4->vc_font.height -
            (VAR_4->vc_font.height <
      10 ? 1 : 2));
   break;
  case 131:
   FUNC_1(VAR_4->vc_x,
            (VAR_4->vc_font.height * 2) / 3,
            VAR_4->vc_font.height -
            (VAR_4->vc_font.height <
      10 ? 1 : 2));
   break;
  case 132:
   FUNC_1(VAR_4->vc_x,
            VAR_4->vc_font.height / 2,
            VAR_4->vc_font.height -
            (VAR_4->vc_font.height <
      10 ? 1 : 2));
   break;
  case 130:
   if (VAR_2 >= VAR_1)
    FUNC_1(VAR_4->vc_x, 31, 30);
   else
    FUNC_1(VAR_4->vc_x, 31, 31);
   break;
  default:
   FUNC_1(VAR_4->vc_x, 1,
            VAR_4->vc_font.height);
   break;
  }
  break;
 }
}
