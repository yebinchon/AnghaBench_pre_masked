
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_channel {int dummy; } ;
struct pci_bus {int number; struct pci_channel* sysdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct pci_channel*,int ) ;
 int FUNC_3 (struct pci_channel*,int,int ) ;

__attribute__((used)) static int FUNC_4(unsigned char VAR_8,
  struct pci_bus *VAR_9, unsigned int VAR_10, int VAR_11, u32 *VAR_12)
{
 struct pci_channel *VAR_13 = VAR_9->sysdata;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_1(VAR_10);
 VAR_15 = FUNC_0(VAR_10);

 if (VAR_9->number > 255 || VAR_14 > 31 || VAR_15 > 7)
  return VAR_1;
 if (VAR_10)
  return VAR_0;


 FUNC_3(VAR_13, (VAR_9->number << 24) | (VAR_14 << 19) |
    (VAR_15 << 16) | (VAR_11 & ~3), VAR_4);


 FUNC_3(VAR_13, (1 << 31), VAR_6);

 if (VAR_8 == VAR_3)
  *VAR_12 = FUNC_2(VAR_13, VAR_7);
 else
  FUNC_3(VAR_13, *VAR_12, VAR_7);


 if (FUNC_2(VAR_13, VAR_5) & ((1 << 29) | (1 << 28)))
  return VAR_0;

 return VAR_2;
}
