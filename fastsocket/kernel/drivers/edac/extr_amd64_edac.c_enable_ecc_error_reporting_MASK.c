
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int nb_ecc_prev; } ;
struct ecc_settings {int old_nbctl; int nbctl_valid; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (char*,int ,int,int) ;
 scalar_t__ FUNC_5 (struct ecc_settings*,int ,int ) ;

__attribute__((used)) static bool FUNC_6(struct ecc_settings *VAR_4, u8 VAR_5,
           struct pci_dev *VAR_6)
{
 bool VAR_7 = 1;
 u32 VAR_8, VAR_9 = 0x3;

 if (FUNC_5(VAR_4, VAR_5, VAR_3)) {
  FUNC_2("Error enabling ECC reporting over MCGCTL!\n");
  return 0;
 }

 FUNC_1(VAR_6, VAR_2, &VAR_8);

 VAR_4->old_nbctl = VAR_8 & VAR_9;
 VAR_4->nbctl_valid = 1;

 VAR_8 |= VAR_9;
 FUNC_3(VAR_6, VAR_2, VAR_8);

 FUNC_1(VAR_6, VAR_0, &VAR_8);

 FUNC_4("1: node %d, NBCFG=0x%08x[DramEccEn: %d]\n",
  VAR_5, VAR_8, !!(VAR_8 & VAR_1));

 if (!(VAR_8 & VAR_1)) {
  FUNC_2("DRAM ECC disabled on this node, enabling...\n");

  VAR_4->flags.nb_ecc_prev = 0;


  VAR_8 |= VAR_1;
  FUNC_3(VAR_6, VAR_0, VAR_8);

  FUNC_1(VAR_6, VAR_0, &VAR_8);

  if (!(VAR_8 & VAR_1)) {
   FUNC_2("Hardware rejected DRAM ECC enable,"
       "check memory DIMM configuration.\n");
   VAR_7 = 0;
  } else {
   FUNC_0("Hardware accepted DRAM ECC Enable\n");
  }
 } else {
  VAR_4->flags.nb_ecc_prev = 1;
 }

 FUNC_4("2: node %d, NBCFG=0x%08x[DramEccEn: %d]\n",
  VAR_5, VAR_8, !!(VAR_8 & VAR_1));

 return VAR_7;
}
