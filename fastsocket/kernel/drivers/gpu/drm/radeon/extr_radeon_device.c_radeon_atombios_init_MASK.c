
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* atom_context; struct card_info* atom_card_info; } ;
struct radeon_device {TYPE_1__ mode_info; int ddev; int bios; scalar_t__ rio_mem; } ;
struct card_info {int pll_write; int pll_read; int mc_write; int mc_read; void* ioreg_write; void* ioreg_read; void* reg_write; void* reg_read; int dev; } ;
struct TYPE_5__ {int mutex; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (struct card_info*,int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 struct card_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct radeon_device*) ;

int FUNC_7(struct radeon_device *VAR_10)
{
 struct card_info *VAR_11 =
     FUNC_3(sizeof(struct card_info), VAR_1);

 if (!VAR_11)
  return -VAR_0;

 VAR_10->mode_info.atom_card_info = VAR_11;
 VAR_11->dev = VAR_10->ddev;
 VAR_11->reg_read = VAR_8;
 VAR_11->reg_write = VAR_9;

 if (VAR_10->rio_mem) {
  VAR_11->ioreg_read = VAR_2;
  VAR_11->ioreg_write = VAR_3;
 } else {
  FUNC_0("Unable to find PCI I/O BAR; using MMIO for ATOM IIO\n");
  VAR_11->ioreg_read = VAR_8;
  VAR_11->ioreg_write = VAR_9;
 }
 VAR_11->mc_read = VAR_4;
 VAR_11->mc_write = VAR_5;
 VAR_11->pll_read = VAR_6;
 VAR_11->pll_write = VAR_7;

 VAR_10->mode_info.atom_context = FUNC_2(VAR_11, VAR_10->bios);
 if (!VAR_10->mode_info.atom_context) {
  FUNC_6(VAR_10);
  return -VAR_0;
 }

 FUNC_4(&VAR_10->mode_info.atom_context->mutex);
 FUNC_5(VAR_10->ddev);
 FUNC_1(VAR_10->mode_info.atom_context);
 return 0;
}
