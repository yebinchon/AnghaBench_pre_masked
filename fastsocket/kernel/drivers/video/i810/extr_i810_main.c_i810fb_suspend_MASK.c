
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int event; } ;
struct TYPE_8__ {TYPE_5__ power_state; } ;
struct TYPE_9__ {TYPE_1__ power; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct TYPE_11__ {int i810_cursor_memory; int i810_fb_memory; } ;
struct i810fb_par {int cur_state; TYPE_4__ i810_gtt; } ;
struct fb_info {TYPE_3__* fbops; struct i810fb_par* par; } ;
typedef TYPE_5__ pm_message_t ;
struct TYPE_10__ {int (* fb_sync ) (struct fb_info*) ;} ;


 int VAR_0 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fb_info*,int) ;
 int FUNC_3 (int ,struct fb_info*) ;
 int FUNC_4 (struct pci_dev*,TYPE_5__) ;
 int FUNC_5 (struct pci_dev*) ;
 struct fb_info* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct fb_info*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_1, pm_message_t VAR_2)
{
 struct fb_info *VAR_3 = FUNC_6(VAR_1);
 struct i810fb_par *VAR_4 = VAR_3->par;

 VAR_4->cur_state = VAR_2.event;

 switch (VAR_2.event) {
 case 129:
 case 128:
  VAR_1->dev.power.power_state = VAR_2;
  return 0;
 }

 FUNC_0();
 FUNC_2(VAR_3, 1);

 if (VAR_3->fbops->fb_sync)
  VAR_3->fbops->fb_sync(VAR_3);

 FUNC_3(VAR_0, VAR_3);
 FUNC_1(VAR_4->i810_gtt.i810_fb_memory);
 FUNC_1(VAR_4->i810_gtt.i810_cursor_memory);

 FUNC_7(VAR_1);
 FUNC_5(VAR_1);
 FUNC_8(VAR_1, FUNC_4(VAR_1, VAR_2));
 FUNC_9();

 return 0;
}
