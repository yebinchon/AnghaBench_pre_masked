
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;

s32 FUNC_3(struct e1000_hw *VAR_3)
{
 s32 VAR_4;
 u16 VAR_5;


 VAR_4 = FUNC_1(VAR_3, VAR_2, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_5 |= VAR_0;


 VAR_5 |= VAR_1;

 VAR_4 = FUNC_2(VAR_3, VAR_2, VAR_5);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_3);
}
