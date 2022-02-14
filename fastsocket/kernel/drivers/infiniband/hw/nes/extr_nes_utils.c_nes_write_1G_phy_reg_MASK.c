
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct nes_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct nes_device*,int ) ;
 int FUNC_2 (struct nes_device*,int ,int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct nes_device *VAR_3, u8 VAR_4, u8 VAR_5, u16 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 FUNC_2(VAR_3, VAR_2,
   0x50020000 | VAR_6 | ((u32)VAR_4 << 18) | ((u32)VAR_5 << 23));
 for (VAR_8 = 0; VAR_8 < 100 ; VAR_8++) {
  FUNC_3(30);
  VAR_7 = FUNC_1(VAR_3, VAR_1);
  if (VAR_7 & 1) {

   FUNC_2(VAR_3, VAR_1, 1);
   break;
  }
 }
 if (!(VAR_7 & 1))
  FUNC_0(VAR_0, "Phy is not responding. interrupt status = 0x%X.\n",
    VAR_7);
}
