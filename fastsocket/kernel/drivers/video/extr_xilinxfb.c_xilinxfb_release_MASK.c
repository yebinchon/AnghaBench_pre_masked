
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int smem_len; } ;
struct TYPE_5__ {TYPE_1__ fix; int cmap; } ;
struct xilinxfb_drvdata {int flags; int dcr_len; int dcr_host; int regs_phys; int regs; int fb_virt; int fb_phys; TYPE_2__ info; scalar_t__ fb_alloced; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 struct xilinxfb_drvdata* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xilinxfb_drvdata*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (struct xilinxfb_drvdata*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_3)
{
 struct xilinxfb_drvdata *VAR_4 = FUNC_2(VAR_3);





 FUNC_9(&VAR_4->info);

 FUNC_5(&VAR_4->info.cmap);

 if (VAR_4->fb_alloced)
  FUNC_4(VAR_3, FUNC_0(VAR_4->info.fix.smem_len),
      VAR_4->fb_virt, VAR_4->fb_phys);
 else
  FUNC_6(VAR_4->fb_virt);


 FUNC_11(VAR_4, VAR_1, 0);


 if (VAR_4->flags & VAR_0) {
  FUNC_6(VAR_4->regs);
  FUNC_8(VAR_4->regs_phys, 8);
 } else
  FUNC_1(VAR_4->dcr_host, VAR_4->dcr_len);

 FUNC_7(VAR_4);
 FUNC_3(VAR_3, ((void*)0));

 return 0;
}
