
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct txpwr_limits {scalar_t__* ofdm; scalar_t__* mcs_20_siso; } ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {TYPE_1__* sh; scalar_t__* txpwr_limit; } ;
struct TYPE_2__ {int physhim; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*,struct txpwr_limits*,int ) ;

void
FUNC_6(struct brcms_phy_pub *VAR_2, struct txpwr_limits *VAR_3,
     u16 VAR_4)
{
 struct brcms_phy *VAR_5 = (struct brcms_phy *) VAR_2;

 FUNC_5(VAR_5, VAR_3, VAR_4);

 if (FUNC_0(VAR_5)) {
  int VAR_6, VAR_7;
  for (VAR_6 = VAR_1, VAR_7 = 0;
       VAR_7 < VAR_0; VAR_6++, VAR_7++) {
   if (VAR_3->mcs_20_siso[VAR_7])
    VAR_5->txpwr_limit[VAR_6] = VAR_3->mcs_20_siso[VAR_7];
   else
    VAR_5->txpwr_limit[VAR_6] = VAR_3->ofdm[VAR_7];
  }
 }

 FUNC_2(VAR_5->sh->physhim);

 FUNC_4(VAR_5);
 FUNC_3(VAR_5);
 FUNC_1(VAR_5->sh->physhim);
}
