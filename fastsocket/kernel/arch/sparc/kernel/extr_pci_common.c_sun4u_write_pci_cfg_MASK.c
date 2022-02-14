
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_pbm_info {int dummy; } ;
struct pci_bus {unsigned char number; struct pci_pbm_info* sysdata; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,int) ;
 int * FUNC_5 (struct pci_pbm_info*,unsigned char,unsigned int,int) ;
 int FUNC_6 (struct pci_pbm_info*,unsigned char,unsigned int,int,int,int ) ;

__attribute__((used)) static int FUNC_7(struct pci_bus *VAR_1, unsigned int VAR_2,
          int VAR_3, int VAR_4, u32 VAR_5)
{
 struct pci_pbm_info *VAR_6 = VAR_1->sysdata;
 unsigned char VAR_7 = VAR_1->number;
 u32 *VAR_8;

 if (!VAR_1->number && !FUNC_0(VAR_2))
  return FUNC_6(VAR_6, VAR_7, VAR_2, VAR_3,
      VAR_4, VAR_5);

 VAR_8 = FUNC_5(VAR_6, VAR_7, VAR_2, VAR_3);
 if (!VAR_8)
  return VAR_0;

 switch (VAR_4) {
 case 1:
  FUNC_3((u8 *)VAR_8, VAR_5);
  break;

 case 2:
  if (VAR_3 & 0x01) {
   FUNC_4("pci_write_config_word: misaligned reg [%x]\n",
          VAR_3);
   return VAR_0;
  }
  FUNC_1((u16 *)VAR_8, VAR_5);
  break;

 case 4:
  if (VAR_3 & 0x03) {
   FUNC_4("pci_write_config_dword: misaligned reg [%x]\n",
          VAR_3);
   return VAR_0;
  }
  FUNC_2(VAR_8, VAR_5);
 }
 return VAR_0;
}
