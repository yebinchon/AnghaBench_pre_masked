
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_bus {int number; TYPE_1__* self; } ;
struct TYPE_2__ {int device; } ;


 size_t FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct pci_bus*) ;
 int* VAR_0 ;
 int FUNC_2 (int ,int ,unsigned int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_1, unsigned int VAR_2, int VAR_3, int VAR_4, u32 VAR_5)
{
 u8 VAR_6;

 VAR_6 = VAR_0[FUNC_0(VAR_1->self->device, VAR_2)];

 if ((VAR_6) && (VAR_3 == VAR_6))
  VAR_5 = VAR_5 & 0xfffffffc;

 return FUNC_2(FUNC_1(VAR_1), VAR_1->number,
      VAR_2, VAR_3, VAR_4, VAR_5);
}
