
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; int * parent; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_1, u32 VAR_2, u32 * VAR_3)
{

 if (VAR_1->parent != ((void*)0)) {
  *VAR_3 = VAR_1->number;
  FUNC_1(VAR_3 != ((void*)0));
 } else
  *VAR_3 = 0;

 if (*VAR_3 == 0) {

  if (FUNC_0(VAR_2) >= 10)
   return VAR_0;
 } else {

  if ((*VAR_3 >= 64) || (FUNC_0(VAR_2) >= 16))
   return VAR_0;
 }
 return 0;
}
