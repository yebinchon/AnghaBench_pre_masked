
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int nb_ecc_prev; } ;
struct ecc_settings {int old_nbctl; TYPE_1__ flags; int nbctl_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_3 (struct ecc_settings*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ecc_settings *VAR_4, u8 VAR_5,
     struct pci_dev *VAR_6)
{
 u32 VAR_7, VAR_8 = 0x3;


 if (!VAR_4->nbctl_valid)
  return;

 FUNC_0(VAR_6, VAR_2, &VAR_7);
 VAR_7 &= ~VAR_8;
 VAR_7 |= VAR_4->old_nbctl;

 FUNC_2(VAR_6, VAR_2, VAR_7);


 if (!VAR_4->flags.nb_ecc_prev) {
  FUNC_0(VAR_6, VAR_0, &VAR_7);
  VAR_7 &= ~VAR_1;
  FUNC_2(VAR_6, VAR_0, VAR_7);
 }


 if (FUNC_3(VAR_4, VAR_5, VAR_3))
  FUNC_1("Error restoring NB MCGCTL settings!\n");
}
