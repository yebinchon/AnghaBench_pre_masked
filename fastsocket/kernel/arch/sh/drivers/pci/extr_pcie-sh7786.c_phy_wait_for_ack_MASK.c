
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_channel*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct pci_channel *VAR_3)
{
 unsigned int VAR_4 = 100;

 while (VAR_4--) {
  if (FUNC_0(VAR_3, VAR_2) & (1 << VAR_0))
   return 0;

  FUNC_1(100);
 }

 return -VAR_1;
}
