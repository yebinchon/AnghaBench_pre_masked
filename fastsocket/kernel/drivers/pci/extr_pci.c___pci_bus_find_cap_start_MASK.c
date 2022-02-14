
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_bus*,unsigned int,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct pci_bus *VAR_4,
        unsigned int VAR_5, u8 VAR_6)
{
 u16 VAR_7;

 FUNC_0(VAR_4, VAR_5, VAR_2, &VAR_7);
 if (!(VAR_7 & VAR_3))
  return 0;

 switch (VAR_6) {
 case 128:
 case 130:
  return VAR_0;
 case 129:
  return VAR_1;
 default:
  return 0;
 }

 return 0;
}
