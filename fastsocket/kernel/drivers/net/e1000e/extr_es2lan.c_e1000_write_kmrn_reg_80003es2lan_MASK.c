
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_3, u32 VAR_4,
         u16 VAR_5)
{
 u32 VAR_6;
 s32 VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_6 = ((VAR_4 << VAR_1) &
         VAR_0) | VAR_5;
 FUNC_3(VAR_2, VAR_6);
 FUNC_2();

 FUNC_4(2);

 FUNC_1(VAR_3);

 return VAR_7;
}
