
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {int rx2tx_biasentry; TYPE_2__* sh; scalar_t__ phyhang_avoid; TYPE_1__ pubpi; int d11core; } ;
struct TYPE_4__ {int phyrxchain; int physhim; int clk; } ;


 size_t FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct brcms_phy*,int ) ;
 int FUNC_8 (struct brcms_phy*,int) ;
 int FUNC_9 (struct brcms_phy*,int ,size_t,int,int,int*) ;
 int FUNC_10 (struct brcms_phy*,int ,int,size_t,int,int*) ;
 int FUNC_11 (struct brcms_phy*,int,int) ;

void FUNC_12(struct brcms_phy_pub *VAR_7, u8 VAR_8)
{
 u16 VAR_9;
 u16 VAR_10[16];
 uint VAR_11;
 struct brcms_phy *VAR_12 = (struct brcms_phy *) VAR_7;
 u16 VAR_13;
 bool VAR_14;

 VAR_12->sh->phyrxchain = VAR_8;

 if (!VAR_12->sh->clk)
  return;

 VAR_14 = (0 == (FUNC_3(VAR_12->d11core, FUNC_1(VAR_6)) &
    VAR_0));
 if (!VAR_14)
  FUNC_6(VAR_12->sh->physhim);

 if (VAR_12->phyhang_avoid)
  FUNC_8(VAR_12, 1);

 VAR_9 = FUNC_4(VAR_12, 0xa2);
 VAR_9 &= ~(0xf << 4);
 VAR_9 |= ((u16) (VAR_8 & 0x3)) << 4;
 FUNC_11(VAR_12, 0xa2, VAR_9);

 if ((VAR_8 & 0x3) != 0x3) {

  FUNC_11(VAR_12, 0x20e, 1);

  if (FUNC_2(VAR_12->pubpi.phy_rev, 3)) {
   if (VAR_12->rx2tx_biasentry == -1) {
    FUNC_9(VAR_12, VAR_5,
       FUNC_0(VAR_10), 80,
       16, VAR_10);

    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_10); VAR_11++) {
     if (VAR_10[VAR_11] ==
         VAR_1) {
      VAR_12->rx2tx_biasentry = (u8) VAR_11;
      VAR_13 =
       VAR_3;
      FUNC_10(
       VAR_12,
       VAR_5,
       1, VAR_11,
       16,
       &VAR_13);
      break;
     } else if (VAR_10[VAR_11] ==
         VAR_2)
      break;
    }
   }
  }
 } else {

  FUNC_11(VAR_12, 0x20e, 30);

  if (FUNC_2(VAR_12->pubpi.phy_rev, 3)) {
   if (VAR_12->rx2tx_biasentry != -1) {
    VAR_13 = VAR_1;
    FUNC_10(VAR_12, VAR_5,
        1, VAR_12->rx2tx_biasentry,
        16, &VAR_13);
    VAR_12->rx2tx_biasentry = -1;
   }
  }
 }

 FUNC_7(VAR_12, VAR_4);

 if (VAR_12->phyhang_avoid)
  FUNC_8(VAR_12, 0);

 if (!VAR_14)
  FUNC_5(VAR_12->sh->physhim);
}
