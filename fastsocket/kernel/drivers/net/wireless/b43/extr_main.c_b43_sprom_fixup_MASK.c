
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int board_rev; int boardflags_lo; } ;
struct TYPE_3__ {scalar_t__ vendor; int type; } ;
struct ssb_bus {int chip_id; scalar_t__ bustype; TYPE_2__ sprom; struct pci_dev* host_pci; TYPE_1__ boardinfo; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int ,int,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_1(struct ssb_bus *VAR_11)
{
 struct pci_dev *VAR_12;


 if (VAR_11->boardinfo.vendor == VAR_9 &&
     VAR_11->chip_id == 0x4301 && VAR_11->sprom.board_rev == 0x74)
  VAR_11->sprom.boardflags_lo |= VAR_1;
 if (VAR_11->boardinfo.vendor == VAR_8 &&
     VAR_11->boardinfo.type == 0x4E && VAR_11->sprom.board_rev > 0x40)
  VAR_11->sprom.boardflags_lo |= VAR_2;
 if (VAR_11->bustype == VAR_10) {
  VAR_12 = VAR_11->host_pci;
  if (FUNC_0(VAR_12, VAR_3, 0x4318, VAR_0, 0x100F) ||
      FUNC_0(VAR_12, VAR_3, 0x4320, VAR_4, 0x0003) ||
      FUNC_0(VAR_12, VAR_3, 0x4320, VAR_5, 0x12f8) ||
      FUNC_0(VAR_12, VAR_3, 0x4320, VAR_6, 0x0015) ||
      FUNC_0(VAR_12, VAR_3, 0x4320, VAR_6, 0x0014) ||
      FUNC_0(VAR_12, VAR_3, 0x4320, VAR_6, 0x0013) ||
      FUNC_0(VAR_12, VAR_3, 0x4320, VAR_7, 0x7010))
   VAR_11->sprom.boardflags_lo &= ~VAR_1;
 }
}
