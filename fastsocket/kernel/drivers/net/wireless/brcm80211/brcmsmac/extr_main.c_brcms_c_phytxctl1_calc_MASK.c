
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef size_t u32 ;
typedef int u16 ;
struct brcms_c_info {TYPE_1__* hw; int band; } ;
typedef int s16 ;
struct TYPE_4__ {int tx_phy_ctl3; } ;
struct TYPE_3__ {int d11core; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (size_t) ;
 TYPE_2__* VAR_3 ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (size_t) ;

__attribute__((used)) static u16 FUNC_10(struct brcms_c_info *VAR_4, u32 VAR_5)
{
 u16 VAR_6 = 0;
 u16 VAR_7;

 if (FUNC_0(VAR_4->band)) {
  VAR_7 = VAR_0;
 } else {
  VAR_7 = FUNC_7(VAR_5);

  if (VAR_7 < VAR_0) {
   FUNC_3(VAR_4->hw->d11core, "phytxctl1_calc: bw %d is "
      "not supported yet, set to 20L\n", VAR_7);
   VAR_7 = VAR_0;
  }
 }

 if (FUNC_5(VAR_5)) {
  uint VAR_8 = VAR_5 & VAR_2;


  VAR_6 = FUNC_8(VAR_5);

  VAR_6 |= (VAR_3[VAR_8].tx_phy_ctl3 << 8);
 } else if (FUNC_4(VAR_5) && !FUNC_0(VAR_4->band)
     && !FUNC_1(VAR_4->band)) {






  VAR_6 = (VAR_7 | (FUNC_9(VAR_5) << VAR_1));
 } else {
  s16 VAR_9;

  VAR_9 = FUNC_2(FUNC_6(VAR_5));
  if (VAR_9 == -1) {
   FUNC_3(VAR_4->hw->d11core, "phytxctl1_calc: wrong "
      "legacy OFDM/CCK rate\n");
   VAR_9 = 0;
  }

  VAR_6 =
      (VAR_7 | (VAR_9 << 8) |
       (FUNC_9(VAR_5) << VAR_1));
 }
 return VAR_6;
}
