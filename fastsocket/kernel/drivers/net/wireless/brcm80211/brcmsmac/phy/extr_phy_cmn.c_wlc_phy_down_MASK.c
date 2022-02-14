
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {scalar_t__ nphy_iqcal_chanspec_5G; scalar_t__ nphy_iqcal_chanspec_2G; scalar_t__ phycal_timer; } ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(struct brcms_phy_pub *VAR_0)
{
 struct brcms_phy *VAR_1 = (struct brcms_phy *) VAR_0;
 int VAR_2 = 0;

 if (VAR_1->phycal_timer
     && !FUNC_0(VAR_1->phycal_timer))
  VAR_2++;

 VAR_1->nphy_iqcal_chanspec_2G = 0;
 VAR_1->nphy_iqcal_chanspec_5G = 0;

 return VAR_2;
}
