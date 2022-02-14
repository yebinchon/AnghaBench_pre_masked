
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int word_page_size; } ;
struct ixgbe_hw {TYPE_1__ eeprom; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,char*,int) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int,int,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int,int,int*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_1,
       u16 VAR_2)
{
 u16 VAR_3[VAR_0];
 s32 VAR_4 = 0;
 u16 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3[VAR_5] = VAR_5;

 VAR_1->eeprom.word_page_size = VAR_0;
 VAR_4 = FUNC_2(VAR_1, VAR_2,
          VAR_0, VAR_3);
 VAR_1->eeprom.word_page_size = 0;
 if (VAR_4 != 0)
  goto out;

 VAR_4 = FUNC_1(VAR_1, VAR_2, 1, VAR_3);
 if (VAR_4 != 0)
  goto out;





 VAR_1->eeprom.word_page_size = VAR_0 - VAR_3[0];

 FUNC_0(VAR_1, "Detected EEPROM page size = %d words.",
        VAR_1->eeprom.word_page_size);
out:
 return VAR_4;
}
