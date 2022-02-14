
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int,int) ;

int FUNC_3(struct pci_dev *VAR_2, bool VAR_3,
        unsigned int VAR_4, u32 VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 FUNC_0("devfn %x decode %d cmd %x flags %d\n",
   VAR_2->devfn, VAR_3, VAR_4, VAR_5);

 if (!(VAR_5 & VAR_1))
  return 0;

 if ((VAR_4 & VAR_0) == 0)
  return 0;

 VAR_6 = FUNC_1(VAR_2->bus);
 VAR_7 = VAR_2->bus->number;

 VAR_8 = FUNC_2(VAR_3, VAR_6, VAR_7);
 FUNC_0("vga decode %d %x:%x, rc: %d\n", VAR_3, VAR_6, VAR_7, VAR_8);

 return VAR_8;
}
