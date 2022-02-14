
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcms_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_phy*,int ) ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_2, u8 VAR_3)
{
 u8 VAR_4, VAR_5;

 VAR_4 = VAR_3 & 0x1;
 VAR_5 = (VAR_3 & 0x2) >> 1;
 if (!VAR_4)
  FUNC_0(VAR_2, VAR_0);

 if (!VAR_5)
  FUNC_0(VAR_2, VAR_1);
}
