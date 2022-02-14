
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {scalar_t__ phyhang_avoid; TYPE_1__ pubpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct brcms_phy*,int) ;
 int FUNC_2 (struct brcms_phy*,int ,int,int,int,int*) ;

__attribute__((used)) static void
FUNC_3(struct brcms_phy *VAR_3, u8 VAR_4, u8 *VAR_5, u8 *VAR_6,
         u8 VAR_7)
{
 u32 VAR_8, VAR_9;
 u8 VAR_10;
 u8 VAR_11 =
  FUNC_0(VAR_3->pubpi.phy_rev,
   3) ? VAR_0 : VAR_1;
 u8 VAR_12 = 1;

 if (VAR_3->phyhang_avoid)
  FUNC_1(VAR_3, 1);

 VAR_8 = VAR_4 << 4;
 FUNC_2(VAR_3, VAR_2, VAR_7, VAR_8, 8,
     VAR_5);
 VAR_9 = VAR_8 + 0x080;
 FUNC_2(VAR_3, VAR_2, VAR_7, VAR_9, 8,
     VAR_6);

 for (VAR_10 = VAR_7; VAR_10 < 16; VAR_10++) {
  FUNC_2(VAR_3, VAR_2, 1,
      VAR_8 + VAR_10, 8, &VAR_11);
  FUNC_2(VAR_3, VAR_2, 1,
      VAR_9 + VAR_10, 8, &VAR_12);
 }

 if (VAR_3->phyhang_avoid)
  FUNC_1(VAR_3, 0);
}
