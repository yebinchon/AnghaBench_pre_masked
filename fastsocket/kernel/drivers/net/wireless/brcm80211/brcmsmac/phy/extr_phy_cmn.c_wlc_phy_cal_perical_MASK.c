
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {scalar_t__ nphy_perical; int first_cal_after_assoc; void* nphy_lastcal_temp; int radio_chanspec; int nphy_txiqlocal_chanspec; int phycal_tempdelta; int cal_type_override; } ;
typedef void* s16 ;


 int FUNC_0 (struct brcms_phy*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct brcms_phy*) ;

 scalar_t__ VAR_6 ;



 int VAR_7 ;
 int FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*,int ) ;
 int FUNC_4 (struct brcms_phy*,int ) ;
 void* FUNC_5 (struct brcms_phy*) ;

void FUNC_6(struct brcms_phy_pub *VAR_8, u8 VAR_9)
{
 s16 VAR_10 = 0;
 s16 VAR_11 = 0;
 bool VAR_12 = 1;
 struct brcms_phy *VAR_13 = (struct brcms_phy *) VAR_8;

 if (!FUNC_0(VAR_13))
  return;

 if ((VAR_13->nphy_perical == VAR_1) ||
     (VAR_13->nphy_perical == VAR_4))
  return;

 switch (VAR_9) {
 case 133:
  break;

 case 131:
  if (VAR_13->nphy_perical == VAR_5) {
   if (FUNC_1(VAR_13))
    FUNC_2(VAR_13);

   FUNC_3(
    VAR_13,
    VAR_3);
  }
  break;

 case 132:
 case 130:
 case 129:
  if ((VAR_13->nphy_perical == VAR_5) &&
      FUNC_1(VAR_13))
   FUNC_2(VAR_13);

  VAR_13->first_cal_after_assoc = 1;

  VAR_13->cal_type_override = VAR_2;

  if (VAR_13->phycal_tempdelta)
   VAR_13->nphy_lastcal_temp = FUNC_5(VAR_13);

  FUNC_4(VAR_13, VAR_2);
  break;

 case 128:
  if (VAR_13->phycal_tempdelta) {
   VAR_10 = FUNC_5(VAR_13);
   VAR_11 =
    (VAR_10 > VAR_13->nphy_lastcal_temp) ?
    VAR_10 - VAR_13->nphy_lastcal_temp :
    VAR_13->nphy_lastcal_temp - VAR_10;

   if ((VAR_11 < (s16) VAR_13->phycal_tempdelta) &&
       (VAR_13->nphy_txiqlocal_chanspec ==
        VAR_13->radio_chanspec))
    VAR_12 = 0;
   else
    VAR_13->nphy_lastcal_temp = VAR_10;
  }

  if (VAR_12) {
   if (VAR_13->nphy_perical == VAR_5) {
    if (!FUNC_1(VAR_13))
     FUNC_3(
      VAR_13,
      VAR_7);
   } else if (VAR_13->nphy_perical == VAR_6)
    FUNC_4(VAR_13,
            VAR_0);
  }
  break;
 default:
  break;
 }
}
