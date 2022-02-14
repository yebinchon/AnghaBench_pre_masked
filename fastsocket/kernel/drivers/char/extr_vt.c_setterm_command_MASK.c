
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int* vc_par; int vc_def_color; int vc_attr; int vc_hi_font_mask; int vc_npar; int vc_bell_pitch; int vc_bell_duration; int vc_intensity; void* vc_halfcolor; int vc_can_do_color; int vc_underline; void* vc_ulcolor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void** VAR_4 ;
 int FUNC_0 (struct vc_data*) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct vc_data *VAR_7)
{
 switch(VAR_7->vc_par[0]) {
  case 1:
   if (VAR_7->vc_can_do_color &&
     VAR_7->vc_par[1] < 16) {
    VAR_7->vc_ulcolor = VAR_4[VAR_7->vc_par[1]];
    if (VAR_7->vc_underline)
     FUNC_3(VAR_7);
   }
   break;
  case 2:
   if (VAR_7->vc_can_do_color &&
     VAR_7->vc_par[1] < 16) {
    VAR_7->vc_halfcolor = VAR_4[VAR_7->vc_par[1]];
    if (VAR_7->vc_intensity == 0)
     FUNC_3(VAR_7);
   }
   break;
  case 8:
   VAR_7->vc_def_color = VAR_7->vc_attr;
   if (VAR_7->vc_hi_font_mask == 0x100)
    VAR_7->vc_def_color >>= 1;
   FUNC_0(VAR_7);
   FUNC_3(VAR_7);
   break;
  case 9:
   VAR_3 = ((VAR_7->vc_par[1] < 60) ? VAR_7->vc_par[1] : 60) * 60;
   FUNC_1();
   break;
  case 10:
   if (VAR_7->vc_npar >= 1)
    VAR_7->vc_bell_pitch = VAR_7->vc_par[1];
   else
    VAR_7->vc_bell_pitch = VAR_1;
   break;
  case 11:
   if (VAR_7->vc_npar >= 1)
    VAR_7->vc_bell_duration = (VAR_7->vc_par[1] < 2000) ?
     VAR_7->vc_par[1] * VAR_2 / 1000 : 0;
   else
    VAR_7->vc_bell_duration = VAR_0;
   break;
  case 12:
   if (VAR_7->vc_par[1] >= 1 && FUNC_4(VAR_7->vc_par[1] - 1))
    FUNC_2(VAR_7->vc_par[1] - 1);
   break;
  case 13:
   FUNC_1();
   break;
  case 14:
   VAR_6 = ((VAR_7->vc_par[1] < 60) ? VAR_7->vc_par[1] : 60) * 60 * VAR_2;
   break;
  case 15:
   FUNC_2(VAR_5);
   break;
 }
}
