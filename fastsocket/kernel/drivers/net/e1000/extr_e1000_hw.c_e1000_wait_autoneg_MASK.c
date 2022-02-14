
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_4)
{
 s32 VAR_5;
 u16 VAR_6;
 u16 VAR_7;

 FUNC_1("e1000_wait_autoneg");
 FUNC_1("Waiting for Auto-Neg to complete.\n");


 for (VAR_6 = VAR_2; VAR_6 > 0; VAR_6--) {



  VAR_5 = FUNC_0(VAR_4, VAR_3, &VAR_7);
  if (VAR_5)
   return VAR_5;
  VAR_5 = FUNC_0(VAR_4, VAR_3, &VAR_7);
  if (VAR_5)
   return VAR_5;
  if (VAR_7 & VAR_1) {
   return VAR_0;
  }
  FUNC_2(100);
 }
 return VAR_0;
}
