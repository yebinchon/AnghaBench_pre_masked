
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {TYPE_1__* sh; int d11core; } ;
struct TYPE_2__ {int physhim; int clk; int corerev; scalar_t__ rx_antdiv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 scalar_t__ FUNC_3 (struct brcms_phy*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (struct brcms_phy*,int,int,int) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct brcms_phy_pub *VAR_7, u8 VAR_8)
{
 struct brcms_phy *VAR_9 = (struct brcms_phy *) VAR_7;
 bool VAR_10;

 VAR_9->sh->rx_antdiv = VAR_8;

 if (!(FUNC_3(VAR_9) && FUNC_1(VAR_9->sh->corerev, 16))) {
  if (VAR_8 > VAR_0)
   FUNC_6(VAR_9->sh->physhim, VAR_4, VAR_5,
           VAR_5, VAR_2);
  else
   FUNC_6(VAR_9->sh->physhim, VAR_4, VAR_5, 0,
           VAR_2);
 }

 if (FUNC_3(VAR_9))
  return;

 if (!VAR_9->sh->clk)
  return;

 VAR_10 = (0 == (FUNC_4(VAR_9->d11core, FUNC_0(VAR_6)) &
    VAR_3));
 if (!VAR_10)
  FUNC_8(VAR_9->sh->physhim);

 if (FUNC_2(VAR_9)) {
  if (VAR_8 > VAR_0) {
   FUNC_5(VAR_9, 0x410, (0x1 << 1), 0x01 << 1);
   FUNC_5(VAR_9, 0x410,
        (0x1 << 0),
        ((VAR_1 == VAR_8) ? 1 : 0) << 0);
  } else {
   FUNC_5(VAR_9, 0x410, (0x1 << 1), 0x00 << 1);
   FUNC_5(VAR_9, 0x410, (0x1 << 0), (u16) VAR_8 << 0);
  }
 }

 if (!VAR_10)
  FUNC_7(VAR_9->sh->physhim);

 return;
}
