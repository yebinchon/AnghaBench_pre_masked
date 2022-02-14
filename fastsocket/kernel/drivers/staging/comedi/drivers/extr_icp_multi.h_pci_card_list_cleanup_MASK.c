
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcilst_struct {int pcidev; struct pcilst_struct* next; } ;


 struct pcilst_struct* VAR_0 ;
 int FUNC_0 (struct pcilst_struct*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(unsigned short VAR_1)
{
 struct pcilst_struct *VAR_2, *VAR_3;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  FUNC_1(VAR_2->pcidev);
  FUNC_0(VAR_2);
 }

 VAR_0 = ((void*)0);
}
