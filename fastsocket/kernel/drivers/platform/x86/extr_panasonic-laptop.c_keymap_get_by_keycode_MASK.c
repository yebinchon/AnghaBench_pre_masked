
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcc_acpi {int* keymap; } ;


 int FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(struct pcc_acpi *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->keymap); VAR_2++) {
  if (VAR_0->keymap[VAR_2] == VAR_1)
   return VAR_2+1;
 }

 return 0;
}
