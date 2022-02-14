
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_eeprom_info {scalar_t__ type; int semaphore_delay; int word_size; } ;
struct ixgbe_hw {struct ixgbe_eeprom_info eeprom; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,char*,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_6)
{
 struct ixgbe_eeprom_info *VAR_7 = &VAR_6->eeprom;
 u32 VAR_8;
 u16 VAR_9;

 if (VAR_7->type == VAR_4) {
  VAR_7->semaphore_delay = 10;
  VAR_7->type = VAR_5;

  VAR_8 = FUNC_0(VAR_6, VAR_0);
  VAR_9 = (u16)((VAR_8 & VAR_1) >>
                      VAR_2);
  VAR_7->word_size = 1 << (VAR_9 +
                            VAR_3);

  FUNC_1(VAR_6, "Eeprom params: type = %d, size = %d\n",
         VAR_7->type, VAR_7->word_size);
 }

 return 0;
}
