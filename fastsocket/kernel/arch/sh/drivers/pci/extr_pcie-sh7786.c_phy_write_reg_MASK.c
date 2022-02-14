
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_channel {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (struct pci_channel*,int ) ;
 int FUNC_1 (struct pci_channel*,unsigned long,int ) ;
 int FUNC_2 (struct pci_channel*) ;

__attribute__((used)) static void FUNC_3(struct pci_channel *VAR_7, unsigned int VAR_8,
     unsigned int VAR_9, unsigned int VAR_10)
{
 unsigned long VAR_11, VAR_12;

 VAR_11 = (1 << VAR_2) + ((VAR_9 & 0xf) << VAR_3) +
   ((VAR_8 & 0xff) << VAR_0);


 VAR_12 = FUNC_0(VAR_7, VAR_5);
 VAR_12 |= (1 << VAR_1);
 FUNC_1(VAR_7, VAR_12, VAR_5);


 FUNC_1(VAR_7, VAR_10, VAR_6);
 FUNC_1(VAR_7, VAR_11, VAR_4);

 FUNC_2(VAR_7);


 FUNC_1(VAR_7, 0, VAR_4);

 FUNC_2(VAR_7);


 VAR_12 = FUNC_0(VAR_7, VAR_5);
 VAR_12 &= ~(1 << VAR_1);
 FUNC_1(VAR_7, VAR_12, VAR_5);
}
