
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct nphy_txiqcal_ladder {int member_0; int member_1; scalar_t__ percent; int g_env; } ;
struct brcms_phy {int nphy_txcal_bbmult; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct brcms_phy*,int ,int,int,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_2, u16 VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 u16 VAR_6;
 u16 VAR_7;

 struct nphy_txiqcal_ladder VAR_8[] = {
  {3, 0}, {4, 0}, {6, 0}, {9, 0}, {13, 0}, {18, 0},
  {25, 0}, {25, 1}, {25, 2}, {25, 3}, {25, 4}, {25, 5},
  {25, 6}, {25, 7}, {35, 7}, {50, 7}, {71, 7}, {100, 7}
 };

 struct nphy_txiqcal_ladder VAR_9[] = {
  {3, 0}, {4, 0}, {6, 0}, {9, 0}, {13, 0}, {18, 0},
  {25, 0}, {35, 0}, {50, 0}, {71, 0}, {100, 0}, {100, 1},
  {100, 2}, {100, 3}, {100, 4}, {100, 5}, {100, 6}, {100, 7}
 };

 VAR_6 = (VAR_3 == VAR_1) ?
   ((VAR_2->nphy_txcal_bbmult >> 8) & 0xff) :
   (VAR_2->nphy_txcal_bbmult & 0xff);

 for (VAR_4 = 0; VAR_4 < 18; VAR_4++) {
  VAR_5 = VAR_8[VAR_4].percent * VAR_6;
  VAR_5 /= 100;

  VAR_7 =
   ((VAR_5 & 0xff) << 8) | VAR_8[VAR_4].g_env;
  FUNC_0(VAR_2, VAR_0, 1, VAR_4, 16,
      &VAR_7);

  VAR_5 = VAR_9[VAR_4].percent * VAR_6;
  VAR_5 /= 100;

  VAR_7 =
   ((VAR_5 & 0xff) << 8) | VAR_9[VAR_4].g_env;
  FUNC_0(VAR_2, VAR_0, 1, VAR_4 + 32,
      16, &VAR_7);
 }
}
