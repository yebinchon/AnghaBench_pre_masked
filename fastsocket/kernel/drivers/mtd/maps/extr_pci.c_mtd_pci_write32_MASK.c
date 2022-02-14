
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct map_pci_info {scalar_t__ (* translate ) (struct map_pci_info*,unsigned long) ;scalar_t__ base; } ;
struct map_info {int dummy; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;


 scalar_t__ FUNC_0 (struct map_pci_info*,unsigned long) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_0, map_word VAR_1, unsigned long VAR_2)
{
 struct map_pci_info *VAR_3 = (struct map_pci_info *)VAR_0;

 FUNC_1(VAR_1.x[0], VAR_3->base + VAR_3->translate(VAR_3, VAR_2));
}
