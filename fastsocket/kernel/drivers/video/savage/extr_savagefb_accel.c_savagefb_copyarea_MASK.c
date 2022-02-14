
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {int (* SavageWaitFifo ) (struct savagefb_par*,int) ;scalar_t__ bci_ptr; } ;
struct fb_info {struct savagefb_par* par; } ;
struct fb_copyarea {int sx; int dx; int sy; int dy; int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int * VAR_5 ;
 int FUNC_4 (struct savagefb_par*,int) ;

void FUNC_5(struct fb_info *VAR_6, const struct fb_copyarea *VAR_7)
{
 struct savagefb_par *VAR_8 = VAR_6->par;
 int VAR_9 = VAR_7->sx, VAR_10 = VAR_7->dx;
 int VAR_11 = VAR_7->sy, VAR_12 = VAR_7->dy;
 int VAR_13;

 if (!VAR_7->width || !VAR_7->height)
  return;
 VAR_8->bci_ptr = 0;
 VAR_13 = VAR_1 | VAR_0 | VAR_4;
 FUNC_0(VAR_13, VAR_5[0]);

 if (VAR_10 <= VAR_9) {
  VAR_13 |= VAR_2;
 } else {
  VAR_9 += VAR_7->width - 1;
  VAR_10 += VAR_7->width - 1;
 }

 if (VAR_12 <= VAR_11) {
  VAR_13 |= VAR_3;
 } else {
  VAR_11 += VAR_7->height - 1;
  VAR_12 += VAR_7->height - 1;
 }

 VAR_8->SavageWaitFifo(VAR_8,4);
 FUNC_1(VAR_13);
 FUNC_1(FUNC_3(VAR_9, VAR_11));
 FUNC_1(FUNC_3(VAR_10, VAR_12));
 FUNC_1(FUNC_2(VAR_7->width, VAR_7->height));
}
