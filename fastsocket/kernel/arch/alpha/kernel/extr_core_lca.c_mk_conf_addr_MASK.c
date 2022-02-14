
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vulp ;
typedef int u8 ;
struct pci_bus {int number; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct pci_bus *VAR_1, unsigned int VAR_2, int VAR_3,
      unsigned long *VAR_4)
{
 unsigned long VAR_5;
 u8 VAR_6 = VAR_1->number;

 if (VAR_6 == 0) {
  int VAR_7 = VAR_2 >> 3;
  int VAR_8 = VAR_2 & 0x7;



  if (VAR_7 > 12) {
   return -1;
  }

  *(vulp)VAR_0 = 0;
  VAR_5 = (1 << (11 + VAR_7)) | (VAR_8 << 8) | VAR_3;
 } else {

  *(vulp)VAR_0 = 1;
  VAR_5 = (VAR_6 << 16) | (VAR_2 << 8) | VAR_3;
 }
 *VAR_4 = VAR_5;
 return 0;
}
