
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct e1000_adapter {int num_vectors; scalar_t__ msix_entries; struct e1000_hw hw; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct e1000_adapter *VAR_1, u32 VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_1->hw;
 u32 VAR_4 = VAR_2 ? 1000000000 / (VAR_2 * 256) : 0;

 if (VAR_1->msix_entries) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_1->num_vectors; VAR_5++)
   FUNC_2(VAR_4, VAR_3->hw_addr + FUNC_0(VAR_5));
 } else {
  FUNC_1(VAR_0, VAR_4);
 }
}
