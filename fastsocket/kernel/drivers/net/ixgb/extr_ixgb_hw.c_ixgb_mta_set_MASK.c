
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgb_hw {int dummy; } ;


 int FUNC_0 (struct ixgb_hw*,int ,int) ;
 int FUNC_1 (struct ixgb_hw*,int ,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct ixgb_hw *VAR_1,
    u32 VAR_2)
{
 u32 VAR_3, VAR_4;
 u32 VAR_5;
 VAR_4 = (VAR_2 >> 5) & 0x7F;
 VAR_3 = VAR_2 & 0x1F;

 VAR_5 = FUNC_0(VAR_1, VAR_0, VAR_4);

 VAR_5 |= (1 << VAR_3);

 FUNC_1(VAR_1, VAR_0, VAR_4, VAR_5);

 return;
}
