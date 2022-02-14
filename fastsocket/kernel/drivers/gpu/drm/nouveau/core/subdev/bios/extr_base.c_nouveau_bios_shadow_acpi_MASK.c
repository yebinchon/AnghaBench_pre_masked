
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct nouveau_bios {int* data; int size; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (struct pci_dev*) ;
 TYPE_1__* FUNC_5 (struct nouveau_bios*) ;
 scalar_t__ FUNC_6 (int*,int) ;

__attribute__((used)) static void
FUNC_7(struct nouveau_bios *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_5(VAR_1)->pdev;
 int VAR_3, VAR_4, VAR_5;

 if (!FUNC_4(VAR_2)) {
  VAR_1->data = ((void*)0);
  return;
 }

 VAR_1->size = 0;
 VAR_1->data = FUNC_1(4096, VAR_0);
 if (VAR_1->data) {
  if (FUNC_3(VAR_1->data, 0, 4096) == 4096)
   VAR_1->size = VAR_1->data[2] * 512;
  FUNC_0(VAR_1->data);
 }

 if (!VAR_1->size)
  return;

 VAR_1->data = FUNC_1(VAR_1->size, VAR_0);
 if (VAR_1->data) {

  VAR_3 = FUNC_3(VAR_1->data, 0, VAR_1->size);
  if (VAR_3 != VAR_1->size ||
      FUNC_6(VAR_1->data, VAR_1->size)) {

   for (VAR_5 = 0; VAR_5 < VAR_1->size; VAR_5 += VAR_4) {
    VAR_4 = FUNC_2((VAR_1->size - VAR_5), (u32)4096);
    VAR_3 = FUNC_3(VAR_1->data, VAR_5, VAR_4);
    if (VAR_3 != VAR_4)
     break;
   }
  }
 }
}
