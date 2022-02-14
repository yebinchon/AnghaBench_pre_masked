
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev* FUNC_0 (int ,int ,struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct pci_dev *VAR_3 = ((void*)0);
 int VAR_4, VAR_5, VAR_6;
 u32 VAR_7;

 while (1) {

  VAR_3 = FUNC_0(VAR_1,
     VAR_0,
     VAR_3);
  if (!VAR_3)
   break;
  VAR_5 = VAR_3->bus->number;

  FUNC_1(VAR_3, 0x40, &VAR_7);
  VAR_6 = VAR_7;

  FUNC_1(VAR_3, 0x54, &VAR_7);




  for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
   if (VAR_6 == ((VAR_7 >> (3 * VAR_4)) & 0x7)) {
    VAR_2[VAR_5] = VAR_4;
    break;
   }
  }
 };
 return;
}
