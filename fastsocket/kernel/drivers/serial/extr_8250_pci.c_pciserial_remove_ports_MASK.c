
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_private {int nr; int dev; int ** remapped_bar; int * line; } ;
struct pci_serial_quirk {int (* exit ) (int ) ;} ;


 int VAR_0 ;
 struct pci_serial_quirk* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct serial_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct serial_private *VAR_1)
{
 struct pci_serial_quirk *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++)
  FUNC_3(VAR_1->line[VAR_3]);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->remapped_bar[VAR_3])
   FUNC_1(VAR_1->remapped_bar[VAR_3]);
  VAR_1->remapped_bar[VAR_3] = ((void*)0);
 }




 VAR_2 = FUNC_0(VAR_1->dev);
 if (VAR_2->exit)
  VAR_2->exit(VAR_1->dev);

 FUNC_2(VAR_1);
}
