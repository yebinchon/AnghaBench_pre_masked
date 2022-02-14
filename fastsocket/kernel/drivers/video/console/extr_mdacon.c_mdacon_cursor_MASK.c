
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_y; int vc_x; int vc_cursor_type; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_2 - 1);
  return;
 }

 FUNC_0(VAR_3->vc_y*VAR_1*2 + VAR_3->vc_x*2);

 switch (VAR_3->vc_cursor_type & 0x0f) {

  case 130: FUNC_1(10, 13); break;
  case 131: FUNC_1(7, 13); break;
  case 128: FUNC_1(4, 13); break;
  case 132: FUNC_1(1, 13); break;
  case 129: FUNC_1(14, 13); break;
  default: FUNC_1(12, 13); break;
 }
}
