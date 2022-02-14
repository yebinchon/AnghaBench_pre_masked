
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_visible_origin; int vc_origin; int vc_size_row; int vc_scr_end; } ;


 int VAR_0 ;
 int FUNC_0 (struct vc_data*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct vc_data *VAR_3, int VAR_4)
{
 if (!VAR_4)
  VAR_3->vc_visible_origin = VAR_3->vc_origin;
 else {
  int VAR_5 = VAR_3->vc_size_row * 4;
  int VAR_6, VAR_7, VAR_8, VAR_9;

  if (VAR_0 >
      (VAR_3->vc_scr_end - VAR_1) + VAR_5) {
   VAR_6 = VAR_3->vc_scr_end - VAR_1;
   VAR_7 = VAR_0 + VAR_3->vc_size_row;
  } else {
   VAR_6 = 0;
   VAR_7 = VAR_2;
  }
  VAR_8 = (VAR_3->vc_visible_origin - VAR_1 - VAR_6 + VAR_7) % VAR_7 +
      VAR_4 * VAR_3->vc_size_row;
  VAR_9 = (VAR_3->vc_origin - VAR_1 - VAR_6 + VAR_7) % VAR_7;
  if (VAR_9 < 2 * VAR_5)
   VAR_5 = 0;
  if (VAR_8 < VAR_5)
   VAR_8 = 0;
  if (VAR_8 > VAR_9 - VAR_5)
   VAR_8 = VAR_9;
  VAR_3->vc_visible_origin = VAR_1 + (VAR_8 + VAR_6) % VAR_7;
 }
 FUNC_0(VAR_3);
 return 1;
}
