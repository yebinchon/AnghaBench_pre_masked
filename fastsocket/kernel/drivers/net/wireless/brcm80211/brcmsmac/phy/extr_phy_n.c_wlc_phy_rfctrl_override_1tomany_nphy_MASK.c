
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct brcms_phy*,int,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct brcms_phy *VAR_3, u16 VAR_4, u16 VAR_5,
         u8 VAR_6, u8 VAR_7)
{
 u16 VAR_8 = 0, VAR_9 = 0;
 u16 VAR_10 = 0;

 if (FUNC_0(VAR_3->pubpi.phy_rev, 7)) {

  switch (VAR_4) {
  case 130:
   FUNC_1(
    VAR_3, (0x1 << 5),
    VAR_5, VAR_6, VAR_7,
    VAR_1);
   FUNC_1(
    VAR_3, (0x1 << 4), VAR_5,
    VAR_6, VAR_7,
    VAR_1);
   FUNC_1(
    VAR_3, (0x1 << 3), VAR_5,
    VAR_6, VAR_7,
    VAR_1);
   break;
  case 132:
   FUNC_1(
    VAR_3, (0x1 << 2),
    VAR_5, VAR_6, VAR_7,
    VAR_1);
   FUNC_1(
    VAR_3, (0x1 << 1), VAR_5,
    VAR_6, VAR_7,
    VAR_1);
   FUNC_1(
    VAR_3, (0x1 << 0), VAR_5,
    VAR_6, VAR_7,
    VAR_1);
   FUNC_1(
    VAR_3, (0x1 << 1), VAR_5,
    VAR_6, VAR_7,
    VAR_2);
   FUNC_1(
    VAR_3, (0x1 << 11), 0,
    VAR_6, VAR_7,
    VAR_1);
   break;
  case 129:
   FUNC_1(
    VAR_3, (0x1 << 2),
    VAR_5, VAR_6, VAR_7,
    VAR_0);
   FUNC_1(
    VAR_3, (0x1 << 1), VAR_5,
    VAR_6, VAR_7,
    VAR_1);
   FUNC_1(
    VAR_3, (0x1 << 0), VAR_5,
    VAR_6, VAR_7,
    VAR_2);
   FUNC_1(
    VAR_3, (0x1 << 2), VAR_5,
    VAR_6, VAR_7,
    VAR_2);
   FUNC_1(
    VAR_3, (0x1 << 11), 1,
    VAR_6, VAR_7,
    VAR_1);
   break;
  case 131:
   VAR_8 = VAR_5 & 0x000ff;
   VAR_9 = VAR_5 & 0x0ff00;
   VAR_9 = VAR_9 >> 8;

   FUNC_1(
    VAR_3, (0x1 << 11),
    VAR_8, VAR_6,
    VAR_7,
    VAR_0);
   FUNC_1(
    VAR_3, (0x3 << 13),
    VAR_9, VAR_6,
    VAR_7,
    VAR_0);
   break;
  case 128:
   VAR_10 = VAR_5 & 0x7fff;
   VAR_9 = VAR_5 & 0x8000;
   VAR_9 = VAR_9 >> 14;

   FUNC_1(
    VAR_3, (0x1 << 12),
    VAR_10, VAR_6, VAR_7,
    VAR_0);
   FUNC_1(
    VAR_3, (0x1 << 13),
    VAR_9, VAR_6,
    VAR_7,
    VAR_0);
   break;
  }
 }
}
