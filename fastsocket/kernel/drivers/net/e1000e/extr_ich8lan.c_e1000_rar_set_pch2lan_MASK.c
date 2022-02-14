
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int rar_entry_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void FUNC_10(struct e1000_hw *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;




 VAR_5 = ((u32)VAR_3[0] |
     ((u32)VAR_3[1] << 8) |
     ((u32)VAR_3[2] << 16) | ((u32)VAR_3[3] << 24));

 VAR_6 = ((u32)VAR_3[4] | ((u32)VAR_3[5] << 8));


 if (VAR_5 || VAR_6)
  VAR_6 |= VAR_0;

 if (VAR_4 == 0) {
  FUNC_9(FUNC_1(VAR_4), VAR_5);
  FUNC_6();
  FUNC_9(FUNC_0(VAR_4), VAR_6);
  FUNC_6();
  return;
 }

 if (VAR_4 < VAR_2->mac.rar_entry_count) {
  s32 VAR_7;

  VAR_7 = FUNC_4(VAR_2);
  if (VAR_7)
   goto out;

  FUNC_9(FUNC_3(VAR_4 - 1), VAR_5);
  FUNC_6();
  FUNC_9(FUNC_2(VAR_4 - 1), VAR_6);
  FUNC_6();

  FUNC_5(VAR_2);


  if ((FUNC_8(FUNC_3(VAR_4 - 1)) == VAR_5) &&
      (FUNC_8(FUNC_2(VAR_4 - 1)) == VAR_6))
   return;

  FUNC_7("SHRA[%d] might be locked by ME - FWSM=0x%8.8x\n",
        (VAR_4 - 1), FUNC_8(VAR_1));
 }

out:
 FUNC_7("Failed to write receive address at index %d\n", VAR_4);
}
