
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_cols; int vc_size_row; scalar_t__ vc_origin; } ;
struct fbcon_ops {int (* bmove ) (struct vc_data*,struct fb_info*,int,int,int,int,int,int) ;} ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;
struct display {int dummy; } ;


 unsigned short* FUNC_0 (unsigned short*,int) ;
 int FUNC_1 () ;
 unsigned short FUNC_2 (unsigned short*) ;
 int FUNC_3 (unsigned short,unsigned short*) ;
 int FUNC_4 (struct vc_data*,struct fb_info*,int,int,int,int,int,int) ;
 int FUNC_5 (struct vc_data*,struct fb_info*,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct vc_data *VAR_0, struct fb_info *VAR_1,
   struct display *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_5 * VAR_0->vc_cols;
 unsigned short *VAR_7 = (unsigned short *)
     (VAR_0->vc_origin + VAR_0->vc_size_row * VAR_3);
 unsigned short *VAR_8 = VAR_7 + VAR_6;
 struct fbcon_ops *VAR_9 = VAR_1->fbcon_par;

 while (VAR_4--) {
  unsigned short *VAR_10 = VAR_8;
  unsigned short *VAR_11 = FUNC_0(VAR_8, 1);
  unsigned short VAR_12;
  int VAR_13 = 0;

  do {
   VAR_12 = FUNC_2(VAR_8);

   if (VAR_12 == FUNC_2(VAR_7)) {
    if (VAR_8 > VAR_10) {
     VAR_9->bmove(VAR_0, VAR_1, VAR_3 + VAR_5, VAR_13,
         VAR_3, VAR_13, 1, VAR_8-VAR_10);
     VAR_13 += VAR_8 - VAR_10 + 1;
     VAR_10 = VAR_8 + 1;
    } else {
     VAR_13++;
     VAR_10++;
    }
   }

   FUNC_3(VAR_12, VAR_7);
   FUNC_1();
   VAR_8++;
   VAR_7++;
  } while (VAR_8 < VAR_11);
  if (VAR_8 > VAR_10)
   VAR_9->bmove(VAR_0, VAR_1, VAR_3 + VAR_5, VAR_13, VAR_3, VAR_13, 1,
       VAR_8-VAR_10);
  FUNC_1();
  if (VAR_5 > 0)
   VAR_3++;
  else {
   VAR_3--;

   VAR_8 -= VAR_0->vc_size_row;
   VAR_7 -= VAR_0->vc_size_row;
  }
 }
}
