
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct brcms_phy {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct brcms_phy*,int ,scalar_t__,int ) ;
 int FUNC_1 (struct brcms_phy*,scalar_t__,scalar_t__,scalar_t__,int ,int ,int) ;

int
FUNC_2(struct brcms_phy *VAR_1, u32 VAR_2, u16 VAR_3,
       u8 VAR_4, u8 VAR_5, bool VAR_6)
{
 u16 VAR_7;
 u16 VAR_8 = 0xffff;
 u16 VAR_9 = 0;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3,
        VAR_5);
 if (VAR_7 == 0)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_7, VAR_8, VAR_9, VAR_4,
    VAR_5, VAR_6);

 return 0;
}
