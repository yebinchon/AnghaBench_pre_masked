
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct resource_list {int dummy; } ;
struct pci_dev {int class; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_1 (struct pci_dev*,struct resource_list*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_6,
     struct resource_list *VAR_7)
{
 u16 VAR_8 = VAR_6->class >> 8;


 if (VAR_8 == VAR_1 || VAR_8 == VAR_0)
  return;


 if (VAR_8 == VAR_2) {
  u16 VAR_9;
  FUNC_0(VAR_6, VAR_3, &VAR_9);
  if (VAR_9 & (VAR_4 | VAR_5))
   return;
 }

 FUNC_1(VAR_6, VAR_7);
}
