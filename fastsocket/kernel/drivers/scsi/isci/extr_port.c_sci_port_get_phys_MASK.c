
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct isci_port {scalar_t__* phy_table; } ;


 size_t VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct isci_port *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->phy_table[VAR_2])
   VAR_3 |= (1 << VAR_2);

 return VAR_3;
}
