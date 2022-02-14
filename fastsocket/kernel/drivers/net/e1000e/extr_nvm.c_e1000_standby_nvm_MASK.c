
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_nvm_info {scalar_t__ type; int delay_usec; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_3)
{
 struct e1000_nvm_info *VAR_4 = &VAR_3->nvm;
 u32 VAR_5 = FUNC_1(VAR_1);

 if (VAR_4->type == VAR_2) {

  VAR_5 |= VAR_0;
  FUNC_2(VAR_1, VAR_5);
  FUNC_0();
  FUNC_3(VAR_4->delay_usec);
  VAR_5 &= ~VAR_0;
  FUNC_2(VAR_1, VAR_5);
  FUNC_0();
  FUNC_3(VAR_4->delay_usec);
 }
}
