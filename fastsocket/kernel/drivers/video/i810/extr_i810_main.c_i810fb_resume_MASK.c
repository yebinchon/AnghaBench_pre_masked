
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_6__ {int i810_cursor_memory; int i810_fb_memory; } ;
struct TYPE_5__ {int offset; } ;
struct i810fb_par {int cur_state; TYPE_3__ cursor_heap; TYPE_2__ i810_gtt; TYPE_1__ fb; } ;
struct fb_info {TYPE_4__* fbops; struct i810fb_par* par; } ;
struct TYPE_8__ {int (* fb_blank ) (int ,struct fb_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct fb_info*,int ) ;
 int FUNC_3 (struct fb_info*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 struct fb_info* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,struct fb_info*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_4)
{
 struct fb_info *VAR_5 = FUNC_5(VAR_4);
 struct i810fb_par *VAR_6 = VAR_5->par;
 int VAR_7 = VAR_6->cur_state;

 VAR_6->cur_state = VAR_2;

 if (VAR_7 == VAR_1) {
  FUNC_8(VAR_4, VAR_0);
  return 0;
 }

 FUNC_0();
 FUNC_8(VAR_4, VAR_0);
 FUNC_6(VAR_4);

 if (FUNC_4(VAR_4))
  goto fail;

 FUNC_7(VAR_4);
 FUNC_1(VAR_6->i810_gtt.i810_fb_memory,
   VAR_6->fb.offset);
 FUNC_1(VAR_6->i810_gtt.i810_cursor_memory,
   VAR_6->cursor_heap.offset);
 FUNC_3(VAR_5);
 FUNC_2 (VAR_5, 0);
 VAR_5->fbops->fb_blank(VAR_3, VAR_5);
fail:
 FUNC_9();
 return 0;
}
