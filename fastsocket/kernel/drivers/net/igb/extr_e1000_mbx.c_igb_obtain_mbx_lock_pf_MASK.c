
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_2, u16 VAR_3)
{
 s32 VAR_4 = -VAR_0;
 u32 VAR_5;


 FUNC_2(FUNC_0(VAR_3), VAR_1);


 VAR_5 = FUNC_1(FUNC_0(VAR_3));
 if (VAR_5 & VAR_1)
  VAR_4 = 0;

 return VAR_4;
}
