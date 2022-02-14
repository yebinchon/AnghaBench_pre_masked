
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_channel {int dummy; } ;
struct pci_bus {struct pci_channel* sysdata; } ;


 int FUNC_0 (struct pci_bus*,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pci_channel*,int ) ;
 int FUNC_2 (struct pci_channel*,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_5, unsigned int VAR_6,
    int VAR_7, int VAR_8, u32 VAR_9)
{
 struct pci_channel *VAR_10 = VAR_5->sysdata;
 unsigned long VAR_11;
 int VAR_12;
 u32 VAR_13;

 FUNC_3(&VAR_4, VAR_11);
 FUNC_2(VAR_10, FUNC_0(VAR_5, VAR_6, VAR_7), VAR_2);
 VAR_13 = FUNC_1(VAR_10, VAR_3);
 FUNC_4(&VAR_4, VAR_11);

 switch (VAR_8) {
 case 1:
  VAR_12 = (VAR_7 & 3) << 3;
  VAR_13 &= ~(0xff << VAR_12);
  VAR_13 |= ((VAR_9 & 0xff) << VAR_12);
  break;
 case 2:
  VAR_12 = (VAR_7 & 2) << 3;
  VAR_13 &= ~(0xffff << VAR_12);
  VAR_13 |= ((VAR_9 & 0xffff) << VAR_12);
  break;
 case 4:
  VAR_13 = VAR_9;
  break;
 default:
  return VAR_0;
 }

 FUNC_2(VAR_10, VAR_13, VAR_3);

 return VAR_1;
}
