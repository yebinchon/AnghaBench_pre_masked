
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpd ;
typedef int u8 ;
struct prpmc2800_board_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int*,int,int,int) ;
 int FUNC_5 (char*,...) ;
 struct prpmc2800_board_info* FUNC_6 (int*) ;

__attribute__((used)) static struct prpmc2800_board_info *FUNC_7(void)
{
 struct prpmc2800_board_info *VAR_1;
 u8 VAR_2[5];
 int VAR_3;

 if (FUNC_3())
  FUNC_0("Error: Can't open i2c device\n\r");


 FUNC_1(VAR_2, 0, sizeof(VAR_2));
 VAR_3 = FUNC_4(VAR_0, VAR_2, 0x1fde, 2, sizeof(VAR_2));
 if (VAR_3 < 0)
  FUNC_0("Error: Couldn't read eeprom2\n\r");
 FUNC_2();


 VAR_1 = FUNC_6(VAR_2);
 if (VAR_1 == ((void*)0)) {
  FUNC_5("Error: Unsupported board or corrupted VPD:\n\r");
  FUNC_5("  0x%x 0x%x 0x%x 0x%x 0x%x\n\r",
    VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4]);
  FUNC_5("Using device tree defaults...\n\r");
 }

 return VAR_1;
}
