
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy {int radio_chanspec; } ;
typedef int s8 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_4(struct brcms_phy *VAR_4)
{
 s8 VAR_5[] = { 8, 13, 17, 22 };
 s8 VAR_6[] = { -2, 7, 11, 15 };
 s8 VAR_7[] = { -4, -1, 2, 5, 5, 5, 5, 5, 5, 5 };
 s8 VAR_8[] = {
  0x0, 0x01, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03 };

 FUNC_1(VAR_4, 0x1c, (0x1 << 13), (1 << 13));
 FUNC_1(VAR_4, 0x32, (0x1 << 13), (1 << 13));

 FUNC_1(VAR_4, 0x289, (0xff << 0), (0x46 << 0));

 FUNC_1(VAR_4, 0x283, (0xff << 0), (0x3c << 0));
 FUNC_1(VAR_4, 0x280, (0xff << 0), (0x3c << 0));

 FUNC_2(VAR_4, VAR_0, 4, 0x8, 8,
     VAR_5);
 FUNC_2(VAR_4, VAR_1, 4, 0x8, 8,
     VAR_5);

 FUNC_2(VAR_4, VAR_0, 4, 0x10, 8,
     VAR_6);
 FUNC_2(VAR_4, VAR_1, 4, 0x10, 8,
     VAR_6);

 FUNC_2(VAR_4, VAR_0, 10, 0x20, 8,
     VAR_7);
 FUNC_2(VAR_4, VAR_1, 10, 0x20, 8,
     VAR_7);

 FUNC_2(VAR_4, VAR_2, 10, 0x20, 8,
     VAR_8);
 FUNC_2(VAR_4, VAR_3, 10, 0x20, 8,
     VAR_8);

 FUNC_3(VAR_4, 0x37, 0x74);
 FUNC_3(VAR_4, 0x2ad, 0x74);
 FUNC_3(VAR_4, 0x38, 0x18);
 FUNC_3(VAR_4, 0x2ae, 0x18);

 FUNC_3(VAR_4, 0x2b, 0xe8);
 FUNC_3(VAR_4, 0x41, 0xe8);

 if (FUNC_0(VAR_4->radio_chanspec)) {

  FUNC_1(VAR_4, 0x300, (0x3f << 0), (0x12 << 0));
  FUNC_1(VAR_4, 0x301, (0x3f << 0), (0x12 << 0));
 } else {

  FUNC_1(VAR_4, 0x300, (0x3f << 0), (0x10 << 0));
  FUNC_1(VAR_4, 0x301, (0x3f << 0), (0x10 << 0));
 }
}
