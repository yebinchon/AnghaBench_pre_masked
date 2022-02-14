
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_channel*,int ) ;
 int FUNC_1 (struct pci_channel*,int,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct pci_channel *VAR_2)
{
 unsigned int VAR_3 = 100;


 FUNC_1(VAR_2, 0x60, 0xf, 0x004b008b);
 FUNC_1(VAR_2, 0x61, 0xf, 0x00007b41);
 FUNC_1(VAR_2, 0x64, 0xf, 0x00ff4f00);
 FUNC_1(VAR_2, 0x65, 0xf, 0x09070907);
 FUNC_1(VAR_2, 0x66, 0xf, 0x00000010);
 FUNC_1(VAR_2, 0x74, 0xf, 0x0007001c);
 FUNC_1(VAR_2, 0x79, 0xf, 0x01fc000d);


 FUNC_1(VAR_2, 0x67, 0xf, 0x00000400);

 while (VAR_3--) {
  if (FUNC_0(VAR_2, VAR_1))
   return 0;

  FUNC_2(100);
 }

 return -VAR_0;
}
