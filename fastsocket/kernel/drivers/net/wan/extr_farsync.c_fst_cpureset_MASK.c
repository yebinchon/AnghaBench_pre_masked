
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fst_card_info {scalar_t__ family; scalar_t__ pci_conf; int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,unsigned char*) ;
 scalar_t__ FUNC_5 (int ,int ,unsigned char) ;

__attribute__((used)) static inline void
FUNC_6(struct fst_card_info *VAR_6)
{
 unsigned char VAR_7;
 unsigned long VAR_8 = VAR_5 + 1;
 unsigned int VAR_9;

 if (VAR_6->family == VAR_3) {
  if (FUNC_4
      (VAR_6->device, VAR_4, &VAR_7)) {
   FUNC_0(VAR_2,
       "Error in reading interrupt line register\n");
  }




  FUNC_3(0x440f, VAR_6->pci_conf + VAR_1 + 2);
  FUNC_3(0x040f, VAR_6->pci_conf + VAR_1 + 2);



  VAR_8 = VAR_5 + 1;
  while (VAR_5 < VAR_8)
                    ;
  FUNC_3(0x240f, VAR_6->pci_conf + VAR_1 + 2);



  VAR_8 = VAR_5 + 1;
  while (VAR_5 < VAR_8)
                    ;
  FUNC_3(0x040f, VAR_6->pci_conf + VAR_1 + 2);

  if (FUNC_5
      (VAR_6->device, VAR_4, VAR_7)) {
   FUNC_0(VAR_2,
       "Error in writing interrupt line register\n");
  }

 } else {
  VAR_9 = FUNC_1(VAR_6->pci_conf + VAR_0);

  FUNC_2(VAR_9 | 0x40000000, VAR_6->pci_conf + VAR_0);
  FUNC_2(VAR_9 & ~0x40000000, VAR_6->pci_conf + VAR_0);
 }
}
