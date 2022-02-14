
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int (* fb_check_var ) (TYPE_3__*,struct fb_info*) ;int * fb_cursor; } ;
struct sm501fb_par {TYPE_4__ ops; struct sm501fb_info* info; } ;
struct sm501fb_info {int dev; scalar_t__ regs; TYPE_1__* pdata; } ;
struct sm501_platdata_fbsub {int flags; int def_bpp; scalar_t__ def_mode; } ;
struct fb_ops {int dummy; } ;
struct TYPE_9__ {int bits_per_pixel; int yres; int yres_virtual; int xres; int xres_virtual; int vmode; scalar_t__ accel_flags; int activate; scalar_t__ nonstd; } ;
struct TYPE_8__ {int xpanstep; int ypanstep; int accel; scalar_t__ ywrapstep; scalar_t__ type_aux; int type; int id; } ;
struct fb_info {int flags; TYPE_3__ var; TYPE_4__* fbops; int cmap; TYPE_2__ fix; struct sm501fb_par* par; } ;
typedef enum sm501_controller { ____Placeholder_sm501_controller } sm501_controller ;
struct TYPE_7__ {scalar_t__ fb_route; struct sm501_platdata_fbsub* fb_pnl; struct sm501_platdata_fbsub* fb_crt; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned long VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_3__*,struct fb_info*,int *,int *,int ,int *,int) ;
 int FUNC_5 (int *,struct fb_info*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,int *,int) ;
 unsigned long FUNC_8 (scalar_t__) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (TYPE_3__*,struct fb_info*) ;
 int FUNC_11 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct fb_info *VAR_20,
      enum sm501_controller VAR_21,
      const char *VAR_22)
{
 struct sm501_platdata_fbsub *VAR_23;
 struct sm501fb_par *VAR_24 = VAR_20->par;
 struct sm501fb_info *VAR_25 = VAR_24->info;
 unsigned long VAR_26;
 unsigned int VAR_27;
 int VAR_28;

 switch (VAR_21) {
 case 129:
  VAR_23 = VAR_25->pdata->fb_crt;
  VAR_26 = FUNC_8(VAR_25->regs + VAR_12);
  VAR_27 = (VAR_26 & VAR_13) ? 1 : 0;


  if (VAR_25->pdata->fb_route != VAR_17) {
   VAR_26 |= VAR_14;
   FUNC_11(VAR_26, VAR_25->regs + VAR_12);
  }

  break;

 case 128:
  VAR_23 = VAR_25->pdata->fb_pnl;
  VAR_26 = FUNC_8(VAR_25->regs + VAR_15);
  VAR_27 = (VAR_26 & VAR_16) ? 1 : 0;
  break;

 default:
  VAR_23 = ((void*)0);
  VAR_26 = 0;
  VAR_27 = 0;
  FUNC_0();
 }

 FUNC_2(VAR_25->dev, "fb %s %sabled at start\n",
   VAR_22, VAR_27 ? "en" : "dis");



 if (VAR_21 == 129 && VAR_25->pdata->fb_route == VAR_17) {
  VAR_26 &= ~VAR_14;
  FUNC_11(VAR_26, VAR_25->regs + VAR_12);
  VAR_27 = 0;
 }

 FUNC_9(VAR_20->fix.id, VAR_22, sizeof(VAR_20->fix.id));

 FUNC_7(&VAR_24->ops,
        (VAR_21 == 129) ? &VAR_18 : &VAR_19,
        sizeof(struct fb_ops));



 if ((VAR_23->flags & VAR_10) == 0)
  VAR_24->ops.fb_cursor = ((void*)0);

 VAR_20->fbops = &VAR_24->ops;
 VAR_20->flags = VAR_2 |
  VAR_3 | VAR_4;



 VAR_20->fix.type = VAR_7;
 VAR_20->fix.type_aux = 0;
 VAR_20->fix.xpanstep = 1;
 VAR_20->fix.ypanstep = 1;
 VAR_20->fix.ywrapstep = 0;
 VAR_20->fix.accel = VAR_5;



 VAR_20->var.nonstd = 0;
 VAR_20->var.activate = VAR_6;
 VAR_20->var.accel_flags = 0;
 VAR_20->var.vmode = VAR_8;
 VAR_20->var.bits_per_pixel = 16;

 if (VAR_27 && (VAR_23->flags & VAR_11) && 0) {


 } else {
  if (VAR_23->def_mode) {
   FUNC_2(VAR_25->dev, "using supplied mode\n");
   FUNC_6(&VAR_20->var, VAR_23->def_mode);

   VAR_20->var.bits_per_pixel = VAR_23->def_bpp ? VAR_23->def_bpp : 8;
   VAR_20->var.xres_virtual = VAR_20->var.xres;
   VAR_20->var.yres_virtual = VAR_20->var.yres;
  } else {
   VAR_28 = FUNC_4(&VAR_20->var, VAR_20,
        ((void*)0), ((void*)0), 0, ((void*)0), 8);

   if (VAR_28 == 0 || VAR_28 == 4) {
    FUNC_1(VAR_25->dev,
     "failed to get initial mode\n");
    return -VAR_0;
   }
  }
 }


 if (FUNC_3(&VAR_20->cmap, VAR_9, 0)) {
  FUNC_1(VAR_25->dev, "failed to allocate cmap memory\n");
  return -VAR_1;
 }
 FUNC_5(&VAR_20->cmap, VAR_20);

 VAR_28 = (VAR_20->fbops->fb_check_var)(&VAR_20->var, VAR_20);
 if (VAR_28)
  FUNC_1(VAR_25->dev, "check_var() failed on initial setup?\n");

 return 0;
}
