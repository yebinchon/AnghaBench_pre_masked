
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int height; } ;
struct vc_data {int vc_rows; TYPE_3__ vc_font; } ;
struct fbcon_ops {int rotate; } ;
struct TYPE_5__ {int xres_virtual; int yres_virtual; int xres; int yres; } ;
struct TYPE_4__ {int ywrapstep; int xpanstep; int ypanstep; } ;
struct fb_info {int flags; TYPE_2__ var; TYPE_1__ fix; struct fbcon_ops* fbcon_par; } ;
struct display {int vrows; void* scrollmode; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct display *VAR_11,
     struct fb_info *VAR_12,
     struct vc_data *VAR_13)
{
 struct fbcon_ops *VAR_14 = VAR_12->fbcon_par;
 int VAR_15 = VAR_13->vc_font.height;
 int VAR_16 = VAR_12->flags;
 u16 VAR_17 = 0;
 int VAR_18 = FUNC_0(VAR_14->rotate, VAR_12->fix.ypanstep,
      VAR_12->fix.xpanstep);
 int VAR_19 = FUNC_0(VAR_14->rotate, VAR_12->fix.ywrapstep, VAR_17);
 int VAR_20 = FUNC_0(VAR_14->rotate, VAR_12->var.yres, VAR_12->var.xres);
 int VAR_21 = FUNC_0(VAR_14->rotate, VAR_12->var.yres_virtual,
       VAR_12->var.xres_virtual);
 int VAR_22 = (VAR_16 & VAR_3) &&
  FUNC_1(VAR_18, VAR_13->vc_font.height) && VAR_21 > VAR_20;
 int VAR_23 = (VAR_16 & VAR_4) &&
  FUNC_1(VAR_19, VAR_13->vc_font.height) &&
  FUNC_1(VAR_13->vc_font.height, VAR_21) &&
  FUNC_1(VAR_13->vc_font.height, VAR_20);
 int VAR_24 = VAR_16 & VAR_5;
 int VAR_25 = (VAR_16 & VAR_0) &&
  !(VAR_16 & VAR_1);
 int VAR_26 = (VAR_16 & VAR_2) &&
  !(VAR_16 & VAR_1);

 VAR_11->vrows = VAR_21/VAR_15;
 if (VAR_20 > (VAR_15 * (VAR_13->vc_rows + 1)))
  VAR_11->vrows -= (VAR_20 - (VAR_15 * VAR_13->vc_rows)) / VAR_15;
 if ((VAR_20 % VAR_15) && (VAR_21 % VAR_15 < VAR_20 % VAR_15))
  VAR_11->vrows--;

 if (VAR_23 || VAR_22) {
  if (VAR_24 || VAR_25)
   VAR_11->scrollmode = VAR_23 ?
    VAR_10 : VAR_7;
  else
   VAR_11->scrollmode = VAR_23 ? VAR_9 :
    VAR_8;
 } else {
  if (VAR_24 || (VAR_25 && !VAR_26))
   VAR_11->scrollmode = VAR_6;
  else
   VAR_11->scrollmode = VAR_9;
 }
}
