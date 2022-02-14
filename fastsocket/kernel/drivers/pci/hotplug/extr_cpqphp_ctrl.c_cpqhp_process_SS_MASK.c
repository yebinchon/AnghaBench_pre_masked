
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct slot {int number; } ;
struct pci_func {scalar_t__ device; int function; int bus; } ;
struct pci_bus {int number; } ;
struct controller {int add_support; int bus; struct pci_bus* pci_bus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct slot* FUNC_1 (struct controller*,scalar_t__) ;
 struct pci_func* FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (struct pci_bus*,unsigned int,int,scalar_t__*) ;
 int FUNC_4 (struct pci_func*,scalar_t__,struct controller*) ;
 int FUNC_5 (struct controller*,struct slot*) ;

int FUNC_6(struct controller *VAR_6, struct pci_func *VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10, VAR_11;
 u8 VAR_12 = 0;
 u8 VAR_13;
 u32 VAR_14 = 0;
 unsigned int VAR_15;
 struct slot* VAR_16;
 struct pci_bus *VAR_17 = VAR_6->pci_bus;
 int VAR_18=0;

 VAR_8 = VAR_7->device;
 VAR_7 = FUNC_2(VAR_6->bus, VAR_8, VAR_12++);
 VAR_16 = FUNC_1(VAR_6, VAR_8);
 if (VAR_16) {
  VAR_18 = VAR_16->number;
 }


 while (VAR_7 && !VAR_14) {
  VAR_17->number = VAR_7->bus;
  VAR_15 = FUNC_0(VAR_7->device, VAR_7->function);


  VAR_14 = FUNC_3 (VAR_17, VAR_15, 0x0B, &VAR_9);
  if (VAR_14)
   return VAR_14;

  if (VAR_9 == VAR_0) {

   VAR_14 = VAR_5;
  } else {

   VAR_14 = FUNC_3 (VAR_17, VAR_15, VAR_3, &VAR_10);
   if (VAR_14)
    return VAR_14;


   if ((VAR_10 & 0x7F) == VAR_4) {
    VAR_14 = FUNC_3 (VAR_17, VAR_15, VAR_1, &VAR_11);
    if (VAR_14)
     return VAR_14;



    if (VAR_11 & VAR_2)
     VAR_14 = VAR_5;
   }
  }

  VAR_7 = FUNC_2(VAR_6->bus, VAR_8, VAR_12++);
 }

 VAR_7 = FUNC_2(VAR_6->bus, VAR_8, 0);
 if ((VAR_7 != ((void*)0)) && !VAR_14) {

  VAR_13 = !(VAR_6->add_support);
  VAR_14 = FUNC_4(VAR_7, VAR_13, VAR_6);
 } else if (!VAR_14) {
  VAR_14 = 1;
 }

 if (VAR_16)
  FUNC_5(VAR_6, VAR_16);

 return VAR_14;
}
