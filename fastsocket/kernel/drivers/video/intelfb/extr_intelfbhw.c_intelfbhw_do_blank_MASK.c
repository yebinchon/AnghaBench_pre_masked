
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intelfb_info {int cursor_on; int cursor_blanked; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 struct intelfb_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct intelfb_info*) ;
 int FUNC_5 (struct intelfb_info*) ;

void FUNC_6(int VAR_9, struct fb_info *VAR_10)
{
 struct intelfb_info *VAR_11 = FUNC_1(VAR_10);
 u32 VAR_12;






 VAR_12 = FUNC_2(VAR_8);
 if (VAR_9)
  VAR_12 &= ~VAR_6;
 else
  VAR_12 |= VAR_6;
 FUNC_3(VAR_8, VAR_12);

 VAR_12 = FUNC_2(VAR_7);
 FUNC_3(VAR_7, VAR_12);





 if (VAR_11->cursor_on) {
  if (VAR_9)
   FUNC_4(VAR_11);
  else
   FUNC_5(VAR_11);
  VAR_11->cursor_on = 1;
 }
 VAR_11->cursor_blanked = VAR_9;


 VAR_12 = FUNC_2(VAR_0) & ~VAR_1;
 switch (VAR_9) {
 case 129:
 case 131:
  VAR_12 |= VAR_2;
  break;
 case 128:
  VAR_12 |= VAR_3;
  break;
 case 132:
  VAR_12 |= VAR_4;
  break;
 case 130:
  VAR_12 |= VAR_5;
  break;
 }
 FUNC_3(VAR_0, VAR_12);

 return;
}
