
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_1)
{
 s32 VAR_2;


 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  FUNC_1("Error Resetting the PHY\n");
  return VAR_2;
 }

 return VAR_0;
}
