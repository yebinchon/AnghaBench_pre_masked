
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_controller {int first_busno; int global_number; } ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_controller* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (int ,int,int,int *,unsigned long,int,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4,
        int VAR_5, u32 VAR_6)
{
 struct pci_controller *VAR_7 = FUNC_0(VAR_2);
 unsigned long VAR_8 = (VAR_4 & 0xff) | ((VAR_3 & 0xff) << 8)
  | (((VAR_2->number - VAR_7->first_busno) & 0xff) << 16)
  | (VAR_7->global_number << 24);
 int VAR_9;

 VAR_9 = FUNC_1(FUNC_2("write-pci-config"), 3, 1, ((void*)0),
    VAR_8, VAR_5, VAR_6);
 return VAR_9? VAR_0: VAR_1;
}
