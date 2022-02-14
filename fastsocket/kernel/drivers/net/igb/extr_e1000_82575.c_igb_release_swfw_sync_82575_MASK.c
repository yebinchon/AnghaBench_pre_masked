
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_1, u16 VAR_2)
{
 u32 VAR_3;

 while (FUNC_0(VAR_1) != 0);


 VAR_3 = FUNC_2(VAR_0);
 VAR_3 &= ~VAR_2;
 FUNC_3(VAR_0, VAR_3);

 FUNC_1(VAR_1);
}
