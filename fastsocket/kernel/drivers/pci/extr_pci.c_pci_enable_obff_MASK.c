
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {TYPE_1__* bus; } ;
typedef enum pci_obff_signal_type { ____Placeholder_pci_obff_signal_type } pci_obff_signal_type ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;

int FUNC_4(struct pci_dev *VAR_8, enum pci_obff_signal_type VAR_9)
{
 u32 VAR_10;
 u16 VAR_11;
 int VAR_12;

 FUNC_1(VAR_8, VAR_1, &VAR_10);
 if (!(VAR_10 & VAR_3))
  return -VAR_0;


 if (VAR_8->bus->self) {
  VAR_12 = FUNC_4(VAR_8->bus->self, VAR_9);
  if (VAR_12)
   return VAR_12;
 }

 FUNC_2(VAR_8, VAR_2, &VAR_11);
 if (VAR_10 & VAR_6)
  VAR_11 |= VAR_7;
 else {
  switch (VAR_9) {
  case 128:
   if (!(VAR_11 & VAR_7))
    VAR_11 |= VAR_4;
   break;
  case 129:
   VAR_11 &= ~VAR_7;
   VAR_11 |= VAR_5;
   break;
  default:
   FUNC_0(1, "bad OBFF signal type\n");
   return -VAR_0;
  }
 }
 FUNC_3(VAR_8, VAR_2, VAR_11);

 return 0;
}
