
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_1);
 s32 VAR_5 = -VAR_0;

 if (VAR_4 & VAR_3) {
  VAR_5 = 0;
  FUNC_1(VAR_1, VAR_3);
 }

 return VAR_5;
}
