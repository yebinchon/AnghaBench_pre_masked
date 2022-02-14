
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_nvm_info {scalar_t__ type; int opcode_bits; } ;
struct e1000_hw {struct e1000_nvm_info nvm; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int) ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 () ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_8)
{
 struct e1000_nvm_info *VAR_9 = &VAR_8->nvm;
 u32 VAR_10 = FUNC_4(VAR_0);
 s32 VAR_11 = 0;
 u16 VAR_12 = 0;
 u8 VAR_13;


 if (VAR_9->type == VAR_7) {

  VAR_10 &= ~(VAR_1 | VAR_2);
  FUNC_6(VAR_0, VAR_10);
  FUNC_7();
  FUNC_5(1);
  VAR_12 = VAR_4;






  while (VAR_12) {
   FUNC_2(VAR_8, VAR_5,
            VAR_8->nvm.opcode_bits);
   VAR_13 = (u8)FUNC_1(VAR_8, 8);
   if (!(VAR_13 & VAR_6))
    break;

   FUNC_5(5);
   FUNC_3(VAR_8);
   VAR_12--;
  }

  if (!VAR_12) {
   FUNC_0("SPI NVM Status error\n");
   VAR_11 = -VAR_3;
   goto out;
  }
 }

out:
 return VAR_11;
}
