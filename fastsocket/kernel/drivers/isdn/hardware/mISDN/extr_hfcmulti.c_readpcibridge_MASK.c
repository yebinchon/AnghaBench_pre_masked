
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfc_multi {scalar_t__ pci_iobase; } ;


 int FUNC_0 (struct hfc_multi*,int ,int) ;
 int VAR_0 ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned short,scalar_t__) ;

inline unsigned char
FUNC_3(struct hfc_multi *VAR_1, unsigned char VAR_2)
{
 unsigned short VAR_3;
 unsigned char VAR_4;

 if (!VAR_1->pci_iobase)
  return 0;


 FUNC_0(VAR_1, VAR_0, 0x4);

 if (VAR_2 == 0)
  VAR_3 = 0x4000;
 else
  VAR_3 = 0x5800;



 FUNC_2(VAR_3, VAR_1->pci_iobase + 4);
 VAR_4 = FUNC_1(VAR_1->pci_iobase);


 FUNC_0(VAR_1, VAR_0, 0x0);

 return VAR_4;
}
