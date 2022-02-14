
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef size_t u8 ;
struct d11rxhdr {int PhyRxStatus_1; int RxStatus2; int PhyRxStatus_2; } ;
struct brcms_phy_pub {scalar_t__ radioid; } ;
struct brcms_phy_lcnphy {int lcnphy_pkteng_rssi_slope; } ;
struct TYPE_4__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_2__ u; TYPE_1__* sh; } ;
struct TYPE_3__ {int corerev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 (struct brcms_phy*,struct d11rxhdr*) ;

int FUNC_2(struct brcms_phy_pub *VAR_7,
    struct d11rxhdr *VAR_8)
{
 int VAR_9 = VAR_8->PhyRxStatus_1 & VAR_4;
 uint VAR_10 = VAR_7->radioid;
 struct brcms_phy *VAR_11 = (struct brcms_phy *) VAR_7;

 if ((VAR_11->sh->corerev >= 11)
     && !(VAR_8->RxStatus2 & VAR_5)) {
  VAR_9 = VAR_3;
  goto end;
 }

 if (FUNC_0(VAR_11)) {
  u8 VAR_12 = (VAR_8->PhyRxStatus_2 & 0xFC00) >> 10;
  struct brcms_phy_lcnphy *VAR_13 = VAR_11->u.pi_lcnphy;

  if (VAR_9 > 127)
   VAR_9 -= 256;

  VAR_9 = VAR_9 + VAR_6[VAR_12];
  if ((VAR_9 > -46) && (VAR_12 > 18))
   VAR_9 = VAR_9 + 7;

  VAR_9 = VAR_9 + VAR_13->lcnphy_pkteng_rssi_slope;

  VAR_9 = VAR_9 + 2;

 }

 if (FUNC_0(VAR_11)) {
  if (VAR_9 > 127)
   VAR_9 -= 256;
 } else if (VAR_10 == VAR_0 || VAR_10 == VAR_1
     || VAR_10 == VAR_2) {
  VAR_9 = FUNC_1(VAR_11, VAR_8);
 }

end:
 return VAR_9;
}
