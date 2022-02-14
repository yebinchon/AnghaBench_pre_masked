
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct savagefb_par {int (* SavageWaitFifo ) (struct savagefb_par*,int) ;scalar_t__ bci_ptr; } ;
struct TYPE_2__ {scalar_t__ visual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_1__ fix; struct savagefb_par* par; } ;
struct fb_fillrect {int color; size_t rop; int height; int width; int dy; int dx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int FUNC_4 (struct savagefb_par*,int) ;

void FUNC_5(struct fb_info *VAR_8, const struct fb_fillrect *VAR_9)
{
 struct savagefb_par *VAR_10 = VAR_8->par;
 int VAR_11, VAR_12;

 if (!VAR_9->width || !VAR_9->height)
  return;

 if (VAR_8->fix.visual == VAR_6)
  VAR_12 = VAR_9->color;
 else
  VAR_12 = ((u32 *)VAR_8->pseudo_palette)[VAR_9->color];

 VAR_11 = VAR_1 | VAR_2 | VAR_3 |
       VAR_0 | VAR_5 |
       VAR_4;

 VAR_10->bci_ptr = 0;
 FUNC_0(VAR_11, VAR_7[VAR_9->rop]);

 VAR_10->SavageWaitFifo(VAR_10,4);
 FUNC_1(VAR_11);
 FUNC_1(VAR_12);
 FUNC_1( FUNC_3(VAR_9->dx, VAR_9->dy) );
 FUNC_1( FUNC_2(VAR_9->width, VAR_9->height) );
}
