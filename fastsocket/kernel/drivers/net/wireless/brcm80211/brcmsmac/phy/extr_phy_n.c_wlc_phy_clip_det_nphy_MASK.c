
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int) ;
 int FUNC_1 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_0, u8 VAR_1, u16 *VAR_2)
{

 if (VAR_1 == 0) {
  VAR_2[0] = FUNC_0(VAR_0, 0x2c);
  VAR_2[1] = FUNC_0(VAR_0, 0x42);
 } else {
  FUNC_1(VAR_0, 0x2c, VAR_2[0]);
  FUNC_1(VAR_0, 0x42, VAR_2[1]);
 }
}
