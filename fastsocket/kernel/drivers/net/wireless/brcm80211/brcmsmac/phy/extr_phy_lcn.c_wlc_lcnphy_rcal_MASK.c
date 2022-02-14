
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcms_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct brcms_phy*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct brcms_phy*,int ,int) ;
 scalar_t__ FUNC_4 (struct brcms_phy*,int ) ;
 scalar_t__ FUNC_5 (struct brcms_phy*) ;

__attribute__((used)) static void FUNC_6(struct brcms_phy *VAR_7)
{
 u8 VAR_8;

 FUNC_1(VAR_7, VAR_2, 0xfD);

 FUNC_3(VAR_7, VAR_0, 0x40);
 FUNC_3(VAR_7, VAR_5, 0x10);

 FUNC_3(VAR_7, VAR_4, 0x80);
 FUNC_3(VAR_7, VAR_6, 0x02);

 FUNC_3(VAR_7, VAR_1, 0x01);

 FUNC_3(VAR_7, VAR_2, 0x02);
 FUNC_2(5);
 FUNC_0(!FUNC_5(VAR_7), 10 * 1000 * 1000);

 if (FUNC_5(VAR_7)) {
  VAR_8 = (u8) FUNC_4(VAR_7, VAR_3);
  VAR_8 = VAR_8 & 0x1f;
 }

 FUNC_1(VAR_7, VAR_2, 0xfD);

 FUNC_1(VAR_7, VAR_1, 0xFE);
}
