
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_ring {int tail; struct e1000_adapter* adapter; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int reset_task; struct e1000_hw hw; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_8(struct e1000_ring *VAR_2, unsigned int VAR_3)
{
 struct e1000_adapter *VAR_4 = VAR_2->adapter;
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 s32 VAR_6 = FUNC_0(VAR_5);

 FUNC_7(VAR_3, VAR_2->tail);

 if (FUNC_6(!VAR_6 && (VAR_3 != FUNC_4(VAR_2->tail)))) {
  u32 VAR_7 = FUNC_2(VAR_1);
  FUNC_3(VAR_1, VAR_7 & ~VAR_0);
  FUNC_1("ME firmware caused invalid RDT - resetting\n");
  FUNC_5(&VAR_4->reset_task);
 }
}
