
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_0, u32 VAR_1,
      u8 *VAR_2)
{
 s32 VAR_3;
 u16 VAR_4 = 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1, 1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 *VAR_2 = (u8)VAR_4;

 return 0;
}
