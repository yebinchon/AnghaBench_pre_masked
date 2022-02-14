
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_bus {int number; } ;
struct TYPE_2__ {int pcicfgd; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int ,unsigned int,int ,unsigned char) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static inline int FUNC_4(unsigned char VAR_2,
    struct pci_bus *VAR_3, unsigned int VAR_4,
    unsigned char VAR_5, u32 *VAR_6)
{
 unsigned int VAR_7 = FUNC_2(VAR_4);
 u8 VAR_8 = FUNC_1(VAR_4);


 FUNC_0(VAR_3->number, VAR_7, VAR_8, VAR_5);
 FUNC_3();

 if (VAR_2 == VAR_0)
  VAR_1->pcicfgd = *VAR_6;
 else
  *VAR_6 = VAR_1->pcicfgd;

 FUNC_3();

 return 0;
}
