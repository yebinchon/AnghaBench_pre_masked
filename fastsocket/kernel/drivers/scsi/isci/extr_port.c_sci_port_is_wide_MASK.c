
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct isci_port {int ** phy_table; } ;


 size_t VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct isci_port *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->phy_table[VAR_2] != ((void*)0)) {
   VAR_3++;
  }
 }

 return VAR_3 != 1;
}
